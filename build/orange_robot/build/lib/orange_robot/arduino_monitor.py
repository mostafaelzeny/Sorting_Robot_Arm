# #!/usr/bin/env python3

# import rclpy
# from rclpy.node import Node
# from std_msgs.msg import String
# import serial
# import threading

# class ArduinoMonitor(Node):
#     def __init__(self):
#         super().__init__('arduino_monitor')

#         self.publisher_ = self.create_publisher(String, 'arduino_logs', 10)

#         # Set your serial port and baud rate
#         try:
#             self.ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
#             self.get_logger().info("Monitoring serial port /dev/ttyUSB0...")
#         except serial.SerialException:
#             self.get_logger().error("Could not open /dev/ttyUSB0.")
#             self.ser = None
#             return

#         # Start monitoring in a background thread
#         self.thread = threading.Thread(target=self.monitor_serial)
#         self.thread.daemon = True
#         self.thread.start()

#     def monitor_serial(self):
#         while rclpy.ok() and self.ser:
#             try:
#                 line = self.ser.readline().decode().strip()
#                 if line:
#                     self.get_logger().info(f"[Arduino] {line}")
#                     msg = String()
#                     msg.data = line
#                     self.publisher_.publish(msg)
#             except Exception as e:
#                 self.get_logger().error(f"Serial read error: {e}")

#     def destroy_node(self):
#         if self.ser:
#             self.ser.close()
#         super().destroy_node()

# def main(args=None):
#     rclpy.init(args=args)
#     node = ArduinoMonitor()
#     try:
#         rclpy.spin(node)
#     except KeyboardInterrupt:
#         pass
#     finally:
#         node.destroy_node()
#         rclpy.shutdown()

# if __name__ == '__main__':
#     main()
