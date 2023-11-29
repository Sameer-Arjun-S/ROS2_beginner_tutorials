// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from beginner_tutorials:srv/ChangeString.idl
// generated code does not contain a copyright notice

#ifndef BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__STRUCT_H_
#define BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ip'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ChangeString in the package beginner_tutorials.
typedef struct beginner_tutorials__srv__ChangeString_Request
{
  rosidl_runtime_c__String ip;
} beginner_tutorials__srv__ChangeString_Request;

// Struct for a sequence of beginner_tutorials__srv__ChangeString_Request.
typedef struct beginner_tutorials__srv__ChangeString_Request__Sequence
{
  beginner_tutorials__srv__ChangeString_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beginner_tutorials__srv__ChangeString_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'op'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ChangeString in the package beginner_tutorials.
typedef struct beginner_tutorials__srv__ChangeString_Response
{
  rosidl_runtime_c__String op;
} beginner_tutorials__srv__ChangeString_Response;

// Struct for a sequence of beginner_tutorials__srv__ChangeString_Response.
typedef struct beginner_tutorials__srv__ChangeString_Response__Sequence
{
  beginner_tutorials__srv__ChangeString_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beginner_tutorials__srv__ChangeString_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__STRUCT_H_
