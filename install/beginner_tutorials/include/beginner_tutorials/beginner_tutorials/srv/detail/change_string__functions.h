// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from beginner_tutorials:srv/ChangeString.idl
// generated code does not contain a copyright notice

#ifndef BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__FUNCTIONS_H_
#define BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "beginner_tutorials/msg/rosidl_generator_c__visibility_control.h"

#include "beginner_tutorials/srv/detail/change_string__struct.h"

/// Initialize srv/ChangeString message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beginner_tutorials__srv__ChangeString_Request
 * )) before or use
 * beginner_tutorials__srv__ChangeString_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__ChangeString_Request__init(beginner_tutorials__srv__ChangeString_Request * msg);

/// Finalize srv/ChangeString message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__ChangeString_Request__fini(beginner_tutorials__srv__ChangeString_Request * msg);

/// Create srv/ChangeString message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beginner_tutorials__srv__ChangeString_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
beginner_tutorials__srv__ChangeString_Request *
beginner_tutorials__srv__ChangeString_Request__create();

/// Destroy srv/ChangeString message.
/**
 * It calls
 * beginner_tutorials__srv__ChangeString_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__ChangeString_Request__destroy(beginner_tutorials__srv__ChangeString_Request * msg);

/// Check for srv/ChangeString message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__ChangeString_Request__are_equal(const beginner_tutorials__srv__ChangeString_Request * lhs, const beginner_tutorials__srv__ChangeString_Request * rhs);

/// Copy a srv/ChangeString message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__ChangeString_Request__copy(
  const beginner_tutorials__srv__ChangeString_Request * input,
  beginner_tutorials__srv__ChangeString_Request * output);

/// Initialize array of srv/ChangeString messages.
/**
 * It allocates the memory for the number of elements and calls
 * beginner_tutorials__srv__ChangeString_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__ChangeString_Request__Sequence__init(beginner_tutorials__srv__ChangeString_Request__Sequence * array, size_t size);

/// Finalize array of srv/ChangeString messages.
/**
 * It calls
 * beginner_tutorials__srv__ChangeString_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__ChangeString_Request__Sequence__fini(beginner_tutorials__srv__ChangeString_Request__Sequence * array);

/// Create array of srv/ChangeString messages.
/**
 * It allocates the memory for the array and calls
 * beginner_tutorials__srv__ChangeString_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
beginner_tutorials__srv__ChangeString_Request__Sequence *
beginner_tutorials__srv__ChangeString_Request__Sequence__create(size_t size);

/// Destroy array of srv/ChangeString messages.
/**
 * It calls
 * beginner_tutorials__srv__ChangeString_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__ChangeString_Request__Sequence__destroy(beginner_tutorials__srv__ChangeString_Request__Sequence * array);

/// Check for srv/ChangeString message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__ChangeString_Request__Sequence__are_equal(const beginner_tutorials__srv__ChangeString_Request__Sequence * lhs, const beginner_tutorials__srv__ChangeString_Request__Sequence * rhs);

/// Copy an array of srv/ChangeString messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__ChangeString_Request__Sequence__copy(
  const beginner_tutorials__srv__ChangeString_Request__Sequence * input,
  beginner_tutorials__srv__ChangeString_Request__Sequence * output);

/// Initialize srv/ChangeString message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beginner_tutorials__srv__ChangeString_Response
 * )) before or use
 * beginner_tutorials__srv__ChangeString_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__ChangeString_Response__init(beginner_tutorials__srv__ChangeString_Response * msg);

/// Finalize srv/ChangeString message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__ChangeString_Response__fini(beginner_tutorials__srv__ChangeString_Response * msg);

/// Create srv/ChangeString message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beginner_tutorials__srv__ChangeString_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
beginner_tutorials__srv__ChangeString_Response *
beginner_tutorials__srv__ChangeString_Response__create();

/// Destroy srv/ChangeString message.
/**
 * It calls
 * beginner_tutorials__srv__ChangeString_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__ChangeString_Response__destroy(beginner_tutorials__srv__ChangeString_Response * msg);

/// Check for srv/ChangeString message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__ChangeString_Response__are_equal(const beginner_tutorials__srv__ChangeString_Response * lhs, const beginner_tutorials__srv__ChangeString_Response * rhs);

/// Copy a srv/ChangeString message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__ChangeString_Response__copy(
  const beginner_tutorials__srv__ChangeString_Response * input,
  beginner_tutorials__srv__ChangeString_Response * output);

/// Initialize array of srv/ChangeString messages.
/**
 * It allocates the memory for the number of elements and calls
 * beginner_tutorials__srv__ChangeString_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__ChangeString_Response__Sequence__init(beginner_tutorials__srv__ChangeString_Response__Sequence * array, size_t size);

/// Finalize array of srv/ChangeString messages.
/**
 * It calls
 * beginner_tutorials__srv__ChangeString_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__ChangeString_Response__Sequence__fini(beginner_tutorials__srv__ChangeString_Response__Sequence * array);

/// Create array of srv/ChangeString messages.
/**
 * It allocates the memory for the array and calls
 * beginner_tutorials__srv__ChangeString_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
beginner_tutorials__srv__ChangeString_Response__Sequence *
beginner_tutorials__srv__ChangeString_Response__Sequence__create(size_t size);

/// Destroy array of srv/ChangeString messages.
/**
 * It calls
 * beginner_tutorials__srv__ChangeString_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__ChangeString_Response__Sequence__destroy(beginner_tutorials__srv__ChangeString_Response__Sequence * array);

/// Check for srv/ChangeString message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__ChangeString_Response__Sequence__are_equal(const beginner_tutorials__srv__ChangeString_Response__Sequence * lhs, const beginner_tutorials__srv__ChangeString_Response__Sequence * rhs);

/// Copy an array of srv/ChangeString messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__ChangeString_Response__Sequence__copy(
  const beginner_tutorials__srv__ChangeString_Response__Sequence * input,
  beginner_tutorials__srv__ChangeString_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__FUNCTIONS_H_
