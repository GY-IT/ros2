// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/TrajectoryStates.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_STATES__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_STATES__TRAITS_HPP_

#include "cartographer_ros_msgs/msg/detail/trajectory_states__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const cartographer_ros_msgs::msg::TrajectoryStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: trajectory_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory_id.size() == 0) {
      out << "trajectory_id: []\n";
    } else {
      out << "trajectory_id:\n";
      for (auto item : msg.trajectory_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: trajectory_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory_state.size() == 0) {
      out << "trajectory_state: []\n";
    } else {
      out << "trajectory_state:\n";
      for (auto item : msg.trajectory_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const cartographer_ros_msgs::msg::TrajectoryStates & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<cartographer_ros_msgs::msg::TrajectoryStates>()
{
  return "cartographer_ros_msgs::msg::TrajectoryStates";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::TrajectoryStates>()
{
  return "cartographer_ros_msgs/msg/TrajectoryStates";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::TrajectoryStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::TrajectoryStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::msg::TrajectoryStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_STATES__TRAITS_HPP_
