// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/MetricFamily.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_FAMILY__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_FAMILY__TRAITS_HPP_

#include "cartographer_ros_msgs/msg/detail/metric_family__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'metrics'
#include "cartographer_ros_msgs/msg/detail/metric__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const cartographer_ros_msgs::msg::MetricFamily & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: metrics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.metrics.size() == 0) {
      out << "metrics: []\n";
    } else {
      out << "metrics:\n";
      for (auto item : msg.metrics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const cartographer_ros_msgs::msg::MetricFamily & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<cartographer_ros_msgs::msg::MetricFamily>()
{
  return "cartographer_ros_msgs::msg::MetricFamily";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::MetricFamily>()
{
  return "cartographer_ros_msgs/msg/MetricFamily";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::MetricFamily>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::MetricFamily>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::msg::MetricFamily>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_FAMILY__TRAITS_HPP_
