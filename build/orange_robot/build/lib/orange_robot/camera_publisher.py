#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class CameraPublisher(Node):
    def __init__(self):
        super().__init__('camera_publisher')

        self.publisher_ = self.create_publisher(Image, 'camera/image_raw', 10)
        self.bridge = CvBridge()

        # Open camera with V4L2 backend (adjust index if needed)
        self.cap = cv2.VideoCapture(2, cv2.CAP_V4L2)

        if not self.cap.isOpened():
            self.get_logger().error("❌ Failed to open camera. Check /dev/video2 or use another index.")
            return

        self.get_logger().info("✅ Camera publisher started and capturing...")

        # Publish at ~10Hz
        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        ret, frame = self.cap.read()
        if ret:
            # Publish to ROS 2
            msg = self.bridge.cv2_to_imgmsg(frame, encoding="bgr8")
            self.publisher_.publish(msg)

            # Show OpenCV window
            cv2.imshow("Live Camera View", frame)
            cv2.waitKey(1)  # Needed to keep the window responsive
        else:
            self.get_logger().warn("⚠️ Failed to read frame from camera.")

    def destroy_node(self):
        if self.cap.isOpened():
            self.cap.release()
        cv2.destroyAllWindows()  # Close OpenCV window
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = CameraPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
