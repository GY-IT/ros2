// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/SensorTopics.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SENSOR_TOPICS__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SENSOR_TOPICS__TRAITS_HPP_

#include "cartographer_ros_msgs/msg/detail/sensor_topics__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const cartographer_ros_msgs::msg::SensorTopics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: laser_scan_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_scan_topic: ";
    value_to_yaml(msg.laser_scan_topic, out);
    out << "\n";
  }

  // member: multi_echo_laser_scan_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi_echo_laser_scan_topic: ";
    value_to_yaml(msg.multi_echo_laser_scan_topic, out);
    out << "\n";
  }

  // member: point_cloud2_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point_cloud2_topic: ";
    value_to_yaml(msg.point_cloud2_topic, out);
    out << "\n";
  }

  // member: imu_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_topic: ";
    value_to_yaml(msg.imu_topic, out);
    out << "\n";
  }

  // member: odometry_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odometry_topic: ";
    value_to_yaml(msg.odometry_topic, out);
    out << "\n";
  }

  // member: nav_sat_fix_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_sat_fix_topic: ";
    value_to_yaml(msg.nav_sat_fix_topic, out);
    out << "\n";
  }

  // member: landmark_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landmark_topic: ";
    value_to_yaml(msg.landmark_topic, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const cartographer_ros_msgs::msg::SensorTopics & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<cartographer_ros_msgs::msg::SensorTopics>()
{
  return "cartographer_ros_msgs::msg::SensorTopics";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::SensorTopics>()
{
  return "cartographer_ros_msgs/msg/SensorTopics";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::SensorTopics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::SensorTopics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::msg::SensorTopics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SENSOR_TOPICS__TRAITS_HPP_
