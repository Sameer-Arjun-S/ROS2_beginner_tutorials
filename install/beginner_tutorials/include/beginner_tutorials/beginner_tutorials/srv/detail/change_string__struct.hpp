// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from beginner_tutorials:srv/ChangeString.idl
// generated code does not contain a copyright notice

#ifndef BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__STRUCT_HPP_
#define BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__beginner_tutorials__srv__ChangeString_Request __attribute__((deprecated))
#else
# define DEPRECATED__beginner_tutorials__srv__ChangeString_Request __declspec(deprecated)
#endif

namespace beginner_tutorials
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeString_Request_
{
  using Type = ChangeString_Request_<ContainerAllocator>;

  explicit ChangeString_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
    }
  }

  explicit ChangeString_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ip(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ip = "";
    }
  }

  // field types and members
  using _ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ip_type ip;

  // setters for named parameter idiom
  Type & set__ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ip = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beginner_tutorials::srv::ChangeString_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const beginner_tutorials::srv::ChangeString_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beginner_tutorials::srv::ChangeString_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beginner_tutorials::srv::ChangeString_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beginner_tutorials::srv::ChangeString_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beginner_tutorials::srv::ChangeString_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beginner_tutorials::srv::ChangeString_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beginner_tutorials::srv::ChangeString_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beginner_tutorials::srv::ChangeString_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beginner_tutorials::srv::ChangeString_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beginner_tutorials__srv__ChangeString_Request
    std::shared_ptr<beginner_tutorials::srv::ChangeString_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beginner_tutorials__srv__ChangeString_Request
    std::shared_ptr<beginner_tutorials::srv::ChangeString_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeString_Request_ & other) const
  {
    if (this->ip != other.ip) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeString_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeString_Request_

// alias to use template instance with default allocator
using ChangeString_Request =
  beginner_tutorials::srv::ChangeString_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace beginner_tutorials


#ifndef _WIN32
# define DEPRECATED__beginner_tutorials__srv__ChangeString_Response __attribute__((deprecated))
#else
# define DEPRECATED__beginner_tutorials__srv__ChangeString_Response __declspec(deprecated)
#endif

namespace beginner_tutorials
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeString_Response_
{
  using Type = ChangeString_Response_<ContainerAllocator>;

  explicit ChangeString_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->op = "";
    }
  }

  explicit ChangeString_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : op(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->op = "";
    }
  }

  // field types and members
  using _op_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _op_type op;

  // setters for named parameter idiom
  Type & set__op(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->op = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    beginner_tutorials::srv::ChangeString_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const beginner_tutorials::srv::ChangeString_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<beginner_tutorials::srv::ChangeString_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<beginner_tutorials::srv::ChangeString_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      beginner_tutorials::srv::ChangeString_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<beginner_tutorials::srv::ChangeString_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      beginner_tutorials::srv::ChangeString_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<beginner_tutorials::srv::ChangeString_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<beginner_tutorials::srv::ChangeString_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<beginner_tutorials::srv::ChangeString_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__beginner_tutorials__srv__ChangeString_Response
    std::shared_ptr<beginner_tutorials::srv::ChangeString_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__beginner_tutorials__srv__ChangeString_Response
    std::shared_ptr<beginner_tutorials::srv::ChangeString_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeString_Response_ & other) const
  {
    if (this->op != other.op) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeString_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeString_Response_

// alias to use template instance with default allocator
using ChangeString_Response =
  beginner_tutorials::srv::ChangeString_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace beginner_tutorials

namespace beginner_tutorials
{

namespace srv
{

struct ChangeString
{
  using Request = beginner_tutorials::srv::ChangeString_Request;
  using Response = beginner_tutorials::srv::ChangeString_Response;
};

}  // namespace srv

}  // namespace beginner_tutorials

#endif  // BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__STRUCT_HPP_
