// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Matrix.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__MATRIX__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__MATRIX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/matrix__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Matrix_forthline
{
public:
  explicit Init_Matrix_forthline(::interfaces::msg::Matrix & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Matrix forthline(::interfaces::msg::Matrix::_forthline_type arg)
  {
    msg_.forthline = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Matrix msg_;
};

class Init_Matrix_thirdline
{
public:
  explicit Init_Matrix_thirdline(::interfaces::msg::Matrix & msg)
  : msg_(msg)
  {}
  Init_Matrix_forthline thirdline(::interfaces::msg::Matrix::_thirdline_type arg)
  {
    msg_.thirdline = std::move(arg);
    return Init_Matrix_forthline(msg_);
  }

private:
  ::interfaces::msg::Matrix msg_;
};

class Init_Matrix_secondline
{
public:
  explicit Init_Matrix_secondline(::interfaces::msg::Matrix & msg)
  : msg_(msg)
  {}
  Init_Matrix_thirdline secondline(::interfaces::msg::Matrix::_secondline_type arg)
  {
    msg_.secondline = std::move(arg);
    return Init_Matrix_thirdline(msg_);
  }

private:
  ::interfaces::msg::Matrix msg_;
};

class Init_Matrix_firstline
{
public:
  Init_Matrix_firstline()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Matrix_secondline firstline(::interfaces::msg::Matrix::_firstline_type arg)
  {
    msg_.firstline = std::move(arg);
    return Init_Matrix_secondline(msg_);
  }

private:
  ::interfaces::msg::Matrix msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Matrix>()
{
  return interfaces::msg::builder::Init_Matrix_firstline();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__MATRIX__BUILDER_HPP_
