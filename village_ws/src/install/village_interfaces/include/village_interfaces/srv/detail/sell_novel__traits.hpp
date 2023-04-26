// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from village_interfaces:srv/SellNovel.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACES__SRV__DETAIL__SELL_NOVEL__TRAITS_HPP_
#define VILLAGE_INTERFACES__SRV__DETAIL__SELL_NOVEL__TRAITS_HPP_

#include "village_interfaces/srv/detail/sell_novel__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const village_interfaces::srv::SellNovel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: money
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "money: ";
    value_to_yaml(msg.money, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const village_interfaces::srv::SellNovel_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<village_interfaces::srv::SellNovel_Request>()
{
  return "village_interfaces::srv::SellNovel_Request";
}

template<>
inline const char * name<village_interfaces::srv::SellNovel_Request>()
{
  return "village_interfaces/srv/SellNovel_Request";
}

template<>
struct has_fixed_size<village_interfaces::srv::SellNovel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<village_interfaces::srv::SellNovel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<village_interfaces::srv::SellNovel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const village_interfaces::srv::SellNovel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: novels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.novels.size() == 0) {
      out << "novels: []\n";
    } else {
      out << "novels:\n";
      for (auto item : msg.novels) {
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

inline std::string to_yaml(const village_interfaces::srv::SellNovel_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<village_interfaces::srv::SellNovel_Response>()
{
  return "village_interfaces::srv::SellNovel_Response";
}

template<>
inline const char * name<village_interfaces::srv::SellNovel_Response>()
{
  return "village_interfaces/srv/SellNovel_Response";
}

template<>
struct has_fixed_size<village_interfaces::srv::SellNovel_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<village_interfaces::srv::SellNovel_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<village_interfaces::srv::SellNovel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<village_interfaces::srv::SellNovel>()
{
  return "village_interfaces::srv::SellNovel";
}

template<>
inline const char * name<village_interfaces::srv::SellNovel>()
{
  return "village_interfaces/srv/SellNovel";
}

template<>
struct has_fixed_size<village_interfaces::srv::SellNovel>
  : std::integral_constant<
    bool,
    has_fixed_size<village_interfaces::srv::SellNovel_Request>::value &&
    has_fixed_size<village_interfaces::srv::SellNovel_Response>::value
  >
{
};

template<>
struct has_bounded_size<village_interfaces::srv::SellNovel>
  : std::integral_constant<
    bool,
    has_bounded_size<village_interfaces::srv::SellNovel_Request>::value &&
    has_bounded_size<village_interfaces::srv::SellNovel_Response>::value
  >
{
};

template<>
struct is_service<village_interfaces::srv::SellNovel>
  : std::true_type
{
};

template<>
struct is_service_request<village_interfaces::srv::SellNovel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<village_interfaces::srv::SellNovel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VILLAGE_INTERFACES__SRV__DETAIL__SELL_NOVEL__TRAITS_HPP_
