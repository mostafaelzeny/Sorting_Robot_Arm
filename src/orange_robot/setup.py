from setuptools import setup, find_packages
import os
from glob import glob

package_name = 'orange_robot'
from launch import LaunchDescription
setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    include_package_data=True,
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
        (os.path.join('share', package_name, 'srv'), glob('srv/*.srv')),
        (os.path.join('share', package_name, 'action'), glob('action/*.action')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mo',
    maintainer_email='mostafaelzeny27@gmail.com',
    description='ROS2 robotic arm system with services and actions',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'state_controller = orange_robot.state_controller:main',
            'serial_servo_service = orange_robot.serial_servo_service:main',
            'maturity_detector_service = orange_robot.maturity_detector_service:main',
            'angles_calculator_service = orange_robot.angles_calculator_service:main',
            'arduino_commander_action = orange_robot.arduino_commander_action:main',
            # 'arduino_monitor = orange_robot.arduino_monitor:main',
            'camera_publisher = orange_robot.camera_publisher:main',
        ],
    },
)
