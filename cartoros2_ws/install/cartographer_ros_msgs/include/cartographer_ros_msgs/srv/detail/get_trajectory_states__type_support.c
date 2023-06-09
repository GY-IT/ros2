// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:srv/GetTrajectoryStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/srv/detail/get_trajectory_states__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/srv/detail/get_trajectory_states__functions.h"
#include "cartographer_ros_msgs/srv/detail/get_trajectory_states__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetTrajectoryStates_Request__rosidl_typesupport_introspection_c__GetTrajectoryStates_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__srv__GetTrajectoryStates_Request__init(message_memory);
}

void GetTrajectoryStates_Request__rosidl_typesupport_introspection_c__GetTrajectoryStates_Request_fini_function(void * message_memory)
{
  cartographer_ros_msgs__srv__GetTrajectoryStates_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetTrajectoryStates_Request__rosidl_typesupport_introspection_c__GetTrajectoryStates_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__GetTrajectoryStates_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetTrajectoryStates_Request__rosidl_typesupport_introspection_c__GetTrajectoryStates_Request_message_members = {
  "cartographer_ros_msgs__srv",  // message namespace
  "GetTrajectoryStates_Request",  // message name
  1,  // number of fields
  sizeof(cartographer_ros_msgs__srv__GetTrajectoryStates_Request),
  GetTrajectoryStates_Request__rosidl_typesupport_introspection_c__GetTrajectoryStates_Request_message_member_array,  // message members
  GetTrajectoryStates_Request__rosidl_typesupport_introspection_c__GetTrajectoryStates_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTrajectoryStates_Request__rosidl_typesupport_introspection_c__GetTrajectoryStates_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetTrajectoryStates_Request__rosidl_typesupport_introspection_c__GetTrajectoryStates_Request_message_type_support_handle = {
  0,
  &GetTrajectoryStates_Request__rosidl_typesupport_introspection_c__GetTrajectoryStates_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, GetTrajectoryStates_Request)() {
  if (!GetTrajectoryStates_Request__rosidl_typesupport_introspection_c__GetTrajectoryStates_Request_message_type_support_handle.typesupport_identifier) {
    GetTrajectoryStates_Request__rosidl_typesupport_introspection_c__GetTrajectoryStates_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetTrajectoryStates_Request__rosidl_typesupport_introspection_c__GetTrajectoryStates_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cartographer_ros_msgs/srv/detail/get_trajectory_states__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/get_trajectory_states__functions.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/get_trajectory_states__struct.h"


// Include directives for member types
// Member `status`
#include "cartographer_ros_msgs/msg/status_response.h"
// Member `status`
#include "cartographer_ros_msgs/msg/detail/status_response__rosidl_typesupport_introspection_c.h"
// Member `trajectory_states`
#include "cartographer_ros_msgs/msg/trajectory_states.h"
// Member `trajectory_states`
#include "cartographer_ros_msgs/msg/detail/trajectory_states__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetTrajectoryStates_Response__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__srv__GetTrajectoryStates_Response__init(message_memory);
}

void GetTrajectoryStates_Response__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_fini_function(void * message_memory)
{
  cartographer_ros_msgs__srv__GetTrajectoryStates_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetTrajectoryStates_Response__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__GetTrajectoryStates_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__GetTrajectoryStates_Response, trajectory_states),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetTrajectoryStates_Response__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_message_members = {
  "cartographer_ros_msgs__srv",  // message namespace
  "GetTrajectoryStates_Response",  // message name
  2,  // number of fields
  sizeof(cartographer_ros_msgs__srv__GetTrajectoryStates_Response),
  GetTrajectoryStates_Response__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_message_member_array,  // message members
  GetTrajectoryStates_Response__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTrajectoryStates_Response__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetTrajectoryStates_Response__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_message_type_support_handle = {
  0,
  &GetTrajectoryStates_Response__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, GetTrajectoryStates_Response)() {
  GetTrajectoryStates_Response__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, StatusResponse)();
  GetTrajectoryStates_Response__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, TrajectoryStates)();
  if (!GetTrajectoryStates_Response__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_message_type_support_handle.typesupport_identifier) {
    GetTrajectoryStates_Response__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetTrajectoryStates_Response__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/get_trajectory_states__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cartographer_ros_msgs__srv__detail__get_trajectory_states__rosidl_typesupport_introspection_c__GetTrajectoryStates_service_members = {
  "cartographer_ros_msgs__srv",  // service namespace
  "GetTrajectoryStates",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cartographer_ros_msgs__srv__detail__get_trajectory_states__rosidl_typesupport_introspection_c__GetTrajectoryStates_Request_message_type_support_handle,
  NULL  // response message
  // cartographer_ros_msgs__srv__detail__get_trajectory_states__rosidl_typesupport_introspection_c__GetTrajectoryStates_Response_message_type_support_handle
};

static rosidl_service_type_support_t cartographer_ros_msgs__srv__detail__get_trajectory_states__rosidl_typesupport_introspection_c__GetTrajectoryStates_service_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__detail__get_trajectory_states__rosidl_typesupport_introspection_c__GetTrajectoryStates_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, GetTrajectoryStates_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, GetTrajectoryStates_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, GetTrajectoryStates)() {
  if (!cartographer_ros_msgs__srv__detail__get_trajectory_states__rosidl_typesupport_introspection_c__GetTrajectoryStates_service_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__detail__get_trajectory_states__rosidl_typesupport_introspection_c__GetTrajectoryStates_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cartographer_ros_msgs__srv__detail__get_trajectory_states__rosidl_typesupport_introspection_c__GetTrajectoryStates_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, GetTrajectoryStates_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, GetTrajectoryStates_Response)()->data;
  }

  return &cartographer_ros_msgs__srv__detail__get_trajectory_states__rosidl_typesupport_introspection_c__GetTrajectoryStates_service_type_support_handle;
}
