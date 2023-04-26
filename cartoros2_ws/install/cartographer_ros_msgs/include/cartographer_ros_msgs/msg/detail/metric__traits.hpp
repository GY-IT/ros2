// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/Metric.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC__TRAITS_HPP_

#include "cartographer_ros_msgs/msg/detail/metric__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'labels'
#include "cartographer_ros_msgs/msg/detail/metric_label__traits.hpp"
// Member 'counts_by_bucket'
#include "cartographer_ros_msgs/msg/detail/histogram_bucket__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const cartographer_ros_msgs::msg::Metric & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: labels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.labels.size() == 0) {
      out << "labels: []\n";
    } else {
      out << "labels:\n";
      for (auto item : msg.labels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
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

  // member: counts_by_bucket
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.counts_by_bucket.size() == 0) {
      out << "counts_by_bucket: []\n";
    } else {
      out << "counts_by_bucket:\n";
      for (auto item : msg.counts_by_bucket) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const cartographer_ros_msgs::msg::Metric & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<cartographer_ros_msgs::msg::Metric>()
{
  return "cartographer_ros_msgs::msg::Metric";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::Metric>()
{
  return "cartographer_ros_msgs/msg/Metric";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::Metric>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::Metric>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::msg::Metric>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC__TRAITS_HPP_
