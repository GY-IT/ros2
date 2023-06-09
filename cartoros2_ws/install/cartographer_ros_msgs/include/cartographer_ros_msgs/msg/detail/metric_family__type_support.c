// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:msg/MetricFamily.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/msg/detail/metric_family__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/msg/detail/metric_family__functions.h"
#include "cartographer_ros_msgs/msg/detail/metric_family__struct.h"


// Include directives for member types
// Member `name`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `metrics`
#include "cartographer_ros_msgs/msg/metric.h"
// Member `metrics`
#include "cartographer_ros_msgs/msg/detail/metric__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MetricFamily__rosidl_typesupport_introspection_c__MetricFamily_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__msg__MetricFamily__init(message_memory);
}

void MetricFamily__rosidl_typesupport_introspection_c__MetricFamily_fini_function(void * message_memory)
{
  cartographer_ros_msgs__msg__MetricFamily__fini(message_memory);
}

size_t MetricFamily__rosidl_typesupport_introspection_c__size_function__Metric__metrics(
  const void * untyped_member)
{
  const cartographer_ros_msgs__msg__Metric__Sequence * member =
    (const cartographer_ros_msgs__msg__Metric__Sequence *)(untyped_member);
  return member->size;
}

const void * MetricFamily__rosidl_typesupport_introspection_c__get_const_function__Metric__metrics(
  const void * untyped_member, size_t index)
{
  const cartographer_ros_msgs__msg__Metric__Sequence * member =
    (const cartographer_ros_msgs__msg__Metric__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MetricFamily__rosidl_typesupport_introspection_c__get_function__Metric__metrics(
  void * untyped_member, size_t index)
{
  cartographer_ros_msgs__msg__Metric__Sequence * member =
    (cartographer_ros_msgs__msg__Metric__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MetricFamily__rosidl_typesupport_introspection_c__resize_function__Metric__metrics(
  void * untyped_member, size_t size)
{
  cartographer_ros_msgs__msg__Metric__Sequence * member =
    (cartographer_ros_msgs__msg__Metric__Sequence *)(untyped_member);
  cartographer_ros_msgs__msg__Metric__Sequence__fini(member);
  return cartographer_ros_msgs__msg__Metric__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MetricFamily__rosidl_typesupport_introspection_c__MetricFamily_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__MetricFamily, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__MetricFamily, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "metrics",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__MetricFamily, metrics),  // bytes offset in struct
    NULL,  // default value
    MetricFamily__rosidl_typesupport_introspection_c__size_function__Metric__metrics,  // size() function pointer
    MetricFamily__rosidl_typesupport_introspection_c__get_const_function__Metric__metrics,  // get_const(index) function pointer
    MetricFamily__rosidl_typesupport_introspection_c__get_function__Metric__metrics,  // get(index) function pointer
    MetricFamily__rosidl_typesupport_introspection_c__resize_function__Metric__metrics  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MetricFamily__rosidl_typesupport_introspection_c__MetricFamily_message_members = {
  "cartographer_ros_msgs__msg",  // message namespace
  "MetricFamily",  // message name
  3,  // number of fields
  sizeof(cartographer_ros_msgs__msg__MetricFamily),
  MetricFamily__rosidl_typesupport_introspection_c__MetricFamily_message_member_array,  // message members
  MetricFamily__rosidl_typesupport_introspection_c__MetricFamily_init_function,  // function to initialize message memory (memory has to be allocated)
  MetricFamily__rosidl_typesupport_introspection_c__MetricFamily_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MetricFamily__rosidl_typesupport_introspection_c__MetricFamily_message_type_support_handle = {
  0,
  &MetricFamily__rosidl_typesupport_introspection_c__MetricFamily_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, MetricFamily)() {
  MetricFamily__rosidl_typesupport_introspection_c__MetricFamily_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, Metric)();
  if (!MetricFamily__rosidl_typesupport_introspection_c__MetricFamily_message_type_support_handle.typesupport_identifier) {
    MetricFamily__rosidl_typesupport_introspection_c__MetricFamily_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MetricFamily__rosidl_typesupport_introspection_c__MetricFamily_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
