// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:msg/HistogramBucket.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/msg/detail/histogram_bucket__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/msg/detail/histogram_bucket__functions.h"
#include "cartographer_ros_msgs/msg/detail/histogram_bucket__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void HistogramBucket__rosidl_typesupport_introspection_c__HistogramBucket_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__msg__HistogramBucket__init(message_memory);
}

void HistogramBucket__rosidl_typesupport_introspection_c__HistogramBucket_fini_function(void * message_memory)
{
  cartographer_ros_msgs__msg__HistogramBucket__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HistogramBucket__rosidl_typesupport_introspection_c__HistogramBucket_message_member_array[2] = {
  {
    "bucket_boundary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__HistogramBucket, bucket_boundary),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__HistogramBucket, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HistogramBucket__rosidl_typesupport_introspection_c__HistogramBucket_message_members = {
  "cartographer_ros_msgs__msg",  // message namespace
  "HistogramBucket",  // message name
  2,  // number of fields
  sizeof(cartographer_ros_msgs__msg__HistogramBucket),
  HistogramBucket__rosidl_typesupport_introspection_c__HistogramBucket_message_member_array,  // message members
  HistogramBucket__rosidl_typesupport_introspection_c__HistogramBucket_init_function,  // function to initialize message memory (memory has to be allocated)
  HistogramBucket__rosidl_typesupport_introspection_c__HistogramBucket_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HistogramBucket__rosidl_typesupport_introspection_c__HistogramBucket_message_type_support_handle = {
  0,
  &HistogramBucket__rosidl_typesupport_introspection_c__HistogramBucket_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, HistogramBucket)() {
  if (!HistogramBucket__rosidl_typesupport_introspection_c__HistogramBucket_message_type_support_handle.typesupport_identifier) {
    HistogramBucket__rosidl_typesupport_introspection_c__HistogramBucket_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HistogramBucket__rosidl_typesupport_introspection_c__HistogramBucket_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
