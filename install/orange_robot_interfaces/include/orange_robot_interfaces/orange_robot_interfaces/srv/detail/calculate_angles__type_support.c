// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from orange_robot_interfaces:srv/CalculateAngles.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "orange_robot_interfaces/srv/detail/calculate_angles__rosidl_typesupport_introspection_c.h"
#include "orange_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "orange_robot_interfaces/srv/detail/calculate_angles__functions.h"
#include "orange_robot_interfaces/srv/detail/calculate_angles__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void orange_robot_interfaces__srv__CalculateAngles_Request__rosidl_typesupport_introspection_c__CalculateAngles_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  orange_robot_interfaces__srv__CalculateAngles_Request__init(message_memory);
}

void orange_robot_interfaces__srv__CalculateAngles_Request__rosidl_typesupport_introspection_c__CalculateAngles_Request_fini_function(void * message_memory)
{
  orange_robot_interfaces__srv__CalculateAngles_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember orange_robot_interfaces__srv__CalculateAngles_Request__rosidl_typesupport_introspection_c__CalculateAngles_Request_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__srv__CalculateAngles_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__srv__CalculateAngles_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers orange_robot_interfaces__srv__CalculateAngles_Request__rosidl_typesupport_introspection_c__CalculateAngles_Request_message_members = {
  "orange_robot_interfaces__srv",  // message namespace
  "CalculateAngles_Request",  // message name
  2,  // number of fields
  sizeof(orange_robot_interfaces__srv__CalculateAngles_Request),
  orange_robot_interfaces__srv__CalculateAngles_Request__rosidl_typesupport_introspection_c__CalculateAngles_Request_message_member_array,  // message members
  orange_robot_interfaces__srv__CalculateAngles_Request__rosidl_typesupport_introspection_c__CalculateAngles_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  orange_robot_interfaces__srv__CalculateAngles_Request__rosidl_typesupport_introspection_c__CalculateAngles_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t orange_robot_interfaces__srv__CalculateAngles_Request__rosidl_typesupport_introspection_c__CalculateAngles_Request_message_type_support_handle = {
  0,
  &orange_robot_interfaces__srv__CalculateAngles_Request__rosidl_typesupport_introspection_c__CalculateAngles_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_orange_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, srv, CalculateAngles_Request)() {
  if (!orange_robot_interfaces__srv__CalculateAngles_Request__rosidl_typesupport_introspection_c__CalculateAngles_Request_message_type_support_handle.typesupport_identifier) {
    orange_robot_interfaces__srv__CalculateAngles_Request__rosidl_typesupport_introspection_c__CalculateAngles_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &orange_robot_interfaces__srv__CalculateAngles_Request__rosidl_typesupport_introspection_c__CalculateAngles_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "orange_robot_interfaces/srv/detail/calculate_angles__rosidl_typesupport_introspection_c.h"
// already included above
// #include "orange_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "orange_robot_interfaces/srv/detail/calculate_angles__functions.h"
// already included above
// #include "orange_robot_interfaces/srv/detail/calculate_angles__struct.h"


// Include directives for member types
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__CalculateAngles_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  orange_robot_interfaces__srv__CalculateAngles_Response__init(message_memory);
}

void orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__CalculateAngles_Response_fini_function(void * message_memory)
{
  orange_robot_interfaces__srv__CalculateAngles_Response__fini(message_memory);
}

size_t orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__size_function__CalculateAngles_Response__angles(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__get_const_function__CalculateAngles_Response__angles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__get_function__CalculateAngles_Response__angles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__fetch_function__CalculateAngles_Response__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__get_const_function__CalculateAngles_Response__angles(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__assign_function__CalculateAngles_Response__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__get_function__CalculateAngles_Response__angles(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__resize_function__CalculateAngles_Response__angles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__CalculateAngles_Response_message_member_array[1] = {
  {
    "angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(orange_robot_interfaces__srv__CalculateAngles_Response, angles),  // bytes offset in struct
    NULL,  // default value
    orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__size_function__CalculateAngles_Response__angles,  // size() function pointer
    orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__get_const_function__CalculateAngles_Response__angles,  // get_const(index) function pointer
    orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__get_function__CalculateAngles_Response__angles,  // get(index) function pointer
    orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__fetch_function__CalculateAngles_Response__angles,  // fetch(index, &value) function pointer
    orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__assign_function__CalculateAngles_Response__angles,  // assign(index, value) function pointer
    orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__resize_function__CalculateAngles_Response__angles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__CalculateAngles_Response_message_members = {
  "orange_robot_interfaces__srv",  // message namespace
  "CalculateAngles_Response",  // message name
  1,  // number of fields
  sizeof(orange_robot_interfaces__srv__CalculateAngles_Response),
  orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__CalculateAngles_Response_message_member_array,  // message members
  orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__CalculateAngles_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__CalculateAngles_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__CalculateAngles_Response_message_type_support_handle = {
  0,
  &orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__CalculateAngles_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_orange_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, srv, CalculateAngles_Response)() {
  if (!orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__CalculateAngles_Response_message_type_support_handle.typesupport_identifier) {
    orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__CalculateAngles_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &orange_robot_interfaces__srv__CalculateAngles_Response__rosidl_typesupport_introspection_c__CalculateAngles_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "orange_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "orange_robot_interfaces/srv/detail/calculate_angles__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers orange_robot_interfaces__srv__detail__calculate_angles__rosidl_typesupport_introspection_c__CalculateAngles_service_members = {
  "orange_robot_interfaces__srv",  // service namespace
  "CalculateAngles",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // orange_robot_interfaces__srv__detail__calculate_angles__rosidl_typesupport_introspection_c__CalculateAngles_Request_message_type_support_handle,
  NULL  // response message
  // orange_robot_interfaces__srv__detail__calculate_angles__rosidl_typesupport_introspection_c__CalculateAngles_Response_message_type_support_handle
};

static rosidl_service_type_support_t orange_robot_interfaces__srv__detail__calculate_angles__rosidl_typesupport_introspection_c__CalculateAngles_service_type_support_handle = {
  0,
  &orange_robot_interfaces__srv__detail__calculate_angles__rosidl_typesupport_introspection_c__CalculateAngles_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, srv, CalculateAngles_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, srv, CalculateAngles_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_orange_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, srv, CalculateAngles)() {
  if (!orange_robot_interfaces__srv__detail__calculate_angles__rosidl_typesupport_introspection_c__CalculateAngles_service_type_support_handle.typesupport_identifier) {
    orange_robot_interfaces__srv__detail__calculate_angles__rosidl_typesupport_introspection_c__CalculateAngles_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)orange_robot_interfaces__srv__detail__calculate_angles__rosidl_typesupport_introspection_c__CalculateAngles_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, srv, CalculateAngles_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, orange_robot_interfaces, srv, CalculateAngles_Response)()->data;
  }

  return &orange_robot_interfaces__srv__detail__calculate_angles__rosidl_typesupport_introspection_c__CalculateAngles_service_type_support_handle;
}
