// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg/Matrix.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces/msg/detail/matrix__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Matrix_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::msg::Matrix(_init);
}

void Matrix_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::msg::Matrix *>(message_memory);
  typed_message->~Matrix();
}

size_t size_function__Matrix__firstline(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Matrix__firstline(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Matrix__firstline(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Matrix__firstline(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Matrix__firstline(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Matrix__firstline(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Matrix__firstline(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Matrix__firstline(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Matrix__secondline(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Matrix__secondline(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Matrix__secondline(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Matrix__secondline(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Matrix__secondline(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Matrix__secondline(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Matrix__secondline(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Matrix__secondline(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Matrix__thirdline(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Matrix__thirdline(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Matrix__thirdline(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Matrix__thirdline(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Matrix__thirdline(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Matrix__thirdline(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Matrix__thirdline(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Matrix__thirdline(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Matrix__forthline(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Matrix__forthline(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Matrix__forthline(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Matrix__forthline(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Matrix__forthline(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Matrix__forthline(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Matrix__forthline(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Matrix__forthline(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Matrix_message_member_array[4] = {
  {
    "firstline",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::Matrix, firstline),  // bytes offset in struct
    nullptr,  // default value
    size_function__Matrix__firstline,  // size() function pointer
    get_const_function__Matrix__firstline,  // get_const(index) function pointer
    get_function__Matrix__firstline,  // get(index) function pointer
    fetch_function__Matrix__firstline,  // fetch(index, &value) function pointer
    assign_function__Matrix__firstline,  // assign(index, value) function pointer
    resize_function__Matrix__firstline  // resize(index) function pointer
  },
  {
    "secondline",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::Matrix, secondline),  // bytes offset in struct
    nullptr,  // default value
    size_function__Matrix__secondline,  // size() function pointer
    get_const_function__Matrix__secondline,  // get_const(index) function pointer
    get_function__Matrix__secondline,  // get(index) function pointer
    fetch_function__Matrix__secondline,  // fetch(index, &value) function pointer
    assign_function__Matrix__secondline,  // assign(index, value) function pointer
    resize_function__Matrix__secondline  // resize(index) function pointer
  },
  {
    "thirdline",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::Matrix, thirdline),  // bytes offset in struct
    nullptr,  // default value
    size_function__Matrix__thirdline,  // size() function pointer
    get_const_function__Matrix__thirdline,  // get_const(index) function pointer
    get_function__Matrix__thirdline,  // get(index) function pointer
    fetch_function__Matrix__thirdline,  // fetch(index, &value) function pointer
    assign_function__Matrix__thirdline,  // assign(index, value) function pointer
    resize_function__Matrix__thirdline  // resize(index) function pointer
  },
  {
    "forthline",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::Matrix, forthline),  // bytes offset in struct
    nullptr,  // default value
    size_function__Matrix__forthline,  // size() function pointer
    get_const_function__Matrix__forthline,  // get_const(index) function pointer
    get_function__Matrix__forthline,  // get(index) function pointer
    fetch_function__Matrix__forthline,  // fetch(index, &value) function pointer
    assign_function__Matrix__forthline,  // assign(index, value) function pointer
    resize_function__Matrix__forthline  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Matrix_message_members = {
  "interfaces::msg",  // message namespace
  "Matrix",  // message name
  4,  // number of fields
  sizeof(interfaces::msg::Matrix),
  Matrix_message_member_array,  // message members
  Matrix_init_function,  // function to initialize message memory (memory has to be allocated)
  Matrix_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Matrix_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Matrix_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::msg::Matrix>()
{
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::Matrix_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, msg, Matrix)() {
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::Matrix_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
