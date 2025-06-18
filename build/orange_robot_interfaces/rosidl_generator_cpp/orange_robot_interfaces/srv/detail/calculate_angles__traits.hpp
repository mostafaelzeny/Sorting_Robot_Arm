// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from orange_robot_interfaces:srv/CalculateAngles.idl
// generated code does not contain a copyright notice

#ifndef ORANGE_ROBOT_INTERFACES__SRV__DETAIL__CALCULATE_ANGLES__TRAITS_HPP_
#define ORANGE_ROBOT_INTERFACES__SRV__DETAIL__CALCULATE_ANGLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "orange_robot_interfaces/srv/detail/calculate_angles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace orange_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalculateAngles_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalculateAngles_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalculateAngles_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace orange_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use orange_robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const orange_robot_interfaces::srv::CalculateAngles_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  orange_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use orange_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const orange_robot_interfaces::srv::CalculateAngles_Request & msg)
{
  return orange_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<orange_robot_interfaces::srv::CalculateAngles_Request>()
{
  return "orange_robot_interfaces::srv::CalculateAngles_Request";
}

template<>
inline const char * name<orange_robot_interfaces::srv::CalculateAngles_Request>()
{
  return "orange_robot_interfaces/srv/CalculateAngles_Request";
}

template<>
struct has_fixed_size<orange_robot_interfaces::srv::CalculateAngles_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<orange_robot_interfaces::srv::CalculateAngles_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<orange_robot_interfaces::srv::CalculateAngles_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace orange_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CalculateAngles_Response & msg,
  std::ostream & out)
{
  out << "{";
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CalculateAngles_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CalculateAngles_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace orange_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use orange_robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const orange_robot_interfaces::srv::CalculateAngles_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  orange_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use orange_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const orange_robot_interfaces::srv::CalculateAngles_Response & msg)
{
  return orange_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<orange_robot_interfaces::srv::CalculateAngles_Response>()
{
  return "orange_robot_interfaces::srv::CalculateAngles_Response";
}

template<>
inline const char * name<orange_robot_interfaces::srv::CalculateAngles_Response>()
{
  return "orange_robot_interfaces/srv/CalculateAngles_Response";
}

template<>
struct has_fixed_size<orange_robot_interfaces::srv::CalculateAngles_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<orange_robot_interfaces::srv::CalculateAngles_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<orange_robot_interfaces::srv::CalculateAngles_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<orange_robot_interfaces::srv::CalculateAngles>()
{
  return "orange_robot_interfaces::srv::CalculateAngles";
}

template<>
inline const char * name<orange_robot_interfaces::srv::CalculateAngles>()
{
  return "orange_robot_interfaces/srv/CalculateAngles";
}

template<>
struct has_fixed_size<orange_robot_interfaces::srv::CalculateAngles>
  : std::integral_constant<
    bool,
    has_fixed_size<orange_robot_interfaces::srv::CalculateAngles_Request>::value &&
    has_fixed_size<orange_robot_interfaces::srv::CalculateAngles_Response>::value
  >
{
};

template<>
struct has_bounded_size<orange_robot_interfaces::srv::CalculateAngles>
  : std::integral_constant<
    bool,
    has_bounded_size<orange_robot_interfaces::srv::CalculateAngles_Request>::value &&
    has_bounded_size<orange_robot_interfaces::srv::CalculateAngles_Response>::value
  >
{
};

template<>
struct is_service<orange_robot_interfaces::srv::CalculateAngles>
  : std::true_type
{
};

template<>
struct is_service_request<orange_robot_interfaces::srv::CalculateAngles_Request>
  : std::true_type
{
};

template<>
struct is_service_response<orange_robot_interfaces::srv::CalculateAngles_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ORANGE_ROBOT_INTERFACES__SRV__DETAIL__CALCULATE_ANGLES__TRAITS_HPP_
