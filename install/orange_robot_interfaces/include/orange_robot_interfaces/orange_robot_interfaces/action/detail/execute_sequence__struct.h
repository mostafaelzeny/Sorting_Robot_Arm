// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from orange_robot_interfaces:action/ExecuteSequence.idl
// generated code does not contain a copyright notice

#ifndef ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__STRUCT_H_
#define ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'angles'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/ExecuteSequence in the package orange_robot_interfaces.
typedef struct orange_robot_interfaces__action__ExecuteSequence_Goal
{
  bool home;
  bool detect;
  bool ripe;
  bool move_to_target;
  bool grip;
  bool place;
  bool return_home;
  rosidl_runtime_c__float__Sequence angles;
  float diameter;
  int32_t ripeness;
} orange_robot_interfaces__action__ExecuteSequence_Goal;

// Struct for a sequence of orange_robot_interfaces__action__ExecuteSequence_Goal.
typedef struct orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence
{
  orange_robot_interfaces__action__ExecuteSequence_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteSequence in the package orange_robot_interfaces.
typedef struct orange_robot_interfaces__action__ExecuteSequence_Result
{
  bool success;
  rosidl_runtime_c__String result;
} orange_robot_interfaces__action__ExecuteSequence_Result;

// Struct for a sequence of orange_robot_interfaces__action__ExecuteSequence_Result.
typedef struct orange_robot_interfaces__action__ExecuteSequence_Result__Sequence
{
  orange_robot_interfaces__action__ExecuteSequence_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} orange_robot_interfaces__action__ExecuteSequence_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteSequence in the package orange_robot_interfaces.
typedef struct orange_robot_interfaces__action__ExecuteSequence_Feedback
{
  rosidl_runtime_c__String feedback;
} orange_robot_interfaces__action__ExecuteSequence_Feedback;

// Struct for a sequence of orange_robot_interfaces__action__ExecuteSequence_Feedback.
typedef struct orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence
{
  orange_robot_interfaces__action__ExecuteSequence_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "orange_robot_interfaces/action/detail/execute_sequence__struct.h"

/// Struct defined in action/ExecuteSequence in the package orange_robot_interfaces.
typedef struct orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  orange_robot_interfaces__action__ExecuteSequence_Goal goal;
} orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request;

// Struct for a sequence of orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request.
typedef struct orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence
{
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecuteSequence in the package orange_robot_interfaces.
typedef struct orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response;

// Struct for a sequence of orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response.
typedef struct orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence
{
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecuteSequence in the package orange_robot_interfaces.
typedef struct orange_robot_interfaces__action__ExecuteSequence_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} orange_robot_interfaces__action__ExecuteSequence_GetResult_Request;

// Struct for a sequence of orange_robot_interfaces__action__ExecuteSequence_GetResult_Request.
typedef struct orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence
{
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__struct.h"

/// Struct defined in action/ExecuteSequence in the package orange_robot_interfaces.
typedef struct orange_robot_interfaces__action__ExecuteSequence_GetResult_Response
{
  int8_t status;
  orange_robot_interfaces__action__ExecuteSequence_Result result;
} orange_robot_interfaces__action__ExecuteSequence_GetResult_Response;

// Struct for a sequence of orange_robot_interfaces__action__ExecuteSequence_GetResult_Response.
typedef struct orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence
{
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__struct.h"

/// Struct defined in action/ExecuteSequence in the package orange_robot_interfaces.
typedef struct orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  orange_robot_interfaces__action__ExecuteSequence_Feedback feedback;
} orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage;

// Struct for a sequence of orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage.
typedef struct orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence
{
  orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__STRUCT_H_
