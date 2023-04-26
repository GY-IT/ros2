// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/SubmapTexture.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_TEXTURE__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_TEXTURE__TRAITS_HPP_

#include "cartographer_ros_msgs/msg/detail/submap_texture__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'slice_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const cartographer_ros_msgs::msg::SubmapTexture & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cells
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cells.size() == 0) {
      out << "cells: []\n";
    } else {
      out << "cells:\n";
      for (auto item : msg.cells) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution: ";
    value_to_yaml(msg.resolution, out);
    out << "\n";
  }

  // member: slice_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slice_pose:\n";
    to_yaml(msg.slice_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const cartographer_ros_msgs::msg::SubmapTexture & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<cartographer_ros_msgs::msg::SubmapTexture>()
{
  return "cartographer_ros_msgs::msg::SubmapTexture";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::SubmapTexture>()
{
  return "cartographer_ros_msgs/msg/SubmapTexture";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::SubmapTexture>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::SubmapTexture>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::msg::SubmapTexture>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_TEXTURE__TRAITS_HPP_
