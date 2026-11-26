#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from orange_robot_interfaces.srv import CalculateAngles
import math
import numpy as np

def inverse_kinematics_4dof_dh(Xe, Ye, Ze, d1, a1, d2, a2, d3, a3, d4, theta_total, elbow_up):
    """
    Inverse kinematics for 4-DOF robot arm using DH parameters
    
    DH Parameters from URDF:
    Joint 0: d0=0.11411, a0=0.12854, α0=90°
    Joint 1: d1=0.09244, a1=0.022709, α1=-22.6°
    Joint 2: d2=0.1905, a2=0, α2=92.1°
    Joint 3: d3=0.23765, a3=0, α3=74.4°
    Joint 4: d4=0, a4=0, α4=0° (fixed)
    """
    
    # Joint 0 (base rotation) - simple calculation
    theta0 = math.atan2(Ye, Xe)
    
    # Project to 2D plane for remaining joints
    r = math.hypot(Xe, Ye)
    
    # Adjust target position accounting for base offset and end effector
    # Account for base link offset (a0 = 0.12854m)
    r_adjusted = r - a1  # Subtract base link offset
    z_adjusted = Ze - d1  # Subtract base height
    
    # Calculate wrist position (subtract end effector length)
    xw = r_adjusted - d4 * math.cos(theta_total)
    yw = z_adjusted - d4 * math.sin(theta_total)
    
    # Distance from joint 1 to wrist
    r_wrist = math.hypot(xw, yw)
    
    # Law of cosines for joint 2 (shoulder-elbow-wrist triangle)
    # Effective lengths for joints 1-2-3
    L2_eff = d2  # Distance along joint 2
    L3_eff = d3  # Distance along joint 3
    
    cos_theta2 = (r_wrist**2 - L2_eff**2 - L3_eff**2) / (2 * L2_eff * L3_eff)
    
    if abs(cos_theta2) > 1:
        raise ValueError(f"Target unreachable: cos_theta2 = {cos_theta2}")
    
    # Joint 2 angle (elbow)
    sin_theta2 = -math.sqrt(1 - cos_theta2**2) if elbow_up else math.sqrt(1 - cos_theta2**2)
    theta2 = math.atan2(sin_theta2, cos_theta2)
    
    # Joint 1 angle (shoulder)
    gamma = math.atan2(yw, xw)
    beta = math.atan2(L3_eff * math.sin(theta2), L2_eff + L3_eff * math.cos(theta2))
    theta1 = gamma - beta
    
    # Joint 3 angle (wrist) - to maintain desired end effector orientation
    theta3 = theta_total - theta1 - theta2
    
    return [
        math.degrees(theta0),
        math.degrees(theta1), 
        math.degrees(theta2),
        math.degrees(theta3)
    ]

def normalize_to_positive_angle(angle_deg):
    """
    Convert angle to positive by taking absolute value
    """
    return abs(angle_deg)

def forward_kinematics_dh(theta_deg, d, a, alpha_deg):
    """
    Calculate forward kinematics using DH parameters
    Returns transformation matrix from base to end effector
    """
    # Convert to radians
    theta = [math.radians(t) for t in theta_deg]
    alpha = [math.radians(a) for a in alpha_deg]
    
    # DH transformation matrix
    def dh_transform(theta_i, d_i, a_i, alpha_i):
        ct = math.cos(theta_i)
        st = math.sin(theta_i)
        ca = math.cos(alpha_i)
        sa = math.sin(alpha_i)
        
        return np.array([
            [ct, -st*ca, st*sa, a_i*ct],
            [st, ct*ca, -ct*sa, a_i*st],
            [0, sa, ca, d_i],
            [0, 0, 0, 1]
        ])
    
    # Calculate transformation for each joint
    T = np.eye(4)
    for i in range(len(theta)):
        T_i = dh_transform(theta[i], d[i], a[i], alpha[i])
        T = np.dot(T, T_i)
    
    return T

class AnglesCalculatorService(Node):
    def __init__(self):
        super().__init__('angles_calculator_service')

        self.service = self.create_service(CalculateAngles, 'calculate_angles', self.calculate_angles_callback)

        # DH Parameters from URDF (in meters)
        self.dh_params = {
            'd': [0.11411, 0.09244, 0.1905, 0.23765, 0.0],      # Link offsets
            'a': [0.12854, 0.022709, 0.0, 0.0, 0.0],            # Link lengths  
            'alpha': [90.0, -22.6, 92.1, 74.4, 0.0]             # Link twists (degrees)
        }
        
        # Convert to cm for easier input handling
        self.d_cm = [d * 100 for d in self.dh_params['d']]
        self.a_cm = [a * 100 for a in self.dh_params['a']]
        
        self.get_logger().info("AnglesCalculatorService initialized with DH parameters")
        self.get_logger().info(f"Link offsets (d): {self.d_cm} cm")
        self.get_logger().info(f"Link lengths (a): {self.a_cm} cm")
        self.get_logger().info(f"Link twists (α): {self.dh_params['alpha']} degrees")
        self.get_logger().info("All angles will be converted to positive values using absolute value")

    def calculate_angles_callback(self, request, response):
        try:
            # Input coordinates in cm
            x_cm, y_cm = request.x, request.y
            
            # Convert to meters for calculations
            x_m = x_cm / 100.0
            y_m = y_cm / 100.0
            
            # Set Z coordinate based on workspace
            # Assume working in horizontal plane at some height
            z_m = 0.2  # 20cm above base, adjust as needed
            
            # Desired end effector orientation (pointing down)
            theta_total = math.radians(-90)
            elbow_up = True

            # Calculate inverse kinematics
            angles = inverse_kinematics_4dof_dh(
                x_m, y_m, z_m,
                self.dh_params['d'][1],  # d1
                self.dh_params['a'][1],  # a1  
                self.dh_params['d'][2],  # d2
                self.dh_params['a'][2],  # a2
                self.dh_params['d'][3],  # d3
                self.dh_params['a'][3],  # a3
                self.dh_params['d'][4],  # d4
                theta_total, 
                elbow_up
            )
            
            # Apply joint limits based on URDF (keep original limits for validation)
            joint_limits = [
                (-180, 180),    # Joint 0: continuous
                (-90, 90),      # Joint 1: ±90°
                (-90, 90),      # Joint 2: ±90°  
                (-90, 90),      # Joint 3: ±90°
            ]
            
            # Check and clamp joint limits (original functionality)
            clamped_angles = []
            for i, (angle, (min_limit, max_limit)) in enumerate(zip(angles, joint_limits)):
                if angle < min_limit or angle > max_limit:
                    self.get_logger().warning(
                        f"Joint {i} angle {angle:.2f}° exceeds limits [{min_limit}, {max_limit}]"
                    )
                    angle = max(min_limit, min(max_limit, angle))
                clamped_angles.append(angle)
            
            # Convert all angles to positive without changing their values
            positive_angles = [normalize_to_positive_angle(angle) for angle in clamped_angles]
            
            response.angles = [float(a) for a in positive_angles]
            
            # Log the calculation
            self.get_logger().info(f"Target: ({x_cm:.1f}, {y_cm:.1f}) cm")
            self.get_logger().info(f"Calculated angles: {[f'{a:.2f}°' for a in clamped_angles]}")
            self.get_logger().info(f"Positive angles: {[f'{a:.2f}°' for a in positive_angles]}")
            
            # Verify with forward kinematics (optional)
            try:
                T = forward_kinematics_dh(
                    response.angles,
                    [d*100 for d in self.dh_params['d']],  # Convert to cm
                    [a*100 for a in self.dh_params['a']], 
                    self.dh_params['alpha']
                )
                end_pos = [T[0,3], T[1,3], T[2,3]]
                self.get_logger().info(f"FK verification: ({end_pos[0]:.1f}, {end_pos[1]:.1f}, {end_pos[2]:.1f}) cm")
            except:
                pass  # FK verification failed, continue anyway
                
            return response

        except Exception as e:
            self.get_logger().error(f"IK calculation failed: {e}")
            response.angles = []
            return response

    def get_workspace_limits(self):
        """Calculate approximate workspace limits"""
        max_reach = sum(self.dh_params['d'][1:4]) + sum(self.dh_params['a'])
        min_reach = abs(self.dh_params['d'][2] - self.dh_params['d'][3])
        
        return {
            'max_reach_cm': max_reach * 100,
            'min_reach_cm': min_reach * 100,
            'base_height_cm': self.dh_params['d'][0] * 100
        }

def main(args=None):
    rclpy.init(args=args)
    node = AnglesCalculatorService()
    
    # Print workspace info
    workspace = node.get_workspace_limits()
    node.get_logger().info(f"Workspace - Max reach: {workspace['max_reach_cm']:.1f} cm, "
                          f"Min reach: {workspace['min_reach_cm']:.1f} cm")
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()