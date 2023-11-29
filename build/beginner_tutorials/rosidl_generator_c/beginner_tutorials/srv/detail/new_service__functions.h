// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from beginner_tutorials:srv/NewService.idl
// generated code does not contain a copyright notice

#ifndef BEGINNER_TUTORIALS__SRV__DETAIL__NEW_SERVICE__FUNCTIONS_H_
#define BEGINNER_TUTORIALS__SRV__DETAIL__NEW_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "beginner_tutorials/msg/rosidl_generator_c__visibility_control.h"

#include "beginner_tutorials/srv/detail/new_service__struct.h"

/// Initialize srv/NewService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beginner_tutorials__srv__NewService_Request
 * )) before or use
 * beginner_tutorials__srv__NewService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__NewService_Request__init(beginner_tutorials__srv__NewService_Request * msg);

/// Finalize srv/NewService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__NewService_Request__fini(beginner_tutorials__srv__NewService_Request * msg);

/// Create srv/NewService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beginner_tutorials__srv__NewService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
beginner_tutorials__srv__NewService_Request *
beginner_tutorials__srv__NewService_Request__create();

/// Destroy srv/NewService message.
/**
 * It calls
 * beginner_tutorials__srv__NewService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__NewService_Request__destroy(beginner_tutorials__srv__NewService_Request * msg);

/// Check for srv/NewService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__NewService_Request__are_equal(const beginner_tutorials__srv__NewService_Request * lhs, const beginner_tutorials__srv__NewService_Request * rhs);

/// Copy a srv/NewService message.
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
beginner_tutorials__srv__NewService_Request__copy(
  const beginner_tutorials__srv__NewService_Request * input,
  beginner_tutorials__srv__NewService_Request * output);

/// Initialize array of srv/NewService messages.
/**
 * It allocates the memory for the number of elements and calls
 * beginner_tutorials__srv__NewService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__NewService_Request__Sequence__init(beginner_tutorials__srv__NewService_Request__Sequence * array, size_t size);

/// Finalize array of srv/NewService messages.
/**
 * It calls
 * beginner_tutorials__srv__NewService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__NewService_Request__Sequence__fini(beginner_tutorials__srv__NewService_Request__Sequence * array);

/// Create array of srv/NewService messages.
/**
 * It allocates the memory for the array and calls
 * beginner_tutorials__srv__NewService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
beginner_tutorials__srv__NewService_Request__Sequence *
beginner_tutorials__srv__NewService_Request__Sequence__create(size_t size);

/// Destroy array of srv/NewService messages.
/**
 * It calls
 * beginner_tutorials__srv__NewService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__NewService_Request__Sequence__destroy(beginner_tutorials__srv__NewService_Request__Sequence * array);

/// Check for srv/NewService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__NewService_Request__Sequence__are_equal(const beginner_tutorials__srv__NewService_Request__Sequence * lhs, const beginner_tutorials__srv__NewService_Request__Sequence * rhs);

/// Copy an array of srv/NewService messages.
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
beginner_tutorials__srv__NewService_Request__Sequence__copy(
  const beginner_tutorials__srv__NewService_Request__Sequence * input,
  beginner_tutorials__srv__NewService_Request__Sequence * output);

/// Initialize srv/NewService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * beginner_tutorials__srv__NewService_Response
 * )) before or use
 * beginner_tutorials__srv__NewService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__NewService_Response__init(beginner_tutorials__srv__NewService_Response * msg);

/// Finalize srv/NewService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__NewService_Response__fini(beginner_tutorials__srv__NewService_Response * msg);

/// Create srv/NewService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * beginner_tutorials__srv__NewService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
beginner_tutorials__srv__NewService_Response *
beginner_tutorials__srv__NewService_Response__create();

/// Destroy srv/NewService message.
/**
 * It calls
 * beginner_tutorials__srv__NewService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__NewService_Response__destroy(beginner_tutorials__srv__NewService_Response * msg);

/// Check for srv/NewService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__NewService_Response__are_equal(const beginner_tutorials__srv__NewService_Response * lhs, const beginner_tutorials__srv__NewService_Response * rhs);

/// Copy a srv/NewService message.
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
beginner_tutorials__srv__NewService_Response__copy(
  const beginner_tutorials__srv__NewService_Response * input,
  beginner_tutorials__srv__NewService_Response * output);

/// Initialize array of srv/NewService messages.
/**
 * It allocates the memory for the number of elements and calls
 * beginner_tutorials__srv__NewService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__NewService_Response__Sequence__init(beginner_tutorials__srv__NewService_Response__Sequence * array, size_t size);

/// Finalize array of srv/NewService messages.
/**
 * It calls
 * beginner_tutorials__srv__NewService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__NewService_Response__Sequence__fini(beginner_tutorials__srv__NewService_Response__Sequence * array);

/// Create array of srv/NewService messages.
/**
 * It allocates the memory for the array and calls
 * beginner_tutorials__srv__NewService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
beginner_tutorials__srv__NewService_Response__Sequence *
beginner_tutorials__srv__NewService_Response__Sequence__create(size_t size);

/// Destroy array of srv/NewService messages.
/**
 * It calls
 * beginner_tutorials__srv__NewService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
void
beginner_tutorials__srv__NewService_Response__Sequence__destroy(beginner_tutorials__srv__NewService_Response__Sequence * array);

/// Check for srv/NewService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_beginner_tutorials
bool
beginner_tutorials__srv__NewService_Response__Sequence__are_equal(const beginner_tutorials__srv__NewService_Response__Sequence * lhs, const beginner_tutorials__srv__NewService_Response__Sequence * rhs);

/// Copy an array of srv/NewService messages.
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
beginner_tutorials__srv__NewService_Response__Sequence__copy(
  const beginner_tutorials__srv__NewService_Response__Sequence * input,
  beginner_tutorials__srv__NewService_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BEGINNER_TUTORIALS__SRV__DETAIL__NEW_SERVICE__FUNCTIONS_H_
