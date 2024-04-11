// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/Matrix.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__MATRIX__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__MATRIX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/matrix__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Matrix & msg,
  std::ostream & out)
{
  out << "{";
  // member: firstline
  {
    if (msg.firstline.size() == 0) {
      out << "firstline: []";
    } else {
      out << "firstline: [";
      size_t pending_items = msg.firstline.size();
      for (auto item : msg.firstline) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: secondline
  {
    if (msg.secondline.size() == 0) {
      out << "secondline: []";
    } else {
      out << "secondline: [";
      size_t pending_items = msg.secondline.size();
      for (auto item : msg.secondline) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: thirdline
  {
    if (msg.thirdline.size() == 0) {
      out << "thirdline: []";
    } else {
      out << "thirdline: [";
      size_t pending_items = msg.thirdline.size();
      for (auto item : msg.thirdline) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: forthline
  {
    if (msg.forthline.size() == 0) {
      out << "forthline: []";
    } else {
      out << "forthline: [";
      size_t pending_items = msg.forthline.size();
      for (auto item : msg.forthline) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Matrix & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: firstline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.firstline.size() == 0) {
      out << "firstline: []\n";
    } else {
      out << "firstline:\n";
      for (auto item : msg.firstline) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: secondline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.secondline.size() == 0) {
      out << "secondline: []\n";
    } else {
      out << "secondline:\n";
      for (auto item : msg.secondline) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: thirdline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.thirdline.size() == 0) {
      out << "thirdline: []\n";
    } else {
      out << "thirdline:\n";
      for (auto item : msg.thirdline) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: forthline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.forthline.size() == 0) {
      out << "forthline: []\n";
    } else {
      out << "forthline:\n";
      for (auto item : msg.forthline) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Matrix & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::Matrix & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::Matrix & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::Matrix>()
{
  return "interfaces::msg::Matrix";
}

template<>
inline const char * name<interfaces::msg::Matrix>()
{
  return "interfaces/msg/Matrix";
}

template<>
struct has_fixed_size<interfaces::msg::Matrix>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::Matrix>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::Matrix>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__MATRIX__TRAITS_HPP_
