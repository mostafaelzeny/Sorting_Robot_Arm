// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from orange_robot_interfaces:action/ExecuteSequence.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "orange_robot_interfaces/action/detail/execute_sequence__rosidl_typesupport_introspection_c.h"
#include "orange_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "orange_robot_interfaces/action/detail/execute_sequence__functions.h"
#include "orange_robot_interfaces/action/detail/execute_sequence__struct.h"


// Include directives for member types
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__ExecuteSequence_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  orange_robot_interfaces__action__ExecuteSequence_Goal__init(message_memory);
}

void orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__ExecuteSequence_Goal_fini_function(void * message_memory)
{
  orange_robot_interfaces__action__ExecuteSequence_Goal__fini(message_memory);
}

size_t orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__size_function__ExecuteSequence_Goal__angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecuteSequence_Goal__angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__get_function__ExecuteSequence_Goal__angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecuteSequence_Goal__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecuteSequence_Goal__angles(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__assign_function__ExecuteSequence_Goal__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__get_function__ExecuteSequence_Goal__angles(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__resize_function__ExecuteSequence_Goal__angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__ExecuteSequence_Goal_message_member_array[10] = {
  {
    "home",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_Goal, home),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detect",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_Goal, detect),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ripe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_Goal, ripe),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "move_to_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_Goal, move_to_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_Goal, grip),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "place",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_Goal, place),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "return_home",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_Goal, return_home),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_Goal, angles),  // bytes offset in struct
    NULL,  // default value
    orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__size_function__ExecuteSequence_Goal__angles,  // size() function pointer
    orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__get_const_function__ExecuteSequence_Goal__angles,  // get_const(index) function pointer
    orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__get_function__ExecuteSequence_Goal__angles,  // get(index) function pointer
    orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__fetch_function__ExecuteSequence_Goal__angles,  // fetch(index, &value) function pointer
    orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__assign_function__ExecuteSequence_Goal__angles,  // assign(index, value) function pointer
    orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__resize_function__ExecuteSequence_Goal__angles  // resize(index) function pointer
  },
  {
    "diameter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_Goal, diameter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ripeness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_Goal, ripeness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__ExecuteSequence_Goal_message_members = {
  "orange_robot_interfaces__action",  // message namespace
  "ExecuteSequence_Goal",  // message name
  10,  // number of fields
  sizeof(orange_robot_interfaces__action__ExecuteSequence_Goal),
  orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__ExecuteSequence_Goal_message_member_array,  // message members
  orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__ExecuteSequence_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__ExecuteSequence_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__ExecuteSequence_Goal_message_type_support_handle = {
  0,
  &orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__ExecuteSequence_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_orange_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_Goal)() {
  if (!orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__ExecuteSequence_Goal_message_type_support_handle.typesupport_identifier) {
    orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__ExecuteSequence_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &orange_robot_interfaces__action__ExecuteSequence_Goal__rosidl_typesupport_introspection_c__ExecuteSequence_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "orange_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__functions.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__struct.h"


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void orange_robot_interfaces__action__ExecuteSequence_Result__rosidl_typesupport_introspection_c__ExecuteSequence_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  orange_robot_interfaces__action__ExecuteSequence_Result__init(message_memory);
}

void orange_robot_interfaces__action__ExecuteSequence_Result__rosidl_typesupport_introspection_c__ExecuteSequence_Result_fini_function(void * message_memory)
{
  orange_robot_interfaces__action__ExecuteSequence_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember orange_robot_interfaces__action__ExecuteSequence_Result__rosidl_typesupport_introspection_c__ExecuteSequence_Result_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers orange_robot_interfaces__action__ExecuteSequence_Result__rosidl_typesupport_introspection_c__ExecuteSequence_Result_message_members = {
  "orange_robot_interfaces__action",  // message namespace
  "ExecuteSequence_Result",  // message name
  2,  // number of fields
  sizeof(orange_robot_interfaces__action__ExecuteSequence_Result),
  orange_robot_interfaces__action__ExecuteSequence_Result__rosidl_typesupport_introspection_c__ExecuteSequence_Result_message_member_array,  // message members
  orange_robot_interfaces__action__ExecuteSequence_Result__rosidl_typesupport_introspection_c__ExecuteSequence_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  orange_robot_interfaces__action__ExecuteSequence_Result__rosidl_typesupport_introspection_c__ExecuteSequence_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t orange_robot_interfaces__action__ExecuteSequence_Result__rosidl_typesupport_introspection_c__ExecuteSequence_Result_message_type_support_handle = {
  0,
  &orange_robot_interfaces__action__ExecuteSequence_Result__rosidl_typesupport_introspection_c__ExecuteSequence_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_orange_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_Result)() {
  if (!orange_robot_interfaces__action__ExecuteSequence_Result__rosidl_typesupport_introspection_c__ExecuteSequence_Result_message_type_support_handle.typesupport_identifier) {
    orange_robot_interfaces__action__ExecuteSequence_Result__rosidl_typesupport_introspection_c__ExecuteSequence_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &orange_robot_interfaces__action__ExecuteSequence_Result__rosidl_typesupport_introspection_c__ExecuteSequence_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "orange_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__functions.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__struct.h"


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void orange_robot_interfaces__action__ExecuteSequence_Feedback__rosidl_typesupport_introspection_c__ExecuteSequence_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  orange_robot_interfaces__action__ExecuteSequence_Feedback__init(message_memory);
}

void orange_robot_interfaces__action__ExecuteSequence_Feedback__rosidl_typesupport_introspection_c__ExecuteSequence_Feedback_fini_function(void * message_memory)
{
  orange_robot_interfaces__action__ExecuteSequence_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember orange_robot_interfaces__action__ExecuteSequence_Feedback__rosidl_typesupport_introspection_c__ExecuteSequence_Feedback_message_member_array[1] = {
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_Feedback, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers orange_robot_interfaces__action__ExecuteSequence_Feedback__rosidl_typesupport_introspection_c__ExecuteSequence_Feedback_message_members = {
  "orange_robot_interfaces__action",  // message namespace
  "ExecuteSequence_Feedback",  // message name
  1,  // number of fields
  sizeof(orange_robot_interfaces__action__ExecuteSequence_Feedback),
  orange_robot_interfaces__action__ExecuteSequence_Feedback__rosidl_typesupport_introspection_c__ExecuteSequence_Feedback_message_member_array,  // message members
  orange_robot_interfaces__action__ExecuteSequence_Feedback__rosidl_typesupport_introspection_c__ExecuteSequence_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  orange_robot_interfaces__action__ExecuteSequence_Feedback__rosidl_typesupport_introspection_c__ExecuteSequence_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t orange_robot_interfaces__action__ExecuteSequence_Feedback__rosidl_typesupport_introspection_c__ExecuteSequence_Feedback_message_type_support_handle = {
  0,
  &orange_robot_interfaces__action__ExecuteSequence_Feedback__rosidl_typesupport_introspection_c__ExecuteSequence_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_orange_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_Feedback)() {
  if (!orange_robot_interfaces__action__ExecuteSequence_Feedback__rosidl_typesupport_introspection_c__ExecuteSequence_Feedback_message_type_support_handle.typesupport_identifier) {
    orange_robot_interfaces__action__ExecuteSequence_Feedback__rosidl_typesupport_introspection_c__ExecuteSequence_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &orange_robot_interfaces__action__ExecuteSequence_Feedback__rosidl_typesupport_introspection_c__ExecuteSequence_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "orange_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__functions.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "orange_robot_interfaces/action/execute_sequence.h"
// Member `goal`
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__init(message_memory);
}

void orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_fini_function(void * message_memory)
{
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_message_members = {
  "orange_robot_interfaces__action",  // message namespace
  "ExecuteSequence_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request),
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_message_member_array,  // message members
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_message_type_support_handle = {
  0,
  &orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_orange_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_SendGoal_Request)() {
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_Goal)();
  if (!orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "orange_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__functions.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__init(message_memory);
}

void orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Response_fini_function(void * message_memory)
{
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Response_message_members = {
  "orange_robot_interfaces__action",  // message namespace
  "ExecuteSequence_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response),
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Response_message_member_array,  // message members
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Response_message_type_support_handle = {
  0,
  &orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_orange_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_SendGoal_Response)() {
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "orange_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_service_members = {
  "orange_robot_interfaces__action",  // service namespace
  "ExecuteSequence_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_service_type_support_handle = {
  0,
  &orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_orange_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_SendGoal)() {
  if (!orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_service_type_support_handle.typesupport_identifier) {
    orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_SendGoal_Response)()->data;
  }

  return &orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "orange_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__functions.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__init(message_memory);
}

void orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Request_fini_function(void * message_memory)
{
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Request_message_members = {
  "orange_robot_interfaces__action",  // message namespace
  "ExecuteSequence_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(orange_robot_interfaces__action__ExecuteSequence_GetResult_Request),
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Request_message_member_array,  // message members
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Request_message_type_support_handle = {
  0,
  &orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_orange_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_GetResult_Request)() {
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "orange_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__functions.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "orange_robot_interfaces/action/execute_sequence.h"
// Member `result`
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__init(message_memory);
}

void orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Response_fini_function(void * message_memory)
{
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Response_message_members = {
  "orange_robot_interfaces__action",  // message namespace
  "ExecuteSequence_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(orange_robot_interfaces__action__ExecuteSequence_GetResult_Response),
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Response_message_member_array,  // message members
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Response_message_type_support_handle = {
  0,
  &orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_orange_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_GetResult_Response)() {
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_Result)();
  if (!orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "orange_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_service_members = {
  "orange_robot_interfaces__action",  // service namespace
  "ExecuteSequence_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_service_type_support_handle = {
  0,
  &orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_orange_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_GetResult)() {
  if (!orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_service_type_support_handle.typesupport_identifier) {
    orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_GetResult_Response)()->data;
  }

  return &orange_robot_interfaces__action__detail__execute_sequence__rosidl_typesupport_introspection_c__ExecuteSequence_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "orange_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__functions.h"
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "orange_robot_interfaces/action/execute_sequence.h"
// Member `feedback`
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteSequence_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__init(message_memory);
}

void orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteSequence_FeedbackMessage_fini_function(void * message_memory)
{
  orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteSequence_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteSequence_FeedbackMessage_message_members = {
  "orange_robot_interfaces__action",  // message namespace
  "ExecuteSequence_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage),
  orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteSequence_FeedbackMessage_message_member_array,  // message members
  orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteSequence_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteSequence_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteSequence_FeedbackMessage_message_type_support_handle = {
  0,
  &orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteSequence_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_orange_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_FeedbackMessage)() {
  orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteSequence_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteSequence_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, action, ExecuteSequence_Feedback)();
  if (!orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteSequence_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteSequence_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__ExecuteSequence_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
