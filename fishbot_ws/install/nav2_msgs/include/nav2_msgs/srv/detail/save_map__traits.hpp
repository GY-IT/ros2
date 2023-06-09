// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_
#define NAV2_MSGS__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_

#include "nav2_msgs/srv/detail/save_map__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nav2_msgs::srv::SaveMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_topic: ";
    value_to_yaml(msg.map_topic, out);
    out << "\n";
  }

  // member: map_url
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_url: ";
    value_to_yaml(msg.map_url, out);
    out << "\n";
  }

  // member: image_format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_format: ";
    value_to_yaml(msg.image_format, out);
    out << "\n";
  }

  // member: map_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_mode: ";
    value_to_yaml(msg.map_mode, out);
    out << "\n";
  }

  // member: free_thresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "free_thresh: ";
    value_to_yaml(msg.free_thresh, out);
    out << "\n";
  }

  // member: occupied_thresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "occupied_thresh: ";
    value_to_yaml(msg.occupied_thresh, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nav2_msgs::srv::SaveMap_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nav2_msgs::srv::SaveMap_Request>()
{
  return "nav2_msgs::srv::SaveMap_Request";
}

template<>
inline const char * name<nav2_msgs::srv::SaveMap_Request>()
{
  return "nav2_msgs/srv/SaveMap_Request";
}

template<>
struct has_fixed_size<nav2_msgs::srv::SaveMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::srv::SaveMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_msgs::srv::SaveMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nav2_msgs::srv::SaveMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nav2_msgs::srv::SaveMap_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nav2_msgs::srv::SaveMap_Response>()
{
  return "nav2_msgs::srv::SaveMap_Response";
}

template<>
inline const char * name<nav2_msgs::srv::SaveMap_Response>()
{
  return "nav2_msgs/srv/SaveMap_Response";
}

template<>
struct has_fixed_size<nav2_msgs::srv::SaveMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav2_msgs::srv::SaveMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nav2_msgs::srv::SaveMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::SaveMap>()
{
  return "nav2_msgs::srv::SaveMap";
}

template<>
inline const char * name<nav2_msgs::srv::SaveMap>()
{
  return "nav2_msgs/srv/SaveMap";
}

template<>
struct has_fixed_size<nav2_msgs::srv::SaveMap>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::srv::SaveMap_Request>::value &&
    has_fixed_size<nav2_msgs::srv::SaveMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::srv::SaveMap>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::srv::SaveMap_Request>::value &&
    has_bounded_size<nav2_msgs::srv::SaveMap_Response>::value
  >
{
};

template<>
struct is_service<nav2_msgs::srv::SaveMap>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_msgs::srv::SaveMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_msgs::srv::SaveMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_
