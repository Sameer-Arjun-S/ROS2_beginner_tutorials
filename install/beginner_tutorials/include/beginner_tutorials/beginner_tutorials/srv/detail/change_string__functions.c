// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from beginner_tutorials:srv/ChangeString.idl
// generated code does not contain a copyright notice
#include "beginner_tutorials/srv/detail/change_string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `ip`
#include "rosidl_runtime_c/string_functions.h"

bool
beginner_tutorials__srv__ChangeString_Request__init(beginner_tutorials__srv__ChangeString_Request * msg)
{
  if (!msg) {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__init(&msg->ip)) {
    beginner_tutorials__srv__ChangeString_Request__fini(msg);
    return false;
  }
  return true;
}

void
beginner_tutorials__srv__ChangeString_Request__fini(beginner_tutorials__srv__ChangeString_Request * msg)
{
  if (!msg) {
    return;
  }
  // ip
  rosidl_runtime_c__String__fini(&msg->ip);
}

bool
beginner_tutorials__srv__ChangeString_Request__are_equal(const beginner_tutorials__srv__ChangeString_Request * lhs, const beginner_tutorials__srv__ChangeString_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ip), &(rhs->ip)))
  {
    return false;
  }
  return true;
}

bool
beginner_tutorials__srv__ChangeString_Request__copy(
  const beginner_tutorials__srv__ChangeString_Request * input,
  beginner_tutorials__srv__ChangeString_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // ip
  if (!rosidl_runtime_c__String__copy(
      &(input->ip), &(output->ip)))
  {
    return false;
  }
  return true;
}

beginner_tutorials__srv__ChangeString_Request *
beginner_tutorials__srv__ChangeString_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beginner_tutorials__srv__ChangeString_Request * msg = (beginner_tutorials__srv__ChangeString_Request *)allocator.allocate(sizeof(beginner_tutorials__srv__ChangeString_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beginner_tutorials__srv__ChangeString_Request));
  bool success = beginner_tutorials__srv__ChangeString_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beginner_tutorials__srv__ChangeString_Request__destroy(beginner_tutorials__srv__ChangeString_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beginner_tutorials__srv__ChangeString_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beginner_tutorials__srv__ChangeString_Request__Sequence__init(beginner_tutorials__srv__ChangeString_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beginner_tutorials__srv__ChangeString_Request * data = NULL;

  if (size) {
    data = (beginner_tutorials__srv__ChangeString_Request *)allocator.zero_allocate(size, sizeof(beginner_tutorials__srv__ChangeString_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beginner_tutorials__srv__ChangeString_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beginner_tutorials__srv__ChangeString_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
beginner_tutorials__srv__ChangeString_Request__Sequence__fini(beginner_tutorials__srv__ChangeString_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beginner_tutorials__srv__ChangeString_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

beginner_tutorials__srv__ChangeString_Request__Sequence *
beginner_tutorials__srv__ChangeString_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beginner_tutorials__srv__ChangeString_Request__Sequence * array = (beginner_tutorials__srv__ChangeString_Request__Sequence *)allocator.allocate(sizeof(beginner_tutorials__srv__ChangeString_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beginner_tutorials__srv__ChangeString_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beginner_tutorials__srv__ChangeString_Request__Sequence__destroy(beginner_tutorials__srv__ChangeString_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beginner_tutorials__srv__ChangeString_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beginner_tutorials__srv__ChangeString_Request__Sequence__are_equal(const beginner_tutorials__srv__ChangeString_Request__Sequence * lhs, const beginner_tutorials__srv__ChangeString_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beginner_tutorials__srv__ChangeString_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beginner_tutorials__srv__ChangeString_Request__Sequence__copy(
  const beginner_tutorials__srv__ChangeString_Request__Sequence * input,
  beginner_tutorials__srv__ChangeString_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beginner_tutorials__srv__ChangeString_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beginner_tutorials__srv__ChangeString_Request * data =
      (beginner_tutorials__srv__ChangeString_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beginner_tutorials__srv__ChangeString_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beginner_tutorials__srv__ChangeString_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beginner_tutorials__srv__ChangeString_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `op`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
beginner_tutorials__srv__ChangeString_Response__init(beginner_tutorials__srv__ChangeString_Response * msg)
{
  if (!msg) {
    return false;
  }
  // op
  if (!rosidl_runtime_c__String__init(&msg->op)) {
    beginner_tutorials__srv__ChangeString_Response__fini(msg);
    return false;
  }
  return true;
}

void
beginner_tutorials__srv__ChangeString_Response__fini(beginner_tutorials__srv__ChangeString_Response * msg)
{
  if (!msg) {
    return;
  }
  // op
  rosidl_runtime_c__String__fini(&msg->op);
}

bool
beginner_tutorials__srv__ChangeString_Response__are_equal(const beginner_tutorials__srv__ChangeString_Response * lhs, const beginner_tutorials__srv__ChangeString_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // op
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->op), &(rhs->op)))
  {
    return false;
  }
  return true;
}

bool
beginner_tutorials__srv__ChangeString_Response__copy(
  const beginner_tutorials__srv__ChangeString_Response * input,
  beginner_tutorials__srv__ChangeString_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // op
  if (!rosidl_runtime_c__String__copy(
      &(input->op), &(output->op)))
  {
    return false;
  }
  return true;
}

beginner_tutorials__srv__ChangeString_Response *
beginner_tutorials__srv__ChangeString_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beginner_tutorials__srv__ChangeString_Response * msg = (beginner_tutorials__srv__ChangeString_Response *)allocator.allocate(sizeof(beginner_tutorials__srv__ChangeString_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beginner_tutorials__srv__ChangeString_Response));
  bool success = beginner_tutorials__srv__ChangeString_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beginner_tutorials__srv__ChangeString_Response__destroy(beginner_tutorials__srv__ChangeString_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beginner_tutorials__srv__ChangeString_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beginner_tutorials__srv__ChangeString_Response__Sequence__init(beginner_tutorials__srv__ChangeString_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beginner_tutorials__srv__ChangeString_Response * data = NULL;

  if (size) {
    data = (beginner_tutorials__srv__ChangeString_Response *)allocator.zero_allocate(size, sizeof(beginner_tutorials__srv__ChangeString_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beginner_tutorials__srv__ChangeString_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beginner_tutorials__srv__ChangeString_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
beginner_tutorials__srv__ChangeString_Response__Sequence__fini(beginner_tutorials__srv__ChangeString_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      beginner_tutorials__srv__ChangeString_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

beginner_tutorials__srv__ChangeString_Response__Sequence *
beginner_tutorials__srv__ChangeString_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beginner_tutorials__srv__ChangeString_Response__Sequence * array = (beginner_tutorials__srv__ChangeString_Response__Sequence *)allocator.allocate(sizeof(beginner_tutorials__srv__ChangeString_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beginner_tutorials__srv__ChangeString_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beginner_tutorials__srv__ChangeString_Response__Sequence__destroy(beginner_tutorials__srv__ChangeString_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beginner_tutorials__srv__ChangeString_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beginner_tutorials__srv__ChangeString_Response__Sequence__are_equal(const beginner_tutorials__srv__ChangeString_Response__Sequence * lhs, const beginner_tutorials__srv__ChangeString_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beginner_tutorials__srv__ChangeString_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beginner_tutorials__srv__ChangeString_Response__Sequence__copy(
  const beginner_tutorials__srv__ChangeString_Response__Sequence * input,
  beginner_tutorials__srv__ChangeString_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beginner_tutorials__srv__ChangeString_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    beginner_tutorials__srv__ChangeString_Response * data =
      (beginner_tutorials__srv__ChangeString_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beginner_tutorials__srv__ChangeString_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          beginner_tutorials__srv__ChangeString_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!beginner_tutorials__srv__ChangeString_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
