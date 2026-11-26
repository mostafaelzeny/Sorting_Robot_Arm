from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(package='orange_robot', executable='camera_publisher', output='screen'),
        Node(package='orange_robot', executable='serial_servo_service', output='screen'),
        Node(package='orange_robot', executable='maturity_detector_service', output='screen'),
        Node(package='orange_robot', executable='angles_calculator_service', output='screen'),
        Node(package='orange_robot', executable='arduino_commander_action', output='screen'),
        # Node(package='orange_robot', executable='arduino_monitor', output='screen'),
        Node(package='orange_robot', executable='state_controller', output='screen'),
    ])