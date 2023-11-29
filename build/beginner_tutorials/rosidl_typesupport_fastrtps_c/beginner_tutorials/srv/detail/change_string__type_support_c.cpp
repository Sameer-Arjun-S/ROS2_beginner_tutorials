// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from beginner_tutorials:srv/ChangeString.idl
// generated code does not contain a copyright notice
#include "beginner_tutorials/srv/detail/change_string__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "beginner_tutorials/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "beginner_tutorials/srv/detail/change_string__struct.h"
#include "beginner_tutorials/srv/detail/change_string__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // ip
#include "rosidl_runtime_c/string_functions.h"  // ip

// forward declare type support functions


using _ChangeString_Request__ros_msg_type = beginner_tutorials__srv__ChangeString_Request;

static bool _ChangeString_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChangeString_Request__ros_msg_type * ros_message = static_cast<const _ChangeString_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ip
  {
    const rosidl_runtime_c__String * str = &ros_message->ip;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ChangeString_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChangeString_Request__ros_msg_type * ros_message = static_cast<_ChangeString_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ip
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ip.data) {
      rosidl_runtime_c__String__init(&ros_message->ip);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ip,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ip'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_beginner_tutorials
size_t get_serialized_size_beginner_tutorials__srv__ChangeString_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChangeString_Request__ros_msg_type * ros_message = static_cast<const _ChangeString_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ip
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ip.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ChangeString_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_beginner_tutorials__srv__ChangeString_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_beginner_tutorials
size_t max_serialized_size_beginner_tutorials__srv__ChangeString_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: ip
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = beginner_tutorials__srv__ChangeString_Request;
    is_plain =
      (
      offsetof(DataType, ip) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ChangeString_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_beginner_tutorials__srv__ChangeString_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChangeString_Request = {
  "beginner_tutorials::srv",
  "ChangeString_Request",
  _ChangeString_Request__cdr_serialize,
  _ChangeString_Request__cdr_deserialize,
  _ChangeString_Request__get_serialized_size,
  _ChangeString_Request__max_serialized_size
};

static rosidl_message_type_support_t _ChangeString_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChangeString_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, beginner_tutorials, srv, ChangeString_Request)() {
  return &_ChangeString_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "beginner_tutorials/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "beginner_tutorials/srv/detail/change_string__struct.h"
// already included above
// #include "beginner_tutorials/srv/detail/change_string__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // op
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // op

// forward declare type support functions


using _ChangeString_Response__ros_msg_type = beginner_tutorials__srv__ChangeString_Response;

static bool _ChangeString_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChangeString_Response__ros_msg_type * ros_message = static_cast<const _ChangeString_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: op
  {
    const rosidl_runtime_c__String * str = &ros_message->op;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ChangeString_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChangeString_Response__ros_msg_type * ros_message = static_cast<_ChangeString_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: op
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->op.data) {
      rosidl_runtime_c__String__init(&ros_message->op);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->op,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'op'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_beginner_tutorials
size_t get_serialized_size_beginner_tutorials__srv__ChangeString_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChangeString_Response__ros_msg_type * ros_message = static_cast<const _ChangeString_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name op
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->op.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ChangeString_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_beginner_tutorials__srv__ChangeString_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_beginner_tutorials
size_t max_serialized_size_beginner_tutorials__srv__ChangeString_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: op
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = beginner_tutorials__srv__ChangeString_Response;
    is_plain =
      (
      offsetof(DataType, op) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ChangeString_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_beginner_tutorials__srv__ChangeString_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChangeString_Response = {
  "beginner_tutorials::srv",
  "ChangeString_Response",
  _ChangeString_Response__cdr_serialize,
  _ChangeString_Response__cdr_deserialize,
  _ChangeString_Response__get_serialized_size,
  _ChangeString_Response__max_serialized_size
};

static rosidl_message_type_support_t _ChangeString_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChangeString_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, beginner_tutorials, srv, ChangeString_Response)() {
  return &_ChangeString_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "beginner_tutorials/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "beginner_tutorials/srv/change_string.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ChangeString__callbacks = {
  "beginner_tutorials::srv",
  "ChangeString",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, beginner_tutorials, srv, ChangeString_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, beginner_tutorials, srv, ChangeString_Response)(),
};

static rosidl_service_type_support_t ChangeString__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ChangeString__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, beginner_tutorials, srv, ChangeString)() {
  return &ChangeString__handle;
}

#if defined(__cplusplus)
}
#endif
