#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from orange_robot_interfaces.action import ExecuteSequence
from std_msgs.msg import String
import serial
import time


class ArduinoCommanderAction(Node):
    def __init__(self):
        super().__init__('arduino_commander_action')
        self.ser = None
        self.action_server = None
        self.arduino_ready = False

        try:
            self.ser = serial.Serial('/dev/ttyACM0', 9600, timeout=15)
            self.get_logger().info("Serial connection to Arduino established.")
            
            # Wait for Arduino to initialize and send READY
            if self.wait_for_arduino_ready():
                self.arduino_ready = True
                self.get_logger().info("✅ Arduino is ready and initialized!")
            else:
                raise RuntimeError("Arduino failed to initialize properly")

        except Exception as e:
            self.get_logger().error(f"Unable to connect or initialize Arduino: {e}")
            return

        # Initialize the action server after confirming Arduino is ready
        self.action_server = ActionServer(
            self,
            ExecuteSequence,
            'execute_sequence',
            self.execute_callback
        )

    def wait_for_arduino_ready(self):
        """Wait for Arduino READY signal with proper initialization"""
        if not self.ser:
            return False
            
        # Clear both input and output buffers
        self.ser.reset_input_buffer()
        self.ser.reset_output_buffer()
        
        # Give Arduino time to boot up and initialize servos
        self.get_logger().info("⏳ Waiting for Arduino to initialize...")
        time.sleep(5)  # Increased wait time for servo initialization
        
        # Clear any boot messages
        timeout_start = time.time()
        while time.time() - timeout_start < 3:
            if self.ser.in_waiting > 0:
                boot_msg = self.ser.readline().decode().strip()
                self.get_logger().info(f"Arduino boot message: {boot_msg}")
                if "READY" in boot_msg:
                    return True
            time.sleep(0.1)
        
        # If no READY received, wait longer and check again
        self.get_logger().warn("No READY signal received, waiting longer...")
        timeout_start = time.time()
        while time.time() - timeout_start < 10:
            if self.ser.in_waiting > 0:
                response = self.ser.readline().decode().strip()
                self.get_logger().info(f"Arduino message: {response}")
                if "READY" in response:
                    return True
            time.sleep(0.5)
        
        return False

    def send_command_robust(self, cmd, expected_ack, max_retries=3, timeout=20.0):
        """Send command with robust error handling and retries"""
        if not self.ser or not self.arduino_ready:
            self.get_logger().error("Arduino not ready for commands")
            return False
            
        for attempt in range(max_retries):
            try:
                # Clear input buffer before sending
                self.ser.reset_input_buffer()
                
                # Send command with proper formatting
                command_str = f"<{cmd}>"
                self.ser.write(command_str.encode())
                self.ser.flush()
                self.get_logger().info(f"📤 Sent to Arduino (attempt {attempt + 1}): {cmd}")
                
                # Wait for response with increased timeout
                start_time = time.time()
                response_received = False
                
                while time.time() - start_time < timeout:
                    if self.ser.in_waiting > 0:
                        response = self.ser.readline().decode().strip()
                        self.get_logger().info(f"📥 Arduino response: '{response}'")
                        
                        if expected_ack in response:
                            self.get_logger().info(f"✅ Command '{cmd}' acknowledged successfully")
                            return True
                        elif "ERROR" in response:
                            self.get_logger().error(f"❌ Arduino error: '{response}'")
                            break
                        elif response:  # Non-empty unexpected response
                            self.get_logger().warn(f"⚠️ Unexpected response: '{response}', expected: '{expected_ack}'")
                    
                    time.sleep(0.2)  # Increased polling interval
                
                # Command failed on this attempt
                self.get_logger().warn(f"⏰ Command '{cmd}' timeout/failed on attempt {attempt + 1}")
                
                # Clear any remaining data before retry
                while self.ser.in_waiting > 0:
                    stale = self.ser.readline().decode().strip()
                    self.get_logger().info(f"🧹 Clearing stale data: {stale}")
                
                if attempt < max_retries - 1:
                    self.get_logger().info(f"🔄 Retrying command '{cmd}' in 2 seconds...")
                    time.sleep(2)
                
            except Exception as e:
                self.get_logger().error(f"💥 Exception during command '{cmd}': {e}")
                time.sleep(2)
        
        self.get_logger().error(f"❌ Command '{cmd}' failed after {max_retries} attempts")
        return False

    def execute_callback(self, goal_handle):
        self.get_logger().info("🤖 Starting Arduino sequence execution...")
        
        g = goal_handle.request

        try:
            # Step 1: Go home
            if g.home:
                self.get_logger().info("🏠 Moving to home position...")
                if not self.send_command_robust("HOME", "ACK_HOME", timeout=25.0):
                    goal_handle.abort()
                    return ExecuteSequence.Result(success=False, result="Failed to reach home position")
                goal_handle.publish_feedback(ExecuteSequence.Feedback(feedback="Moved to home position"))
                time.sleep(3.0)  # Wait for movement to complete

            # Step 2: Move to target
            if g.move_to_target:
                self.get_logger().info("🎯 Moving to target position...")
                angles = g.angles
                cmd = f"ANGLES,{int(angles[0])},{int(angles[1])},{int(angles[2])},{int(angles[3])}"
                if not self.send_command_robust(cmd, "ACK_ANGLES", timeout=30.0):
                    goal_handle.abort()
                    return ExecuteSequence.Result(success=False, result="Failed to move to target position")
                goal_handle.publish_feedback(ExecuteSequence.Feedback(feedback="Moved to target position"))
                time.sleep(4.0)  # Wait for complex movement to complete
                
            # Step 3: Grip
            if g.grip:
                self.get_logger().info("🤏 Gripping object...")
                grip_cmd = f"GRIPPER,{int(g.diameter)}"
                if not self.send_command_robust(grip_cmd, "ACK_GRIPPER", timeout=15.0):
                    goal_handle.abort()
                    return ExecuteSequence.Result(success=False, result="Failed to grip object")
                goal_handle.publish_feedback(ExecuteSequence.Feedback(feedback="Object gripped successfully"))
                time.sleep(3.0)  # Wait for gripper action
                
            # Step 4: Place
            if g.place:
                self.get_logger().info("📦 Placing object...")
                ripeness = 1 if g.ripe else 0
                if not self.send_command_robust(f"RIPENESS,{ripeness}", "ACK_RIPENESS", timeout=25.0):
                    goal_handle.abort()
                    return ExecuteSequence.Result(success=False, result="Failed to place object")
                goal_handle.publish_feedback(ExecuteSequence.Feedback(feedback="Object placed successfully"))
                time.sleep(4.0)  # Wait for placement and return to home
                
            # Step 5: Final return home (if needed)
            if g.return_home:
                self.get_logger().info("🔙 Final return to home...")
                if not self.send_command_robust("HOME", "ACK_HOME", timeout=20.0):
                    goal_handle.abort()
                    return ExecuteSequence.Result(success=False, result="Failed to return home")
                goal_handle.publish_feedback(ExecuteSequence.Feedback(feedback="Returned to home position"))
                time.sleep(2.0)
            
            self.get_logger().info("✅ Complete sequence executed successfully!")
            goal_handle.succeed()
            return ExecuteSequence.Result(success=True, result="Complete sequence executed successfully")
            
        except Exception as e:
            self.get_logger().error(f"💥 Exception during sequence execution: {e}")
            goal_handle.abort()
            return ExecuteSequence.Result(success=False, result=f"Sequence failed: {str(e)}")

def main(args=None):
    rclpy.init(args=args)
    node = ArduinoCommanderAction()
    
    if node.arduino_ready:
        try:
            rclpy.spin(node)
        except KeyboardInterrupt:
            node.get_logger().info("Shutting down Arduino Commander...")
    else:
        node.get_logger().error("Arduino not ready, shutting down...")
    
    if node.ser:
        node.ser.close()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()