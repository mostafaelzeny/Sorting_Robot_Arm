// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from orange_robot_interfaces:action/ExecuteSequence.idl
// generated code does not contain a copyright notice

#ifndef ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__BUILDER_HPP_
#define ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "orange_robot_interfaces/action/detail/execute_sequence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace orange_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteSequence_Goal_ripeness
{
public:
  explicit Init_ExecuteSequence_Goal_ripeness(::orange_robot_interfaces::action::ExecuteSequence_Goal & msg)
  : msg_(msg)
  {}
  ::orange_robot_interfaces::action::ExecuteSequence_Goal ripeness(::orange_robot_interfaces::action::ExecuteSequence_Goal::_ripeness_type arg)
  {
    msg_.ripeness = std::move(arg);
    return std::move(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_Goal msg_;
};

class Init_ExecuteSequence_Goal_diameter
{
public:
  explicit Init_ExecuteSequence_Goal_diameter(::orange_robot_interfaces::action::ExecuteSequence_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteSequence_Goal_ripeness diameter(::orange_robot_interfaces::action::ExecuteSequence_Goal::_diameter_type arg)
  {
    msg_.diameter = std::move(arg);
    return Init_ExecuteSequence_Goal_ripeness(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_Goal msg_;
};

class Init_ExecuteSequence_Goal_angles
{
public:
  explicit Init_ExecuteSequence_Goal_angles(::orange_robot_interfaces::action::ExecuteSequence_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteSequence_Goal_diameter angles(::orange_robot_interfaces::action::ExecuteSequence_Goal::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return Init_ExecuteSequence_Goal_diameter(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_Goal msg_;
};

class Init_ExecuteSequence_Goal_return_home
{
public:
  explicit Init_ExecuteSequence_Goal_return_home(::orange_robot_interfaces::action::ExecuteSequence_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteSequence_Goal_angles return_home(::orange_robot_interfaces::action::ExecuteSequence_Goal::_return_home_type arg)
  {
    msg_.return_home = std::move(arg);
    return Init_ExecuteSequence_Goal_angles(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_Goal msg_;
};

class Init_ExecuteSequence_Goal_place
{
public:
  explicit Init_ExecuteSequence_Goal_place(::orange_robot_interfaces::action::ExecuteSequence_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteSequence_Goal_return_home place(::orange_robot_interfaces::action::ExecuteSequence_Goal::_place_type arg)
  {
    msg_.place = std::move(arg);
    return Init_ExecuteSequence_Goal_return_home(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_Goal msg_;
};

class Init_ExecuteSequence_Goal_grip
{
public:
  explicit Init_ExecuteSequence_Goal_grip(::orange_robot_interfaces::action::ExecuteSequence_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteSequence_Goal_place grip(::orange_robot_interfaces::action::ExecuteSequence_Goal::_grip_type arg)
  {
    msg_.grip = std::move(arg);
    return Init_ExecuteSequence_Goal_place(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_Goal msg_;
};

class Init_ExecuteSequence_Goal_move_to_target
{
public:
  explicit Init_ExecuteSequence_Goal_move_to_target(::orange_robot_interfaces::action::ExecuteSequence_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteSequence_Goal_grip move_to_target(::orange_robot_interfaces::action::ExecuteSequence_Goal::_move_to_target_type arg)
  {
    msg_.move_to_target = std::move(arg);
    return Init_ExecuteSequence_Goal_grip(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_Goal msg_;
};

class Init_ExecuteSequence_Goal_ripe
{
public:
  explicit Init_ExecuteSequence_Goal_ripe(::orange_robot_interfaces::action::ExecuteSequence_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteSequence_Goal_move_to_target ripe(::orange_robot_interfaces::action::ExecuteSequence_Goal::_ripe_type arg)
  {
    msg_.ripe = std::move(arg);
    return Init_ExecuteSequence_Goal_move_to_target(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_Goal msg_;
};

class Init_ExecuteSequence_Goal_detect
{
public:
  explicit Init_ExecuteSequence_Goal_detect(::orange_robot_interfaces::action::ExecuteSequence_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteSequence_Goal_ripe detect(::orange_robot_interfaces::action::ExecuteSequence_Goal::_detect_type arg)
  {
    msg_.detect = std::move(arg);
    return Init_ExecuteSequence_Goal_ripe(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_Goal msg_;
};

class Init_ExecuteSequence_Goal_home
{
public:
  Init_ExecuteSequence_Goal_home()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteSequence_Goal_detect home(::orange_robot_interfaces::action::ExecuteSequence_Goal::_home_type arg)
  {
    msg_.home = std::move(arg);
    return Init_ExecuteSequence_Goal_detect(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::orange_robot_interfaces::action::ExecuteSequence_Goal>()
{
  return orange_robot_interfaces::action::builder::Init_ExecuteSequence_Goal_home();
}

}  // namespace orange_robot_interfaces


namespace orange_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteSequence_Result_result
{
public:
  explicit Init_ExecuteSequence_Result_result(::orange_robot_interfaces::action::ExecuteSequence_Result & msg)
  : msg_(msg)
  {}
  ::orange_robot_interfaces::action::ExecuteSequence_Result result(::orange_robot_interfaces::action::ExecuteSequence_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_Result msg_;
};

class Init_ExecuteSequence_Result_success
{
public:
  Init_ExecuteSequence_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteSequence_Result_result success(::orange_robot_interfaces::action::ExecuteSequence_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecuteSequence_Result_result(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::orange_robot_interfaces::action::ExecuteSequence_Result>()
{
  return orange_robot_interfaces::action::builder::Init_ExecuteSequence_Result_success();
}

}  // namespace orange_robot_interfaces


namespace orange_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteSequence_Feedback_feedback
{
public:
  Init_ExecuteSequence_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::orange_robot_interfaces::action::ExecuteSequence_Feedback feedback(::orange_robot_interfaces::action::ExecuteSequence_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::orange_robot_interfaces::action::ExecuteSequence_Feedback>()
{
  return orange_robot_interfaces::action::builder::Init_ExecuteSequence_Feedback_feedback();
}

}  // namespace orange_robot_interfaces


namespace orange_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteSequence_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteSequence_SendGoal_Request_goal(::orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request goal(::orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request msg_;
};

class Init_ExecuteSequence_SendGoal_Request_goal_id
{
public:
  Init_ExecuteSequence_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteSequence_SendGoal_Request_goal goal_id(::orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteSequence_SendGoal_Request_goal(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::orange_robot_interfaces::action::ExecuteSequence_SendGoal_Request>()
{
  return orange_robot_interfaces::action::builder::Init_ExecuteSequence_SendGoal_Request_goal_id();
}

}  // namespace orange_robot_interfaces


namespace orange_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteSequence_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteSequence_SendGoal_Response_stamp(::orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response stamp(::orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response msg_;
};

class Init_ExecuteSequence_SendGoal_Response_accepted
{
public:
  Init_ExecuteSequence_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteSequence_SendGoal_Response_stamp accepted(::orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteSequence_SendGoal_Response_stamp(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::orange_robot_interfaces::action::ExecuteSequence_SendGoal_Response>()
{
  return orange_robot_interfaces::action::builder::Init_ExecuteSequence_SendGoal_Response_accepted();
}

}  // namespace orange_robot_interfaces


namespace orange_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteSequence_GetResult_Request_goal_id
{
public:
  Init_ExecuteSequence_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::orange_robot_interfaces::action::ExecuteSequence_GetResult_Request goal_id(::orange_robot_interfaces::action::ExecuteSequence_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::orange_robot_interfaces::action::ExecuteSequence_GetResult_Request>()
{
  return orange_robot_interfaces::action::builder::Init_ExecuteSequence_GetResult_Request_goal_id();
}

}  // namespace orange_robot_interfaces


namespace orange_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteSequence_GetResult_Response_result
{
public:
  explicit Init_ExecuteSequence_GetResult_Response_result(::orange_robot_interfaces::action::ExecuteSequence_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::orange_robot_interfaces::action::ExecuteSequence_GetResult_Response result(::orange_robot_interfaces::action::ExecuteSequence_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_GetResult_Response msg_;
};

class Init_ExecuteSequence_GetResult_Response_status
{
public:
  Init_ExecuteSequence_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteSequence_GetResult_Response_result status(::orange_robot_interfaces::action::ExecuteSequence_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteSequence_GetResult_Response_result(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::orange_robot_interfaces::action::ExecuteSequence_GetResult_Response>()
{
  return orange_robot_interfaces::action::builder::Init_ExecuteSequence_GetResult_Response_status();
}

}  // namespace orange_robot_interfaces


namespace orange_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteSequence_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteSequence_FeedbackMessage_feedback(::orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage feedback(::orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage msg_;
};

class Init_ExecuteSequence_FeedbackMessage_goal_id
{
public:
  Init_ExecuteSequence_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteSequence_FeedbackMessage_feedback goal_id(::orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteSequence_FeedbackMessage_feedback(msg_);
  }

private:
  ::orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::orange_robot_interfaces::action::ExecuteSequence_FeedbackMessage>()
{
  return orange_robot_interfaces::action::builder::Init_ExecuteSequence_FeedbackMessage_goal_id();
}

}  // namespace orange_robot_interfaces

#endif  // ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__BUILDER_HPP_
