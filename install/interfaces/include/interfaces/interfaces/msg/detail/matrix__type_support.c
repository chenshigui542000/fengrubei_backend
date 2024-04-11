// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces:msg/Matrix.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces/msg/detail/matrix__rosidl_typesupport_introspection_c.h"
#include "interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces/msg/detail/matrix__functions.h"
#include "interfaces/msg/detail/matrix__struct.h"


// Include directives for member types
// Member `firstline`
// Member `secondline`
// Member `thirdline`
// Member `forthline`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces__msg__Matrix__rosidl_typesupport_introspection_c__Matrix_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces__msg__Matrix__init(message_memory);
}

void interfaces__msg__Matrix__rosidl_typesupport_introspection_c__Matrix_fini_function(void * message_memory)
{
  interfaces__msg__Matrix__fini(message_memory);
}

size_t interfaces__msg__Matrix__rosidl_typesupport_introspection_c__size_function__Matrix__firstline(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_const_function__Matrix__firstline(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_function__Matrix__firstline(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__Matrix__rosidl_typesupport_introspection_c__fetch_function__Matrix__firstline(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_const_function__Matrix__firstline(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void interfaces__msg__Matrix__rosidl_typesupport_introspection_c__assign_function__Matrix__firstline(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_function__Matrix__firstline(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__Matrix__rosidl_typesupport_introspection_c__resize_function__Matrix__firstline(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t interfaces__msg__Matrix__rosidl_typesupport_introspection_c__size_function__Matrix__secondline(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_const_function__Matrix__secondline(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_function__Matrix__secondline(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__Matrix__rosidl_typesupport_introspection_c__fetch_function__Matrix__secondline(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_const_function__Matrix__secondline(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void interfaces__msg__Matrix__rosidl_typesupport_introspection_c__assign_function__Matrix__secondline(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_function__Matrix__secondline(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__Matrix__rosidl_typesupport_introspection_c__resize_function__Matrix__secondline(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t interfaces__msg__Matrix__rosidl_typesupport_introspection_c__size_function__Matrix__thirdline(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_const_function__Matrix__thirdline(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_function__Matrix__thirdline(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__Matrix__rosidl_typesupport_introspection_c__fetch_function__Matrix__thirdline(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_const_function__Matrix__thirdline(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void interfaces__msg__Matrix__rosidl_typesupport_introspection_c__assign_function__Matrix__thirdline(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_function__Matrix__thirdline(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__Matrix__rosidl_typesupport_introspection_c__resize_function__Matrix__thirdline(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t interfaces__msg__Matrix__rosidl_typesupport_introspection_c__size_function__Matrix__forthline(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_const_function__Matrix__forthline(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_function__Matrix__forthline(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces__msg__Matrix__rosidl_typesupport_introspection_c__fetch_function__Matrix__forthline(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_const_function__Matrix__forthline(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void interfaces__msg__Matrix__rosidl_typesupport_introspection_c__assign_function__Matrix__forthline(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_function__Matrix__forthline(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool interfaces__msg__Matrix__rosidl_typesupport_introspection_c__resize_function__Matrix__forthline(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces__msg__Matrix__rosidl_typesupport_introspection_c__Matrix_message_member_array[4] = {
  {
    "firstline",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__Matrix, firstline),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__size_function__Matrix__firstline,  // size() function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_const_function__Matrix__firstline,  // get_const(index) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_function__Matrix__firstline,  // get(index) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__fetch_function__Matrix__firstline,  // fetch(index, &value) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__assign_function__Matrix__firstline,  // assign(index, value) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__resize_function__Matrix__firstline  // resize(index) function pointer
  },
  {
    "secondline",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__Matrix, secondline),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__size_function__Matrix__secondline,  // size() function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_const_function__Matrix__secondline,  // get_const(index) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_function__Matrix__secondline,  // get(index) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__fetch_function__Matrix__secondline,  // fetch(index, &value) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__assign_function__Matrix__secondline,  // assign(index, value) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__resize_function__Matrix__secondline  // resize(index) function pointer
  },
  {
    "thirdline",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__Matrix, thirdline),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__size_function__Matrix__thirdline,  // size() function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_const_function__Matrix__thirdline,  // get_const(index) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_function__Matrix__thirdline,  // get(index) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__fetch_function__Matrix__thirdline,  // fetch(index, &value) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__assign_function__Matrix__thirdline,  // assign(index, value) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__resize_function__Matrix__thirdline  // resize(index) function pointer
  },
  {
    "forthline",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces__msg__Matrix, forthline),  // bytes offset in struct
    NULL,  // default value
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__size_function__Matrix__forthline,  // size() function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_const_function__Matrix__forthline,  // get_const(index) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__get_function__Matrix__forthline,  // get(index) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__fetch_function__Matrix__forthline,  // fetch(index, &value) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__assign_function__Matrix__forthline,  // assign(index, value) function pointer
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__resize_function__Matrix__forthline  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces__msg__Matrix__rosidl_typesupport_introspection_c__Matrix_message_members = {
  "interfaces__msg",  // message namespace
  "Matrix",  // message name
  4,  // number of fields
  sizeof(interfaces__msg__Matrix),
  interfaces__msg__Matrix__rosidl_typesupport_introspection_c__Matrix_message_member_array,  // message members
  interfaces__msg__Matrix__rosidl_typesupport_introspection_c__Matrix_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces__msg__Matrix__rosidl_typesupport_introspection_c__Matrix_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces__msg__Matrix__rosidl_typesupport_introspection_c__Matrix_message_type_support_handle = {
  0,
  &interfaces__msg__Matrix__rosidl_typesupport_introspection_c__Matrix_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, msg, Matrix)() {
  if (!interfaces__msg__Matrix__rosidl_typesupport_introspection_c__Matrix_message_type_support_handle.typesupport_identifier) {
    interfaces__msg__Matrix__rosidl_typesupport_introspection_c__Matrix_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces__msg__Matrix__rosidl_typesupport_introspection_c__Matrix_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
