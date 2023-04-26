// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/BagfileProgress.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__BAGFILE_PROGRESS__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__BAGFILE_PROGRESS__TRAITS_HPP_

#include "cartographer_ros_msgs/msg/detail/bagfile_progress__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const cartographer_ros_msgs::msg::BagfileProgress & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_bagfile_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_bagfile_name: ";
    value_to_yaml(msg.current_bagfile_name, out);
    out << "\n";
  }

  // member: current_bagfile_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_bagfile_id: ";
    value_to_yaml(msg.current_bagfile_id, out);
    out << "\n";
  }

  // member: total_bagfiles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_bagfiles: ";
    value_to_yaml(msg.total_bagfiles, out);
    out << "\n";
  }

  // member: total_messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_messages: ";
    value_to_yaml(msg.total_messages, out);
    out << "\n";
  }

  // member: processed_messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "processed_messages: ";
    value_to_yaml(msg.processed_messages, out);
    out << "\n";
  }

  // member: total_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_seconds: ";
    value_to_yaml(msg.total_seconds, out);
    out << "\n";
  }

  // member: processed_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "processed_seconds: ";
    value_to_yaml(msg.processed_seconds, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const cartographer_ros_msgs::msg::BagfileProgress & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<cartographer_ros_msgs::msg::BagfileProgress>()
{
  return "cartographer_ros_msgs::msg::BagfileProgress";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::BagfileProgress>()
{
  return "cartographer_ros_msgs/msg/BagfileProgress";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::BagfileProgress>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::BagfileProgress>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::msg::BagfileProgress>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__BAGFILE_PROGRESS__TRAITS_HPP_
