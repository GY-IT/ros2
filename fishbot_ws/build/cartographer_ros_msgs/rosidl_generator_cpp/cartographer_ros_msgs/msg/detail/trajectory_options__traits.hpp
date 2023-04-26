// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/TrajectoryOptions.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_OPTIONS__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_OPTIONS__TRAITS_HPP_

#include "cartographer_ros_msgs/msg/detail/trajectory_options__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const cartographer_ros_msgs::msg::TrajectoryOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tracking_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_frame: ";
    value_to_yaml(msg.tracking_frame, out);
    out << "\n";
  }

  // member: published_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "published_frame: ";
    value_to_yaml(msg.published_frame, out);
    out << "\n";
  }

  // member: odom_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_frame: ";
    value_to_yaml(msg.odom_frame, out);
    out << "\n";
  }

  // member: provide_odom_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "provide_odom_frame: ";
    value_to_yaml(msg.provide_odom_frame, out);
    out << "\n";
  }

  // member: use_odometry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_odometry: ";
    value_to_yaml(msg.use_odometry, out);
    out << "\n";
  }

  // member: use_nav_sat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_nav_sat: ";
    value_to_yaml(msg.use_nav_sat, out);
    out << "\n";
  }

  // member: use_landmarks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_landmarks: ";
    value_to_yaml(msg.use_landmarks, out);
    out << "\n";
  }

  // member: publish_frame_projected_to_2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "publish_frame_projected_to_2d: ";
    value_to_yaml(msg.publish_frame_projected_to_2d, out);
    out << "\n";
  }

  // member: num_laser_scans
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_laser_scans: ";
    value_to_yaml(msg.num_laser_scans, out);
    out << "\n";
  }

  // member: num_multi_echo_laser_scans
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_multi_echo_laser_scans: ";
    value_to_yaml(msg.num_multi_echo_laser_scans, out);
    out << "\n";
  }

  // member: num_subdivisions_per_laser_scan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_subdivisions_per_laser_scan: ";
    value_to_yaml(msg.num_subdivisions_per_laser_scan, out);
    out << "\n";
  }

  // member: num_point_clouds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_point_clouds: ";
    value_to_yaml(msg.num_point_clouds, out);
    out << "\n";
  }

  // member: rangefinder_sampling_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rangefinder_sampling_ratio: ";
    value_to_yaml(msg.rangefinder_sampling_ratio, out);
    out << "\n";
  }

  // member: odometry_sampling_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odometry_sampling_ratio: ";
    value_to_yaml(msg.odometry_sampling_ratio, out);
    out << "\n";
  }

  // member: fixed_frame_pose_sampling_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_frame_pose_sampling_ratio: ";
    value_to_yaml(msg.fixed_frame_pose_sampling_ratio, out);
    out << "\n";
  }

  // member: imu_sampling_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_sampling_ratio: ";
    value_to_yaml(msg.imu_sampling_ratio, out);
    out << "\n";
  }

  // member: landmarks_sampling_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landmarks_sampling_ratio: ";
    value_to_yaml(msg.landmarks_sampling_ratio, out);
    out << "\n";
  }

  // member: trajectory_builder_options_proto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_builder_options_proto: ";
    value_to_yaml(msg.trajectory_builder_options_proto, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const cartographer_ros_msgs::msg::TrajectoryOptions & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<cartographer_ros_msgs::msg::TrajectoryOptions>()
{
  return "cartographer_ros_msgs::msg::TrajectoryOptions";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::TrajectoryOptions>()
{
  return "cartographer_ros_msgs/msg/TrajectoryOptions";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::TrajectoryOptions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::TrajectoryOptions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::msg::TrajectoryOptions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_OPTIONS__TRAITS_HPP_
