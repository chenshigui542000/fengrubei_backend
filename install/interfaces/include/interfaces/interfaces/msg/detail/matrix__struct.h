// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/Matrix.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__MATRIX__STRUCT_H_
#define INTERFACES__MSG__DETAIL__MATRIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'firstline'
// Member 'secondline'
// Member 'thirdline'
// Member 'forthline'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Matrix in the package interfaces.
typedef struct interfaces__msg__Matrix
{
  rosidl_runtime_c__double__Sequence firstline;
  rosidl_runtime_c__double__Sequence secondline;
  rosidl_runtime_c__double__Sequence thirdline;
  rosidl_runtime_c__double__Sequence forthline;
} interfaces__msg__Matrix;

// Struct for a sequence of interfaces__msg__Matrix.
typedef struct interfaces__msg__Matrix__Sequence
{
  interfaces__msg__Matrix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__Matrix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__MATRIX__STRUCT_H_
