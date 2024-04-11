// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:msg/Matrix.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/matrix__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/msg/detail/matrix__struct.h"
#include "interfaces/msg/detail/matrix__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // firstline, forthline, secondline, thirdline
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // firstline, forthline, secondline, thirdline

// forward declare type support functions


using _Matrix__ros_msg_type = interfaces__msg__Matrix;

static bool _Matrix__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Matrix__ros_msg_type * ros_message = static_cast<const _Matrix__ros_msg_type *>(untyped_ros_message);
  // Field name: firstline
  {
    size_t size = ros_message->firstline.size;
    auto array_ptr = ros_message->firstline.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: secondline
  {
    size_t size = ros_message->secondline.size;
    auto array_ptr = ros_message->secondline.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: thirdline
  {
    size_t size = ros_message->thirdline.size;
    auto array_ptr = ros_message->thirdline.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: forthline
  {
    size_t size = ros_message->forthline.size;
    auto array_ptr = ros_message->forthline.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Matrix__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Matrix__ros_msg_type * ros_message = static_cast<_Matrix__ros_msg_type *>(untyped_ros_message);
  // Field name: firstline
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->firstline.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->firstline);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->firstline, size)) {
      fprintf(stderr, "failed to create array for field 'firstline'");
      return false;
    }
    auto array_ptr = ros_message->firstline.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: secondline
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->secondline.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->secondline);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->secondline, size)) {
      fprintf(stderr, "failed to create array for field 'secondline'");
      return false;
    }
    auto array_ptr = ros_message->secondline.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: thirdline
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->thirdline.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->thirdline);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->thirdline, size)) {
      fprintf(stderr, "failed to create array for field 'thirdline'");
      return false;
    }
    auto array_ptr = ros_message->thirdline.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: forthline
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->forthline.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->forthline);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->forthline, size)) {
      fprintf(stderr, "failed to create array for field 'forthline'");
      return false;
    }
    auto array_ptr = ros_message->forthline.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__msg__Matrix(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Matrix__ros_msg_type * ros_message = static_cast<const _Matrix__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name firstline
  {
    size_t array_size = ros_message->firstline.size;
    auto array_ptr = ros_message->firstline.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name secondline
  {
    size_t array_size = ros_message->secondline.size;
    auto array_ptr = ros_message->secondline.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thirdline
  {
    size_t array_size = ros_message->thirdline.size;
    auto array_ptr = ros_message->thirdline.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name forthline
  {
    size_t array_size = ros_message->forthline.size;
    auto array_ptr = ros_message->forthline.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Matrix__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__msg__Matrix(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__msg__Matrix(
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

  // member: firstline
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: secondline
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: thirdline
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: forthline
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interfaces__msg__Matrix;
    is_plain =
      (
      offsetof(DataType, forthline) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Matrix__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interfaces__msg__Matrix(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Matrix = {
  "interfaces::msg",
  "Matrix",
  _Matrix__cdr_serialize,
  _Matrix__cdr_deserialize,
  _Matrix__get_serialized_size,
  _Matrix__max_serialized_size
};

static rosidl_message_type_support_t _Matrix__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Matrix,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, Matrix)() {
  return &_Matrix__type_support;
}

#if defined(__cplusplus)
}
#endif
