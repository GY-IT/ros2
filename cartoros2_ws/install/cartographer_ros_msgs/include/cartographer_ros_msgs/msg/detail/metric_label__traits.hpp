// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/MetricLabel.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_LABEL__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_LABEL__TRAITS_HPP_

#include "cartographer_ros_msgs/msg/detail/metric_label__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const cartographer_ros_msgs::msg::MetricLabel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const cartographer_ros_msgs::msg::MetricLabel & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<cartographer_ros_msgs::msg::MetricLabel>()
{
  return "cartographer_ros_msgs::msg::MetricLabel";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::MetricLabel>()
{
  return "cartographer_ros_msgs/msg/MetricLabel";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::MetricLabel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::MetricLabel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::msg::MetricLabel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_LABEL__TRAITS_HPP_
