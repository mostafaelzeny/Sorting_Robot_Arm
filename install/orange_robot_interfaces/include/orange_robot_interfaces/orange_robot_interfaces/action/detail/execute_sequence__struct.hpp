// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from orange_robot_interfaces:action/ExecuteSequence.idl
// generated code does not contain a copyright notice

#ifndef ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__STRUCT_HPP_
#define ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_Goal __attribute__((deprecated))
#else
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_Goal __declspec(deprecated)
#endif

namespace orange_robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteSequence_Goal_
{
  using Type = ExecuteSequence_Goal_<ContainerAllocator>;

  explicit ExecuteSequence_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->home = false;
      this->detect = false;
      this->ripe = false;
      this->move_to_target = false;
      this->grip = false;
      this->place = false;
      this->return_home = false;
      this->diameter = 0.0f;
      this->ripeness = 0l;
    }
  }

  explicit ExecuteSequence_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->home = false;
      this->detect = false;
      this->ripe = false;
      this->move_to_target = false;
      this->grip = false;
      this->place = false;
      this->return_home = false;
      this->diameter = 0.0f;
      this->ripeness = 0l;
    }
  }

  // field types and members
  using _home_type =
    bool;
  _home_type home;
  using _detect_type =
    bool;
  _detect_type detect;
  using _ripe_type =
    bool;
  _ripe_type ripe;
  using _move_to_target_type =
    bool;
  _move_to_target_type move_to_target;
  using _grip_type =
    bool;
  _grip_type grip;
  using _place_type =
    bool;
  _place_type place;
  using _return_home_type =
    bool;
  _return_home_type return_home;
  using _angles_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _angles_type angles;
  using _diameter_type =
    float;
  _diameter_type diameter;
  using _ripeness_type =
    int32_t;
  _ripeness_type ripeness;

  // setters for named parameter idiom
  Type & set__home(
    const bool & _arg)
  {
    this->home = _arg;
    return *this;
  }
  Type & set__detect(
    const bool & _arg)
  {
    this->detect = _arg;
    return *this;
  }
  Type & set__ripe(
    const bool & _arg)
  {
    this->ripe = _arg;
    return *this;
  }
  Type & set__move_to_target(
    const bool & _arg)
  {
    this->move_to_target = _arg;
    return *this;
  }
  Type & set__grip(
    const bool & _arg)
  {
    this->grip = _arg;
    return *this;
  }
  Type & set__place(
    const bool & _arg)
  {
    this->place = _arg;
    return *this;
  }
  Type & set__return_home(
    const bool & _arg)
  {
    this->return_home = _arg;
    return *this;
  }
  Type & set__angles(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->angles = _arg;
    return *this;
  }
  Type & set__diameter(
    const float & _arg)
  {
    this->diameter = _arg;
    return *this;
  }
  Type & set__ripeness(
    const int32_t & _arg)
  {
    this->ripeness = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    orange_robot_interfaces::action::ExecuteSequence_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const orange_robot_interfaces::action::ExecuteSequence_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_Goal
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_Goal
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteSequence_Goal_ & other) const
  {
    if (this->home != other.home) {
      return false;
    }
    if (this->detect != other.detect) {
      return false;
    }
    if (this->ripe != other.ripe) {
      return false;
    }
    if (this->move_to_target != other.move_to_target) {
      return false;
    }
    if (this->grip != other.grip) {
      return false;
    }
    if (this->place != other.place) {
      return false;
    }
    if (this->return_home != other.return_home) {
      return false;
    }
    if (this->angles != other.angles) {
      return false;
    }
    if (this->diameter != other.diameter) {
      return false;
    }
    if (this->ripeness != other.ripeness) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteSequence_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteSequence_Goal_

// alias to use template instance with default allocator
using ExecuteSequence_Goal =
  orange_robot_interfaces::action::ExecuteSequence_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace orange_robot_interfaces


#ifndef _WIN32
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_Result __attribute__((deprecated))
#else
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_Result __declspec(deprecated)
#endif

namespace orange_robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteSequence_Result_
{
  using Type = ExecuteSequence_Result_<ContainerAllocator>;

  explicit ExecuteSequence_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->result = "";
    }
  }

  explicit ExecuteSequence_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->result = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    orange_robot_interfaces::action::ExecuteSequence_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const orange_robot_interfaces::action::ExecuteSequence_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_Result
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_Result
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteSequence_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteSequence_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteSequence_Result_

// alias to use template instance with default allocator
using ExecuteSequence_Result =
  orange_robot_interfaces::action::ExecuteSequence_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace orange_robot_interfaces


#ifndef _WIN32
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_Feedback __declspec(deprecated)
#endif

namespace orange_robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteSequence_Feedback_
{
  using Type = ExecuteSequence_Feedback_<ContainerAllocator>;

  explicit ExecuteSequence_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  explicit ExecuteSequence_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback = "";
    }
  }

  // field types and members
  using _feedback_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__feedback(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    orange_robot_interfaces::action::ExecuteSequence_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const orange_robot_interfaces::action::ExecuteSequence_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_Feedback
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_Feedback
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteSequence_Feedback_ & other) const
  {
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteSequence_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteSequence_Feedback_

// alias to use template instance with default allocator
using ExecuteSequence_Feedback =
  orange_robot_interfaces::action::ExecuteSequence_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace orange_robot_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "orange_robot_interfaces/action/detail/execute_sequence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request __declspec(deprecated)
#endif

namespace orange_robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteSequence_SendGoal_Request_
{
  using Type = ExecuteSequence_SendGoal_Request_<ContainerAllocator>;

  explicit ExecuteSequence_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ExecuteSequence_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    orange_robot_interfaces::action::ExecuteSequence_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const orange_robot_interfaces::action::ExecuteSequence_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteSequence_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteSequence_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteSequence_SendGoal_Request_

// alias to use template instance with default allocator
using ExecuteSequence_SendGoal_Request =
  orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace orange_robot_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response __declspec(deprecated)
#endif

namespace orange_robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteSequence_SendGoal_Response_
{
  using Type = ExecuteSequence_SendGoal_Response_<ContainerAllocator>;

  explicit ExecuteSequence_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ExecuteSequence_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteSequence_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteSequence_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteSequence_SendGoal_Response_

// alias to use template instance with default allocator
using ExecuteSequence_SendGoal_Response =
  orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace orange_robot_interfaces

namespace orange_robot_interfaces
{

namespace action
{

struct ExecuteSequence_SendGoal
{
  using Request = orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request;
  using Response = orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response;
};

}  // namespace action

}  // namespace orange_robot_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_GetResult_Request __declspec(deprecated)
#endif

namespace orange_robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteSequence_GetResult_Request_
{
  using Type = ExecuteSequence_GetResult_Request_<ContainerAllocator>;

  explicit ExecuteSequence_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ExecuteSequence_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    orange_robot_interfaces::action::ExecuteSequence_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const orange_robot_interfaces::action::ExecuteSequence_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_GetResult_Request
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_GetResult_Request
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteSequence_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteSequence_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteSequence_GetResult_Request_

// alias to use template instance with default allocator
using ExecuteSequence_GetResult_Request =
  orange_robot_interfaces::action::ExecuteSequence_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace orange_robot_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_GetResult_Response __declspec(deprecated)
#endif

namespace orange_robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteSequence_GetResult_Response_
{
  using Type = ExecuteSequence_GetResult_Response_<ContainerAllocator>;

  explicit ExecuteSequence_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ExecuteSequence_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    orange_robot_interfaces::action::ExecuteSequence_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const orange_robot_interfaces::action::ExecuteSequence_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    orange_robot_interfaces::action::ExecuteSequence_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const orange_robot_interfaces::action::ExecuteSequence_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_GetResult_Response
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_GetResult_Response
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteSequence_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteSequence_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteSequence_GetResult_Response_

// alias to use template instance with default allocator
using ExecuteSequence_GetResult_Response =
  orange_robot_interfaces::action::ExecuteSequence_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace orange_robot_interfaces

namespace orange_robot_interfaces
{

namespace action
{

struct ExecuteSequence_GetResult
{
  using Request = orange_robot_interfaces::action::ExecuteSequence_GetResult_Request;
  using Response = orange_robot_interfaces::action::ExecuteSequence_GetResult_Response;
};

}  // namespace action

}  // namespace orange_robot_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "orange_robot_interfaces/action/detail/execute_sequence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage __declspec(deprecated)
#endif

namespace orange_robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ExecuteSequence_FeedbackMessage_
{
  using Type = ExecuteSequence_FeedbackMessage_<ContainerAllocator>;

  explicit ExecuteSequence_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ExecuteSequence_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    orange_robot_interfaces::action::ExecuteSequence_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const orange_robot_interfaces::action::ExecuteSequence_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage
    std::shared_ptr<orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteSequence_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteSequence_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteSequence_FeedbackMessage_

// alias to use template instance with default allocator
using ExecuteSequence_FeedbackMessage =
  orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace orange_robot_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace orange_robot_interfaces
{

namespace action
{

struct ExecuteSequence
{
  /// The goal message defined in the action definition.
  using Goal = orange_robot_interfaces::action::ExecuteSequence_Goal;
  /// The result message defined in the action definition.
  using Result = orange_robot_interfaces::action::ExecuteSequence_Result;
  /// The feedback message defined in the action definition.
  using Feedback = orange_robot_interfaces::action::ExecuteSequence_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = orange_robot_interfaces::action::ExecuteSequence_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = orange_robot_interfaces::action::ExecuteSequence_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ExecuteSequence ExecuteSequence;

}  // namespace action

}  // namespace orange_robot_interfaces

#endif  // ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__STRUCT_HPP_
