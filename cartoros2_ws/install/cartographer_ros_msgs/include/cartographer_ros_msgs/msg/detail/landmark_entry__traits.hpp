// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/LandmarkEntry.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__TRAITS_HPP_

#include "cartographer_ros_msgs/msg/detail/landmark_entry__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'tracking_from_landmark_transform'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const cartographer_ros_msgs::msg::LandmarkEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: tracking_from_landmark_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_from_landmark_transform:\n";
    to_yaml(msg.tracking_from_landmark_transform, out, indentation + 2);
  }

  // member: translation_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "translation_weight: ";
    value_to_yaml(msg.translation_weight, out);
    out << "\n";
  }

  // member: rotation_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_weight: ";
    value_to_yaml(msg.rotation_weight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const cartographer_ros_msgs::msg::LandmarkEntry & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<cartographer_ros_msgs::msg::LandmarkEntry>()
{
  return "cartographer_ros_msgs::msg::LandmarkEntry";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::LandmarkEntry>()
{
  return "cartographer_ros_msgs/msg/LandmarkEntry";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::LandmarkEntry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::LandmarkEntry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::msg::LandmarkEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__TRAITS_HPP_
