#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_srvs.srv import Trigger
from geometry_msgs.msg import Point
from std_msgs.msg import Float32, Int8
from rclpy.action import ActionClient
from orange_robot_interfaces.action import ExecuteSequence
from orange_robot_interfaces.srv import CalculateAngles
import time

class StateController(Node):
    def __init__(self):
        super().__init__('state_controller')

        # Service clients
        self.detect_orange_client = self.create_client(Trigger, 'detect_orange')
        self.ripeness_client = self.create_client(Trigger, 'check_ripeness')
        self.angle_client = self.create_client(CalculateAngles, 'calculate_angles')

        # Data storage
        self.position = None
        self.diameter = None
        self.ripeness = None
        self.is_executing = False

        # Subscribers
        self.create_subscription(Point, 'position', self.position_callback, 10)
        self.create_subscription(Float32, 'diameter', self.diameter_callback, 10)
        self.create_subscription(Int8, 'ripeness', self.ripeness_callback, 10)

        # Action client
        self.arm_client = ActionClient(self, ExecuteSequence, 'execute_sequence')

        # Timer with longer interval to allow for complete execution
        self.timer = self.create_timer(15.0, self.timer_callback)  # Increased to 15 seconds
        self.get_logger().info("🎮 State controller initialized with 15-second cycle interval")

    def position_callback(self, msg):
        self.position = (msg.x, msg.y)
        self.get_logger().debug(f"📍 Position updated: ({msg.x:.2f}, {msg.y:.2f})")

    def diameter_callback(self, msg):
        self.diameter = msg.data
        self.get_logger().debug(f"📏 Diameter updated: {msg.data:.2f} cm")

    def ripeness_callback(self, msg):
        self.ripeness = int(msg.data)
        self.get_logger().debug(f"🍊 Ripeness updated: {'Ripe' if msg.data == 1 else 'Unripe'}")

    def timer_callback(self):
        """Timer callback that only starts new cycle if not already executing"""
        if not self.is_executing:
            # Create task for async execution
            rclpy.get_global_executor().create_task(self.execute_cycle())
        else:
            self.get_logger().info("⏳ Previous sequence still running, skipping cycle...")

    async def execute_cycle(self):
        """Complete cycle: detect → ripeness → calculate → execute → reset"""
        self.is_executing = True
        self.get_logger().info("🔄 Starting new detection and execution cycle...")

        try:
            # Wait for all services to be available
            self.get_logger().info("🔍 Checking service availability...")
            services = [
                (self.detect_orange_client, "detect_orange"),
                (self.ripeness_client, "check_ripeness"), 
                (self.angle_client, "calculate_angles")
            ]
            
            for client, name in services:
                timeout_count = 0
                while not client.wait_for_service(timeout_sec=2.0):
                    timeout_count += 1
                    if timeout_count > 5:
                        self.get_logger().error(f"❌ Service {name} unavailable after 10 seconds")
                        return
                    self.get_logger().warn(f"⏳ Waiting for service {name}...")

            # Step 1: Detect orange
            self.get_logger().info("👁️ Calling detect_orange service...")
            response = await self.detect_orange_client.call_async(Trigger.Request())
            if not response.success:
                self.get_logger().warn("❌ No orange detected, skipping cycle")
                return

            # Step 2: Wait for position and diameter data
            self.get_logger().info("📊 Waiting for position and diameter data...")
            if not await self.wait_for_data('position and diameter', timeout=8.0):
                self.get_logger().warn("❌ Timeout waiting for position/diameter data")
                return

            x, y = self.position
            self.get_logger().info(f"🍊 Orange detected at ({x:.2f}, {y:.2f}) cm, diameter={self.diameter:.2f} cm")

            # Step 3: Check ripeness
            self.get_logger().info("🔍 Calling check_ripeness service...")
            response = await self.ripeness_client.call_async(Trigger.Request())
            if not response.success:
                self.get_logger().warn("❌ Ripeness check failed")
                return

            # Step 4: Wait for ripeness data
            self.get_logger().info("📊 Waiting for ripeness data...")
            if not await self.wait_for_data('ripeness', timeout=5.0):
                self.get_logger().warn("❌ Timeout waiting for ripeness data")
                return

            ripeness_text = "Ripe" if self.ripeness == 1 else "Unripe"
            self.get_logger().info(f"🟡/🟢 Ripeness classification: {ripeness_text}")

            # Step 5: Calculate angles
            self.get_logger().info("📐 Calling calculate_angles service...")
            angle_req = CalculateAngles.Request()
            angle_req.x = x
            angle_req.y = y
            angle_response = await self.angle_client.call_async(angle_req)

            if not angle_response.angles:
                self.get_logger().warn("❌ Angle calculation failed")
                return

            self.get_logger().info(f"📏 Calculated angles: {[f'{a:.1f}°' for a in angle_response.angles]}")

            # Step 6: Wait for Arduino action server
            self.get_logger().info("🤖 Waiting for Arduino action server...")
            if not self.arm_client.wait_for_server(timeout_sec=10.0):
                self.get_logger().error("❌ Arduino action server not available")
                return

            # Step 7: Execute complete sequence on Arduino
            goal_msg = ExecuteSequence.Goal()
            goal_msg.home = True
            goal_msg.move_to_target = True
            goal_msg.grip = True
            goal_msg.place = True
            goal_msg.return_home = True
            goal_msg.ripe = (self.ripeness == 1)
            goal_msg.angles = angle_response.angles
            goal_msg.diameter = float(self.diameter)  # ✅ Fixed: Keep as float!

            self.get_logger().info("🚀 Sending complete sequence to Arduino...")
            self.get_logger().info(f"   📋 Sequence: Home → Target({x:.1f},{y:.1f}) → Grip({self.diameter:.1f}cm) → Place({ripeness_text}) → Home")
            
            # Send goal and wait for result
            goal_handle = await self.arm_client.send_goal_async(
                goal_msg, 
                feedback_callback=self.feedback_callback
            )
            
            if not goal_handle.accepted:
                self.get_logger().error("❌ Arduino rejected the goal")
                return

            # Wait for the complete sequence to finish
            self.get_logger().info("⏳ Waiting for Arduino sequence to complete...")
            result = await goal_handle.get_result_async()

            if result.result.success:
                self.get_logger().info(f"✅ COMPLETE SUCCESS: {result.result.result}")
            else:
                self.get_logger().error(f"❌ SEQUENCE FAILED: {result.result.result}")

        except Exception as e:
            self.get_logger().error(f"💥 Exception in execute_cycle: {e}")
            import traceback
            self.get_logger().error(f"Traceback: {traceback.format_exc()}")
        
        finally:
            # Reset data and execution flag
            self.position = None
            self.diameter = None
            self.ripeness = None
            self.is_executing = False
            self.get_logger().info("🔄 Cycle complete, ready for next detection in 15 seconds...")

    def feedback_callback(self, feedback_msg):
        """Log Arduino feedback during execution"""
        self.get_logger().info(f"[🤖 Arduino] {feedback_msg.feedback.feedback}")

    async def wait_for_data(self, what, timeout=8.0):
        """Wait for specific data with timeout"""
        start = time.time()
        check_interval = 0.2
        
        while time.time() - start < timeout:
            if what == 'position and diameter':
                if self.position is not None and self.diameter is not None:
                    return True
            elif what == 'ripeness':
                if self.ripeness is not None:
                    return True
            
            await rclpy.sleep(check_interval)
        
        self.get_logger().warn(f"⏰ Timeout waiting for {what} after {timeout:.1f} seconds")
        return False

def main(args=None):
    rclpy.init(args=args)
    node = StateController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("🛑 State controller shutting down...")
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()