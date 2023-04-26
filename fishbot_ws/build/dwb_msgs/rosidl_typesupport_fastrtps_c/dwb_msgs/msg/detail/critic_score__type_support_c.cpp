// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dwb_msgs:msg/CriticScore.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/msg/detail/critic_score__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dwb_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dwb_msgs/msg/detail/critic_score__struct.h"
#include "dwb_msgs/msg/detail/critic_score__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions


using _CriticScore__ros_msg_type = dwb_msgs__msg__CriticScore;

static bool _CriticScore__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CriticScore__ros_msg_type * ros_message = static_cast<const _CriticScore__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: raw_score
  {
    cdr << ros_message->raw_score;
  }

  // Field name: scale
  {
    cdr << ros_message->scale;
  }

  return true;
}

static bool _CriticScore__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CriticScore__ros_msg_type * ros_message = static_cast<_CriticScore__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: raw_score
  {
    cdr >> ros_message->raw_score;
  }

  // Field name: scale
  {
    cdr >> ros_message->scale;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t get_serialized_size_dwb_msgs__msg__CriticScore(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CriticScore__ros_msg_type * ros_message = static_cast<const _CriticScore__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name raw_score
  {
    size_t item_size = sizeof(ros_message->raw_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scale
  {
    size_t item_size = sizeof(ros_message->scale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CriticScore__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dwb_msgs__msg__CriticScore(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dwb_msgs
size_t max_serialized_size_dwb_msgs__msg__CriticScore(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: raw_score
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scale
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CriticScore__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dwb_msgs__msg__CriticScore(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CriticScore = {
  "dwb_msgs::msg",
  "CriticScore",
  _CriticScore__cdr_serialize,
  _CriticScore__cdr_deserialize,
  _CriticScore__get_serialized_size,
  _CriticScore__max_serialized_size
};

static rosidl_message_type_support_t _CriticScore__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CriticScore,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dwb_msgs, msg, CriticScore)() {
  return &_CriticScore__type_support;
}

#if defined(__cplusplus)
}
#endif
