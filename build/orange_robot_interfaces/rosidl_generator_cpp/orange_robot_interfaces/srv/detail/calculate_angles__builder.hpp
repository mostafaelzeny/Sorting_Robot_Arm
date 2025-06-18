// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from orange_robot_interfaces:srv/CalculateAngles.idl
// generated code does not contain a copyright notice

#ifndef ORANGE_ROBOT_INTERFACES__SRV__DETAIL__CALCULATE_ANGLES__BUILDER_HPP_
#define ORANGE_ROBOT_INTERFACES__SRV__DETAIL__CALCULATE_ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "orange_robot_interfaces/srv/detail/calculate_angles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace orange_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_CalculateAngles_Request_y
{
public:
  explicit Init_CalculateAngles_Request_y(::orange_robot_interfaces::srv::CalculateAngles_Request & msg)
  : msg_(msg)
  {}
  ::orange_robot_interfaces::srv::CalculateAngles_Request y(::orange_robot_interfaces::srv::CalculateAngles_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::orange_robot_interfaces::srv::CalculateAngles_Request msg_;
};

class Init_CalculateAngles_Request_x
{
public:
  Init_CalculateAngles_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalculateAngles_Request_y x(::orange_robot_interfaces::srv::CalculateAngles_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CalculateAngles_Request_y(msg_);
  }

private:
  ::orange_robot_interfaces::srv::CalculateAngles_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::orange_robot_interfaces::srv::CalculateAngles_Request>()
{
  return orange_robot_interfaces::srv::builder::Init_CalculateAngles_Request_x();
}

}  // namespace orange_robot_interfaces


namespace orange_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_CalculateAngles_Response_angles
{
public:
  Init_CalculateAngles_Response_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::orange_robot_interfaces::srv::CalculateAngles_Response angles(::orange_robot_interfaces::srv::CalculateAngles_Response::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::orange_robot_interfaces::srv::CalculateAngles_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::orange_robot_interfaces::srv::CalculateAngles_Response>()
{
  return orange_robot_interfaces::srv::builder::Init_CalculateAngles_Response_angles();
}

}  // namespace orange_robot_interfaces

#endif  // ORANGE_ROBOT_INTERFACES__SRV__DETAIL__CALCULATE_ANGLES__BUILDER_HPP_
