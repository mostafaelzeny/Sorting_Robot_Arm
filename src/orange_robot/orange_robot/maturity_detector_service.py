#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import Int8
from std_srvs.srv import Trigger
from cv_bridge import CvBridge
import cv2
import numpy as np

class MaturityDetectorService(Node):
    def __init__(self):
        super().__init__('maturity_detector_service')

        self.publisher_ = self.create_publisher(Int8, 'ripeness', 10)
        self.service_ = self.create_service(Trigger, 'check_ripeness', self.check_ripeness_callback)
        self.subscription = self.create_subscription(Image, '/camera/image_raw', self.image_callback, 10)

        self.bridge = CvBridge()
        self.latest_frame = None

        self.ripe_orange_lower = (10, 150, 150)
        self.ripe_orange_upper = (25, 255, 255)
        self.immature_orange_lower = (26, 100, 100)
        self.immature_orange_upper = (50, 255, 255)

        self.kernel = np.ones((5, 5), np.uint8)
        self.get_logger().info("MaturityDetectorService is ready and listening for service calls.")

    def image_callback(self, msg):
        try:
            self.latest_frame = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        except Exception as e:
            self.get_logger().error(f"Error converting image: {e}")

    def check_ripeness_callback(self, request, response):
        if self.latest_frame is None:
            response.success = False
            response.message = "No image frame received yet."
            return response

        frame = cv2.resize(self.latest_frame, (640, 480))
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

        ripe_mask = cv2.inRange(hsv, np.array(self.ripe_orange_lower), np.array(self.ripe_orange_upper))
        ripe_mask = cv2.morphologyEx(ripe_mask, cv2.MORPH_OPEN, self.kernel)
        ripe_mask = cv2.morphologyEx(ripe_mask, cv2.MORPH_CLOSE, self.kernel)

        immature_mask = cv2.inRange(hsv, np.array(self.immature_orange_lower), np.array(self.immature_orange_upper))
        immature_mask = cv2.morphologyEx(immature_mask, cv2.MORPH_OPEN, self.kernel)
        immature_mask = cv2.morphologyEx(immature_mask, cv2.MORPH_CLOSE, self.kernel)

        ripe_area = cv2.countNonZero(ripe_mask)
        immature_area = cv2.countNonZero(immature_mask)
        total_area = ripe_area + immature_area

        if total_area == 0:
            response.success = False
            response.message = "No orange detected."
            return response

        maturity_percentage = (ripe_area / total_area) * 100
        is_ripe = maturity_percentage >= 60

        msg = Int8()
        msg.data = 1 if is_ripe else 0
        self.publisher_.publish(msg)

        response.success = True
        response.message = f"Ripe: {is_ripe} (Maturity: {maturity_percentage:.2f}%)"
        return response

def main(args=None):
    rclpy.init(args=args)
    node = MaturityDetectorService()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
