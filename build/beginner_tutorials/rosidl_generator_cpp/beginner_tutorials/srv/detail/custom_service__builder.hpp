// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beginner_tutorials:srv/CustomService.idl
// generated code does not contain a copyright notice

#ifndef BEGINNER_TUTORIALS__SRV__DETAIL__CUSTOM_SERVICE__BUILDER_HPP_
#define BEGINNER_TUTORIALS__SRV__DETAIL__CUSTOM_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "beginner_tutorials/srv/detail/custom_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace beginner_tutorials
{

namespace srv
{

namespace builder
{

class Init_CustomService_Request_request_message
{
public:
  Init_CustomService_Request_request_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::beginner_tutorials::srv::CustomService_Request request_message(::beginner_tutorials::srv::CustomService_Request::_request_message_type arg)
  {
    msg_.request_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beginner_tutorials::srv::CustomService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beginner_tutorials::srv::CustomService_Request>()
{
  return beginner_tutorials::srv::builder::Init_CustomService_Request_request_message();
}

}  // namespace beginner_tutorials


namespace beginner_tutorials
{

namespace srv
{

namespace builder
{

class Init_CustomService_Response_response_message
{
public:
  Init_CustomService_Response_response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::beginner_tutorials::srv::CustomService_Response response_message(::beginner_tutorials::srv::CustomService_Response::_response_message_type arg)
  {
    msg_.response_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beginner_tutorials::srv::CustomService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beginner_tutorials::srv::CustomService_Response>()
{
  return beginner_tutorials::srv::builder::Init_CustomService_Response_response_message();
}

}  // namespace beginner_tutorials

#endif  // BEGINNER_TUTORIALS__SRV__DETAIL__CUSTOM_SERVICE__BUILDER_HPP_
