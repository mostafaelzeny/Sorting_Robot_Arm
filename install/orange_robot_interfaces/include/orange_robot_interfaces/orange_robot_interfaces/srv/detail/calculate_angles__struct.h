// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from orange_robot_interfaces:srv/CalculateAngles.idl
// generated code does not contain a copyright notice

#ifndef ORANGE_ROBOT_INTERFACES__SRV__DETAIL__CALCULATE_ANGLES__STRUCT_H_
#define ORANGE_ROBOT_INTERFACES__SRV__DETAIL__CALCULATE_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CalculateAngles in the package orange_robot_interfaces.
typedef struct orange_robot_interfaces__srv__CalculateAngles_Request
{
  float x;
  float y;
} orange_robot_interfaces__srv__CalculateAngles_Request;

// Struct for a sequence of orange_robot_interfaces__srv__CalculateAngles_Request.
typedef struct orange_robot_interfaces__srv__CalculateAngles_Request__Sequence
{
  orange_robot_interfaces__srv__CalculateAngles_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} orange_robot_interfaces__srv__CalculateAngles_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'angles'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/CalculateAngles in the package orange_robot_interfaces.
typedef struct orange_robot_interfaces__srv__CalculateAngles_Response
{
  rosidl_runtime_c__float__Sequence angles;
} orange_robot_interfaces__srv__CalculateAngles_Response;

// Struct for a sequence of orange_robot_interfaces__srv__CalculateAngles_Response.
typedef struct orange_robot_interfaces__srv__CalculateAngles_Response__Sequence
{
  orange_robot_interfaces__srv__CalculateAngles_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} orange_robot_interfaces__srv__CalculateAngles_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ORANGE_ROBOT_INTERFACES__SRV__DETAIL__CALCULATE_ANGLES__STRUCT_H_
