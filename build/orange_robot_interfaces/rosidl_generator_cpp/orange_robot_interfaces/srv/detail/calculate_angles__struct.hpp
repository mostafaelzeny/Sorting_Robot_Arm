// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from orange_robot_interfaces:srv/CalculateAngles.idl
// generated code does not contain a copyright notice

#ifndef ORANGE_ROBOT_INTERFACES__SRV__DETAIL__CALCULATE_ANGLES__STRUCT_HPP_
#define ORANGE_ROBOT_INTERFACES__SRV__DETAIL__CALCULATE_ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__orange_robot_interfaces__srv__CalculateAngles_Request __attribute__((deprecated))
#else
# define DEPRECATED__orange_robot_interfaces__srv__CalculateAngles_Request __declspec(deprecated)
#endif

namespace orange_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalculateAngles_Request_
{
  using Type = CalculateAngles_Request_<ContainerAllocator>;

  explicit CalculateAngles_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  explicit CalculateAngles_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    orange_robot_interfaces::srv::CalculateAngles_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const orange_robot_interfaces::srv::CalculateAngles_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<orange_robot_interfaces::srv::CalculateAngles_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<orange_robot_interfaces::srv::CalculateAngles_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::srv::CalculateAngles_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::srv::CalculateAngles_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::srv::CalculateAngles_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::srv::CalculateAngles_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<orange_robot_interfaces::srv::CalculateAngles_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<orange_robot_interfaces::srv::CalculateAngles_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__orange_robot_interfaces__srv__CalculateAngles_Request
    std::shared_ptr<orange_robot_interfaces::srv::CalculateAngles_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__orange_robot_interfaces__srv__CalculateAngles_Request
    std::shared_ptr<orange_robot_interfaces::srv::CalculateAngles_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalculateAngles_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalculateAngles_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalculateAngles_Request_

// alias to use template instance with default allocator
using CalculateAngles_Request =
  orange_robot_interfaces::srv::CalculateAngles_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace orange_robot_interfaces


#ifndef _WIN32
# define DEPRECATED__orange_robot_interfaces__srv__CalculateAngles_Response __attribute__((deprecated))
#else
# define DEPRECATED__orange_robot_interfaces__srv__CalculateAngles_Response __declspec(deprecated)
#endif

namespace orange_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CalculateAngles_Response_
{
  using Type = CalculateAngles_Response_<ContainerAllocator>;

  explicit CalculateAngles_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CalculateAngles_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _angles_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _angles_type angles;

  // setters for named parameter idiom
  Type & set__angles(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    orange_robot_interfaces::srv::CalculateAngles_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const orange_robot_interfaces::srv::CalculateAngles_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<orange_robot_interfaces::srv::CalculateAngles_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<orange_robot_interfaces::srv::CalculateAngles_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::srv::CalculateAngles_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::srv::CalculateAngles_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::srv::CalculateAngles_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::srv::CalculateAngles_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<orange_robot_interfaces::srv::CalculateAngles_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<orange_robot_interfaces::srv::CalculateAngles_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__orange_robot_interfaces__srv__CalculateAngles_Response
    std::shared_ptr<orange_robot_interfaces::srv::CalculateAngles_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__orange_robot_interfaces__srv__CalculateAngles_Response
    std::shared_ptr<orange_robot_interfaces::srv::CalculateAngles_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalculateAngles_Response_ & other) const
  {
    if (this->angles != other.angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalculateAngles_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalculateAngles_Response_

// alias to use template instance with default allocator
using CalculateAngles_Response =
  orange_robot_interfaces::srv::CalculateAngles_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace orange_robot_interfaces

namespace orange_robot_interfaces
{

namespace srv
{

struct CalculateAngles
{
  using Request = orange_robot_interfaces::srv::CalculateAngles_Request;
  using Response = orange_robot_interfaces::srv::CalculateAngles_Response;
};

}  // namespace srv

}  // namespace orange_robot_interfaces

#endif  // ORANGE_ROBOT_INTERFACES__SRV__DETAIL__CALCULATE_ANGLES__STRUCT_HPP_
