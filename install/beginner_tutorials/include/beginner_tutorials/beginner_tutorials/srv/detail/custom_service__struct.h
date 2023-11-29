// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from beginner_tutorials:srv/CustomService.idl
// generated code does not contain a copyright notice

#ifndef BEGINNER_TUTORIALS__SRV__DETAIL__CUSTOM_SERVICE__STRUCT_H_
#define BEGINNER_TUTORIALS__SRV__DETAIL__CUSTOM_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CustomService in the package beginner_tutorials.
typedef struct beginner_tutorials__srv__CustomService_Request
{
  rosidl_runtime_c__String request_message;
} beginner_tutorials__srv__CustomService_Request;

// Struct for a sequence of beginner_tutorials__srv__CustomService_Request.
typedef struct beginner_tutorials__srv__CustomService_Request__Sequence
{
  beginner_tutorials__srv__CustomService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beginner_tutorials__srv__CustomService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CustomService in the package beginner_tutorials.
typedef struct beginner_tutorials__srv__CustomService_Response
{
  rosidl_runtime_c__String response_message;
} beginner_tutorials__srv__CustomService_Response;

// Struct for a sequence of beginner_tutorials__srv__CustomService_Response.
typedef struct beginner_tutorials__srv__CustomService_Response__Sequence
{
  beginner_tutorials__srv__CustomService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beginner_tutorials__srv__CustomService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEGINNER_TUTORIALS__SRV__DETAIL__CUSTOM_SERVICE__STRUCT_H_
