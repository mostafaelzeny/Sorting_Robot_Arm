🦾 Sorting Robot Arm (Graduation Project)
🎯 Overview

A brief summary of your project:

The Sorting Robot Arm is a ROS 2-based robotic system designed to detect and sort oranges according to their maturity using computer vision. It integrates a 4-DOF robotic arm and a servo gripper, controlled via Arduino, and visualized in RViz and Gazebo.

⚙️ System Architecture

Components:

ROS 2 Humble — middleware for communication between nodes

Camera Node — captures images and publishes them as ROS Image messages

Maturity Detector Node — processes images with OpenCV to detect ripeness level

Inverse Kinematics Node — calculates arm joint angles to reach target positions

Serial Servo Node — communicates with Arduino to move the arm and gripper

Arduino Controller — executes motor commands and controls gripper servo

You can also include a system diagram (I can help you draw one if you want).

🧠 Features

Orange maturity detection using color segmentation (OpenCV + NumPy)

ROS 2 services and topics for modular communication

Real-time control of 4-DOF robotic arm via serial connection

Visualization and simulation in RViz and Gazebo

Automated sorting based on orange ripeness levels


Visualization:
![CAD Model](image-1.png)
![RViz Visualization](image.png)

🎥 Demo Video

Watch the robot in action on YouTube: [Development of a 4-DOF Robot Arm with soft Gripper for Agricultural Products classification](https://www.youtube.com/watch?v=ujlwI9lmM6A)

📸 Sorting Sequence

| 1. Home Position | 2. Moving to Target | 3. Gripping |
| :---: | :---: | :---: |
| ![Home position](images/1_home_position.jpg) | ![Moving to target](images/2_moving_to_target.jpg) | ![Gripping](images/3_gripping.jpg) |

| 4. Ripe Orange Detected | 5. Place Orange | 6. Back to Home Position |
| :---: | :---: | :---: |
| ![Ripe orange](images/4_ripe_orange.jpg) | ![Place orange](images/5_place_orange.jpg) | ![Back to home position](images/6_back_to_home.jpg) |
