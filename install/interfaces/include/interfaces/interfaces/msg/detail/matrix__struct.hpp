// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/Matrix.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__MATRIX__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__MATRIX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__Matrix __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__Matrix __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Matrix_
{
  using Type = Matrix_<ContainerAllocator>;

  explicit Matrix_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Matrix_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _firstline_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _firstline_type firstline;
  using _secondline_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _secondline_type secondline;
  using _thirdline_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _thirdline_type thirdline;
  using _forthline_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _forthline_type forthline;

  // setters for named parameter idiom
  Type & set__firstline(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->firstline = _arg;
    return *this;
  }
  Type & set__secondline(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->secondline = _arg;
    return *this;
  }
  Type & set__thirdline(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->thirdline = _arg;
    return *this;
  }
  Type & set__forthline(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->forthline = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::Matrix_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::Matrix_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::Matrix_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::Matrix_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Matrix_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Matrix_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::Matrix_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::Matrix_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::Matrix_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::Matrix_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__Matrix
    std::shared_ptr<interfaces::msg::Matrix_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__Matrix
    std::shared_ptr<interfaces::msg::Matrix_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Matrix_ & other) const
  {
    if (this->firstline != other.firstline) {
      return false;
    }
    if (this->secondline != other.secondline) {
      return false;
    }
    if (this->thirdline != other.thirdline) {
      return false;
    }
    if (this->forthline != other.forthline) {
      return false;
    }
    return true;
  }
  bool operator!=(const Matrix_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Matrix_

// alias to use template instance with default allocator
using Matrix =
  interfaces::msg::Matrix_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__MATRIX__STRUCT_HPP_
