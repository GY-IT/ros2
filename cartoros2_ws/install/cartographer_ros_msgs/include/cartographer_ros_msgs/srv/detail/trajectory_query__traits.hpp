// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:srv/TrajectoryQuery.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__TRAJECTORY_QUERY__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__TRAJECTORY_QUERY__TRAITS_HPP_

#include "cartographer_ros_msgs/srv/detail/trajectory_query__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const cartographer_ros_msgs::srv::TrajectoryQuery_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectory_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_id: ";
    value_to_yaml(msg.trajectory_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const cartographer_ros_msgs::srv::TrajectoryQuery_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<cartographer_ros_msgs::srv::TrajectoryQuery_Request>()
{
  return "cartographer_ros_msgs::srv::TrajectoryQuery_Request";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::TrajectoryQuery_Request>()
{
  return "cartographer_ros_msgs/srv/TrajectoryQuery_Request";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::TrajectoryQuery_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::TrajectoryQuery_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cartographer_ros_msgs::srv::TrajectoryQuery_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "cartographer_ros_msgs/msg/detail/status_response__traits.hpp"
// Member 'trajectory'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const cartographer_ros_msgs::srv::TrajectoryQuery_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_yaml(msg.status, out, indentation + 2);
  }

  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory.size() == 0) {
      out << "trajectory: []\n";
    } else {
      out << "trajectory:\n";
      for (auto item : msg.trajectory) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const cartographer_ros_msgs::srv::TrajectoryQuery_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<cartographer_ros_msgs::srv::TrajectoryQuery_Response>()
{
  return "cartographer_ros_msgs::srv::TrajectoryQuery_Response";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::TrajectoryQuery_Response>()
{
  return "cartographer_ros_msgs/srv/TrajectoryQuery_Response";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::TrajectoryQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::TrajectoryQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::srv::TrajectoryQuery_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::srv::TrajectoryQuery>()
{
  return "cartographer_ros_msgs::srv::TrajectoryQuery";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::TrajectoryQuery>()
{
  return "cartographer_ros_msgs/srv/TrajectoryQuery";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::TrajectoryQuery>
  : std::integral_constant<
    bool,
    has_fixed_size<cartographer_ros_msgs::srv::TrajectoryQuery_Request>::value &&
    has_fixed_size<cartographer_ros_msgs::srv::TrajectoryQuery_Response>::value
  >
{
};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::TrajectoryQuery>
  : std::integral_constant<
    bool,
    has_bounded_size<cartographer_ros_msgs::srv::TrajectoryQuery_Request>::value &&
    has_bounded_size<cartographer_ros_msgs::srv::TrajectoryQuery_Response>::value
  >
{
};

template<>
struct is_service<cartographer_ros_msgs::srv::TrajectoryQuery>
  : std::true_type
{
};

template<>
struct is_service_request<cartographer_ros_msgs::srv::TrajectoryQuery_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cartographer_ros_msgs::srv::TrajectoryQuery_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__TRAJECTORY_QUERY__TRAITS_HPP_
