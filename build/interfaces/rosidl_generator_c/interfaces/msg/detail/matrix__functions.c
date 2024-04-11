// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/Matrix.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/matrix__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `firstline`
// Member `secondline`
// Member `thirdline`
// Member `forthline`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
interfaces__msg__Matrix__init(interfaces__msg__Matrix * msg)
{
  if (!msg) {
    return false;
  }
  // firstline
  if (!rosidl_runtime_c__double__Sequence__init(&msg->firstline, 0)) {
    interfaces__msg__Matrix__fini(msg);
    return false;
  }
  // secondline
  if (!rosidl_runtime_c__double__Sequence__init(&msg->secondline, 0)) {
    interfaces__msg__Matrix__fini(msg);
    return false;
  }
  // thirdline
  if (!rosidl_runtime_c__double__Sequence__init(&msg->thirdline, 0)) {
    interfaces__msg__Matrix__fini(msg);
    return false;
  }
  // forthline
  if (!rosidl_runtime_c__double__Sequence__init(&msg->forthline, 0)) {
    interfaces__msg__Matrix__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__msg__Matrix__fini(interfaces__msg__Matrix * msg)
{
  if (!msg) {
    return;
  }
  // firstline
  rosidl_runtime_c__double__Sequence__fini(&msg->firstline);
  // secondline
  rosidl_runtime_c__double__Sequence__fini(&msg->secondline);
  // thirdline
  rosidl_runtime_c__double__Sequence__fini(&msg->thirdline);
  // forthline
  rosidl_runtime_c__double__Sequence__fini(&msg->forthline);
}

bool
interfaces__msg__Matrix__are_equal(const interfaces__msg__Matrix * lhs, const interfaces__msg__Matrix * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // firstline
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->firstline), &(rhs->firstline)))
  {
    return false;
  }
  // secondline
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->secondline), &(rhs->secondline)))
  {
    return false;
  }
  // thirdline
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->thirdline), &(rhs->thirdline)))
  {
    return false;
  }
  // forthline
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->forthline), &(rhs->forthline)))
  {
    return false;
  }
  return true;
}

bool
interfaces__msg__Matrix__copy(
  const interfaces__msg__Matrix * input,
  interfaces__msg__Matrix * output)
{
  if (!input || !output) {
    return false;
  }
  // firstline
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->firstline), &(output->firstline)))
  {
    return false;
  }
  // secondline
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->secondline), &(output->secondline)))
  {
    return false;
  }
  // thirdline
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->thirdline), &(output->thirdline)))
  {
    return false;
  }
  // forthline
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->forthline), &(output->forthline)))
  {
    return false;
  }
  return true;
}

interfaces__msg__Matrix *
interfaces__msg__Matrix__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Matrix * msg = (interfaces__msg__Matrix *)allocator.allocate(sizeof(interfaces__msg__Matrix), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__Matrix));
  bool success = interfaces__msg__Matrix__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__Matrix__destroy(interfaces__msg__Matrix * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__Matrix__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__Matrix__Sequence__init(interfaces__msg__Matrix__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Matrix * data = NULL;

  if (size) {
    data = (interfaces__msg__Matrix *)allocator.zero_allocate(size, sizeof(interfaces__msg__Matrix), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__Matrix__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__Matrix__fini(&data[i - 1]);
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
interfaces__msg__Matrix__Sequence__fini(interfaces__msg__Matrix__Sequence * array)
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
      interfaces__msg__Matrix__fini(&array->data[i]);
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

interfaces__msg__Matrix__Sequence *
interfaces__msg__Matrix__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Matrix__Sequence * array = (interfaces__msg__Matrix__Sequence *)allocator.allocate(sizeof(interfaces__msg__Matrix__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__Matrix__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__Matrix__Sequence__destroy(interfaces__msg__Matrix__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__Matrix__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__Matrix__Sequence__are_equal(const interfaces__msg__Matrix__Sequence * lhs, const interfaces__msg__Matrix__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__Matrix__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__Matrix__Sequence__copy(
  const interfaces__msg__Matrix__Sequence * input,
  interfaces__msg__Matrix__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__Matrix);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__Matrix * data =
      (interfaces__msg__Matrix *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__Matrix__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__Matrix__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__Matrix__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
