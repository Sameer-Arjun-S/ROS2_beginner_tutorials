// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beginner_tutorials:srv/ChangeString.idl
// generated code does not contain a copyright notice

#ifndef BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__BUILDER_HPP_
#define BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "beginner_tutorials/srv/detail/change_string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace beginner_tutorials
{

namespace srv
{

namespace builder
{

class Init_ChangeString_Request_ip
{
public:
  Init_ChangeString_Request_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::beginner_tutorials::srv::ChangeString_Request ip(::beginner_tutorials::srv::ChangeString_Request::_ip_type arg)
  {
    msg_.ip = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beginner_tutorials::srv::ChangeString_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beginner_tutorials::srv::ChangeString_Request>()
{
  return beginner_tutorials::srv::builder::Init_ChangeString_Request_ip();
}

}  // namespace beginner_tutorials


namespace beginner_tutorials
{

namespace srv
{

namespace builder
{

class Init_ChangeString_Response_op
{
public:
  Init_ChangeString_Response_op()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::beginner_tutorials::srv::ChangeString_Response op(::beginner_tutorials::srv::ChangeString_Response::_op_type arg)
  {
    msg_.op = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beginner_tutorials::srv::ChangeString_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beginner_tutorials::srv::ChangeString_Response>()
{
  return beginner_tutorials::srv::builder::Init_ChangeString_Response_op();
}

}  // namespace beginner_tutorials

#endif  // BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__BUILDER_HPP_
