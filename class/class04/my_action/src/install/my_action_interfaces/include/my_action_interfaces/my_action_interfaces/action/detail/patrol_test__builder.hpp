// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_action_interfaces:action/PatrolTest.idl
// generated code does not contain a copyright notice

#ifndef MY_ACTION_INTERFACES__ACTION__DETAIL__PATROL_TEST__BUILDER_HPP_
#define MY_ACTION_INTERFACES__ACTION__DETAIL__PATROL_TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_action_interfaces/action/detail/patrol_test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_action_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrolTest_Goal_tolerance
{
public:
  explicit Init_PatrolTest_Goal_tolerance(::my_action_interfaces::action::PatrolTest_Goal & msg)
  : msg_(msg)
  {}
  ::my_action_interfaces::action::PatrolTest_Goal tolerance(::my_action_interfaces::action::PatrolTest_Goal::_tolerance_type arg)
  {
    msg_.tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_Goal msg_;
};

class Init_PatrolTest_Goal_waypoints
{
public:
  Init_PatrolTest_Goal_waypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PatrolTest_Goal_tolerance waypoints(::my_action_interfaces::action::PatrolTest_Goal::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_PatrolTest_Goal_tolerance(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interfaces::action::PatrolTest_Goal>()
{
  return my_action_interfaces::action::builder::Init_PatrolTest_Goal_waypoints();
}

}  // namespace my_action_interfaces


namespace my_action_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrolTest_Result_message
{
public:
  explicit Init_PatrolTest_Result_message(::my_action_interfaces::action::PatrolTest_Result & msg)
  : msg_(msg)
  {}
  ::my_action_interfaces::action::PatrolTest_Result message(::my_action_interfaces::action::PatrolTest_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_Result msg_;
};

class Init_PatrolTest_Result_success
{
public:
  Init_PatrolTest_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PatrolTest_Result_message success(::my_action_interfaces::action::PatrolTest_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PatrolTest_Result_message(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interfaces::action::PatrolTest_Result>()
{
  return my_action_interfaces::action::builder::Init_PatrolTest_Result_success();
}

}  // namespace my_action_interfaces


namespace my_action_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrolTest_Feedback_remaining_distance
{
public:
  explicit Init_PatrolTest_Feedback_remaining_distance(::my_action_interfaces::action::PatrolTest_Feedback & msg)
  : msg_(msg)
  {}
  ::my_action_interfaces::action::PatrolTest_Feedback remaining_distance(::my_action_interfaces::action::PatrolTest_Feedback::_remaining_distance_type arg)
  {
    msg_.remaining_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_Feedback msg_;
};

class Init_PatrolTest_Feedback_current_index
{
public:
  Init_PatrolTest_Feedback_current_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PatrolTest_Feedback_remaining_distance current_index(::my_action_interfaces::action::PatrolTest_Feedback::_current_index_type arg)
  {
    msg_.current_index = std::move(arg);
    return Init_PatrolTest_Feedback_remaining_distance(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interfaces::action::PatrolTest_Feedback>()
{
  return my_action_interfaces::action::builder::Init_PatrolTest_Feedback_current_index();
}

}  // namespace my_action_interfaces


namespace my_action_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrolTest_SendGoal_Request_goal
{
public:
  explicit Init_PatrolTest_SendGoal_Request_goal(::my_action_interfaces::action::PatrolTest_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_action_interfaces::action::PatrolTest_SendGoal_Request goal(::my_action_interfaces::action::PatrolTest_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_SendGoal_Request msg_;
};

class Init_PatrolTest_SendGoal_Request_goal_id
{
public:
  Init_PatrolTest_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PatrolTest_SendGoal_Request_goal goal_id(::my_action_interfaces::action::PatrolTest_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PatrolTest_SendGoal_Request_goal(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interfaces::action::PatrolTest_SendGoal_Request>()
{
  return my_action_interfaces::action::builder::Init_PatrolTest_SendGoal_Request_goal_id();
}

}  // namespace my_action_interfaces


namespace my_action_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrolTest_SendGoal_Response_stamp
{
public:
  explicit Init_PatrolTest_SendGoal_Response_stamp(::my_action_interfaces::action::PatrolTest_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_action_interfaces::action::PatrolTest_SendGoal_Response stamp(::my_action_interfaces::action::PatrolTest_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_SendGoal_Response msg_;
};

class Init_PatrolTest_SendGoal_Response_accepted
{
public:
  Init_PatrolTest_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PatrolTest_SendGoal_Response_stamp accepted(::my_action_interfaces::action::PatrolTest_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PatrolTest_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interfaces::action::PatrolTest_SendGoal_Response>()
{
  return my_action_interfaces::action::builder::Init_PatrolTest_SendGoal_Response_accepted();
}

}  // namespace my_action_interfaces


namespace my_action_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrolTest_GetResult_Request_goal_id
{
public:
  Init_PatrolTest_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_action_interfaces::action::PatrolTest_GetResult_Request goal_id(::my_action_interfaces::action::PatrolTest_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interfaces::action::PatrolTest_GetResult_Request>()
{
  return my_action_interfaces::action::builder::Init_PatrolTest_GetResult_Request_goal_id();
}

}  // namespace my_action_interfaces


namespace my_action_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrolTest_GetResult_Response_result
{
public:
  explicit Init_PatrolTest_GetResult_Response_result(::my_action_interfaces::action::PatrolTest_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_action_interfaces::action::PatrolTest_GetResult_Response result(::my_action_interfaces::action::PatrolTest_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_GetResult_Response msg_;
};

class Init_PatrolTest_GetResult_Response_status
{
public:
  Init_PatrolTest_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PatrolTest_GetResult_Response_result status(::my_action_interfaces::action::PatrolTest_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PatrolTest_GetResult_Response_result(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interfaces::action::PatrolTest_GetResult_Response>()
{
  return my_action_interfaces::action::builder::Init_PatrolTest_GetResult_Response_status();
}

}  // namespace my_action_interfaces


namespace my_action_interfaces
{

namespace action
{

namespace builder
{

class Init_PatrolTest_FeedbackMessage_feedback
{
public:
  explicit Init_PatrolTest_FeedbackMessage_feedback(::my_action_interfaces::action::PatrolTest_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_action_interfaces::action::PatrolTest_FeedbackMessage feedback(::my_action_interfaces::action::PatrolTest_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_FeedbackMessage msg_;
};

class Init_PatrolTest_FeedbackMessage_goal_id
{
public:
  Init_PatrolTest_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PatrolTest_FeedbackMessage_feedback goal_id(::my_action_interfaces::action::PatrolTest_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PatrolTest_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_action_interfaces::action::PatrolTest_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_action_interfaces::action::PatrolTest_FeedbackMessage>()
{
  return my_action_interfaces::action::builder::Init_PatrolTest_FeedbackMessage_goal_id();
}

}  // namespace my_action_interfaces

#endif  // MY_ACTION_INTERFACES__ACTION__DETAIL__PATROL_TEST__BUILDER_HPP_
