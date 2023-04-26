// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/StatusResponse.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_RESPONSE__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_RESPONSE__TRAITS_HPP_

#include "cartographer_ros_msgs/msg/detail/status_response__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const cartographer_ros_msgs::msg::StatusResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    value_to_yaml(msg.code, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const cartographer_ros_msgs::msg::StatusResponse & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<cartographer_ros_msgs::msg::StatusResponse>()
{
  return "cartographer_ros_msgs::msg::StatusResponse";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::StatusResponse>()
{
  return "cartographer_ros_msgs/msg/StatusResponse";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::StatusResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::StatusResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::msg::StatusResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_RESPONSE__TRAITS_HPP_
