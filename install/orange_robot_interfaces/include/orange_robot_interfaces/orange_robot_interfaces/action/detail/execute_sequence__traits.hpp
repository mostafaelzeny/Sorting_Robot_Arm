// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from orange_robot_interfaces:action/ExecuteSequence.idl
// generated code does not contain a copyright notice

#ifndef ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__TRAITS_HPP_
#define ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "orange_robot_interfaces/action/detail/execute_sequence__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace orange_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteSequence_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: home
  {
    out << "home: ";
    rosidl_generator_traits::value_to_yaml(msg.home, out);
    out << ", ";
  }

  // member: detect
  {
    out << "detect: ";
    rosidl_generator_traits::value_to_yaml(msg.detect, out);
    out << ", ";
  }

  // member: ripe
  {
    out << "ripe: ";
    rosidl_generator_traits::value_to_yaml(msg.ripe, out);
    out << ", ";
  }

  // member: move_to_target
  {
    out << "move_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.move_to_target, out);
    out << ", ";
  }

  // member: grip
  {
    out << "grip: ";
    rosidl_generator_traits::value_to_yaml(msg.grip, out);
    out << ", ";
  }

  // member: place
  {
    out << "place: ";
    rosidl_generator_traits::value_to_yaml(msg.place, out);
    out << ", ";
  }

  // member: return_home
  {
    out << "return_home: ";
    rosidl_generator_traits::value_to_yaml(msg.return_home, out);
    out << ", ";
  }

  // member: angles
  {
    if (msg.angles.size() == 0) {
      out << "angles: []";
    } else {
      out << "angles: [";
      size_t pending_items = msg.angles.size();
      for (auto item : msg.angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: diameter
  {
    out << "diameter: ";
    rosidl_generator_traits::value_to_yaml(msg.diameter, out);
    out << ", ";
  }

  // member: ripeness
  {
    out << "ripeness: ";
    rosidl_generator_traits::value_to_yaml(msg.ripeness, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteSequence_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: home
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "home: ";
    rosidl_generator_traits::value_to_yaml(msg.home, out);
    out << "\n";
  }

  // member: detect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detect: ";
    rosidl_generator_traits::value_to_yaml(msg.detect, out);
    out << "\n";
  }

  // member: ripe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ripe: ";
    rosidl_generator_traits::value_to_yaml(msg.ripe, out);
    out << "\n";
  }

  // member: move_to_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.move_to_target, out);
    out << "\n";
  }

  // member: grip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grip: ";
    rosidl_generator_traits::value_to_yaml(msg.grip, out);
    out << "\n";
  }

  // member: place
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "place: ";
    rosidl_generator_traits::value_to_yaml(msg.place, out);
    out << "\n";
  }

  // member: return_home
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_home: ";
    rosidl_generator_traits::value_to_yaml(msg.return_home, out);
    out << "\n";
  }

  // member: angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angles.size() == 0) {
      out << "angles: []\n";
    } else {
      out << "angles:\n";
      for (auto item : msg.angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: diameter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diameter: ";
    rosidl_generator_traits::value_to_yaml(msg.diameter, out);
    out << "\n";
  }

  // member: ripeness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ripeness: ";
    rosidl_generator_traits::value_to_yaml(msg.ripeness, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteSequence_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace orange_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use orange_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const orange_robot_interfaces::action::ExecuteSequence_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  orange_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use orange_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const orange_robot_interfaces::action::ExecuteSequence_Goal & msg)
{
  return orange_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<orange_robot_interfaces::action::ExecuteSequence_Goal>()
{
  return "orange_robot_interfaces::action::ExecuteSequence_Goal";
}

template<>
inline const char * name<orange_robot_interfaces::action::ExecuteSequence_Goal>()
{
  return "orange_robot_interfaces/action/ExecuteSequence_Goal";
}

template<>
struct has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<orange_robot_interfaces::action::ExecuteSequence_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace orange_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteSequence_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteSequence_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteSequence_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace orange_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use orange_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const orange_robot_interfaces::action::ExecuteSequence_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  orange_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use orange_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const orange_robot_interfaces::action::ExecuteSequence_Result & msg)
{
  return orange_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<orange_robot_interfaces::action::ExecuteSequence_Result>()
{
  return "orange_robot_interfaces::action::ExecuteSequence_Result";
}

template<>
inline const char * name<orange_robot_interfaces::action::ExecuteSequence_Result>()
{
  return "orange_robot_interfaces/action/ExecuteSequence_Result";
}

template<>
struct has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<orange_robot_interfaces::action::ExecuteSequence_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace orange_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteSequence_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteSequence_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteSequence_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace orange_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use orange_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const orange_robot_interfaces::action::ExecuteSequence_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  orange_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use orange_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const orange_robot_interfaces::action::ExecuteSequence_Feedback & msg)
{
  return orange_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<orange_robot_interfaces::action::ExecuteSequence_Feedback>()
{
  return "orange_robot_interfaces::action::ExecuteSequence_Feedback";
}

template<>
inline const char * name<orange_robot_interfaces::action::ExecuteSequence_Feedback>()
{
  return "orange_robot_interfaces/action/ExecuteSequence_Feedback";
}

template<>
struct has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<orange_robot_interfaces::action::ExecuteSequence_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "orange_robot_interfaces/action/detail/execute_sequence__traits.hpp"

namespace orange_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteSequence_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteSequence_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteSequence_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace orange_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use orange_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  orange_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use orange_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request & msg)
{
  return orange_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request>()
{
  return "orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request";
}

template<>
inline const char * name<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request>()
{
  return "orange_robot_interfaces/action/ExecuteSequence_SendGoal_Request";
}

template<>
struct has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace orange_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteSequence_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteSequence_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteSequence_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace orange_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use orange_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  orange_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use orange_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response & msg)
{
  return orange_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response>()
{
  return "orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response";
}

template<>
inline const char * name<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response>()
{
  return "orange_robot_interfaces/action/ExecuteSequence_SendGoal_Response";
}

template<>
struct has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orange_robot_interfaces::action::ExecuteSequence_SendGoal>()
{
  return "orange_robot_interfaces::action::ExecuteSequence_SendGoal";
}

template<>
inline const char * name<orange_robot_interfaces::action::ExecuteSequence_SendGoal>()
{
  return "orange_robot_interfaces/action/ExecuteSequence_SendGoal";
}

template<>
struct has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request>::value &&
    has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request>::value &&
    has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<orange_robot_interfaces::action::ExecuteSequence_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace orange_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteSequence_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteSequence_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteSequence_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace orange_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use orange_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const orange_robot_interfaces::action::ExecuteSequence_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  orange_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use orange_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const orange_robot_interfaces::action::ExecuteSequence_GetResult_Request & msg)
{
  return orange_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request>()
{
  return "orange_robot_interfaces::action::ExecuteSequence_GetResult_Request";
}

template<>
inline const char * name<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request>()
{
  return "orange_robot_interfaces/action/ExecuteSequence_GetResult_Request";
}

template<>
struct has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__traits.hpp"

namespace orange_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteSequence_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteSequence_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteSequence_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace orange_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use orange_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const orange_robot_interfaces::action::ExecuteSequence_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  orange_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use orange_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const orange_robot_interfaces::action::ExecuteSequence_GetResult_Response & msg)
{
  return orange_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response>()
{
  return "orange_robot_interfaces::action::ExecuteSequence_GetResult_Response";
}

template<>
inline const char * name<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response>()
{
  return "orange_robot_interfaces/action/ExecuteSequence_GetResult_Response";
}

template<>
struct has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_Result>::value> {};

template<>
struct has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_Result>::value> {};

template<>
struct is_message<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orange_robot_interfaces::action::ExecuteSequence_GetResult>()
{
  return "orange_robot_interfaces::action::ExecuteSequence_GetResult";
}

template<>
inline const char * name<orange_robot_interfaces::action::ExecuteSequence_GetResult>()
{
  return "orange_robot_interfaces/action/ExecuteSequence_GetResult";
}

template<>
struct has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request>::value &&
    has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request>::value &&
    has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response>::value
  >
{
};

template<>
struct is_service<orange_robot_interfaces::action::ExecuteSequence_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__traits.hpp"

namespace orange_robot_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteSequence_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteSequence_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteSequence_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace orange_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use orange_robot_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  orange_robot_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use orange_robot_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage & msg)
{
  return orange_robot_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage>()
{
  return "orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage";
}

template<>
inline const char * name<orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage>()
{
  return "orange_robot_interfaces/action/ExecuteSequence_FeedbackMessage";
}

template<>
struct has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<orange_robot_interfaces::action::ExecuteSequence_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<orange_robot_interfaces::action::ExecuteSequence_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<orange_robot_interfaces::action::ExecuteSequence>
  : std::true_type
{
};

template<>
struct is_action_goal<orange_robot_interfaces::action::ExecuteSequence_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<orange_robot_interfaces::action::ExecuteSequence_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<orange_robot_interfaces::action::ExecuteSequence_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__TRAITS_HPP_
