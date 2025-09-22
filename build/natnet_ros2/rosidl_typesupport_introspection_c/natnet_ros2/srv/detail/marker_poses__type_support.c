// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from natnet_ros2:srv/MarkerPoses.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "natnet_ros2/srv/detail/marker_poses__rosidl_typesupport_introspection_c.h"
#include "natnet_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "natnet_ros2/srv/detail/marker_poses__functions.h"
#include "natnet_ros2/srv/detail/marker_poses__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void natnet_ros2__srv__MarkerPoses_Request__rosidl_typesupport_introspection_c__MarkerPoses_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  natnet_ros2__srv__MarkerPoses_Request__init(message_memory);
}

void natnet_ros2__srv__MarkerPoses_Request__rosidl_typesupport_introspection_c__MarkerPoses_Request_fini_function(void * message_memory)
{
  natnet_ros2__srv__MarkerPoses_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember natnet_ros2__srv__MarkerPoses_Request__rosidl_typesupport_introspection_c__MarkerPoses_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(natnet_ros2__srv__MarkerPoses_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers natnet_ros2__srv__MarkerPoses_Request__rosidl_typesupport_introspection_c__MarkerPoses_Request_message_members = {
  "natnet_ros2__srv",  // message namespace
  "MarkerPoses_Request",  // message name
  1,  // number of fields
  sizeof(natnet_ros2__srv__MarkerPoses_Request),
  natnet_ros2__srv__MarkerPoses_Request__rosidl_typesupport_introspection_c__MarkerPoses_Request_message_member_array,  // message members
  natnet_ros2__srv__MarkerPoses_Request__rosidl_typesupport_introspection_c__MarkerPoses_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  natnet_ros2__srv__MarkerPoses_Request__rosidl_typesupport_introspection_c__MarkerPoses_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t natnet_ros2__srv__MarkerPoses_Request__rosidl_typesupport_introspection_c__MarkerPoses_Request_message_type_support_handle = {
  0,
  &natnet_ros2__srv__MarkerPoses_Request__rosidl_typesupport_introspection_c__MarkerPoses_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_natnet_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, natnet_ros2, srv, MarkerPoses_Request)() {
  if (!natnet_ros2__srv__MarkerPoses_Request__rosidl_typesupport_introspection_c__MarkerPoses_Request_message_type_support_handle.typesupport_identifier) {
    natnet_ros2__srv__MarkerPoses_Request__rosidl_typesupport_introspection_c__MarkerPoses_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &natnet_ros2__srv__MarkerPoses_Request__rosidl_typesupport_introspection_c__MarkerPoses_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "natnet_ros2/srv/detail/marker_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "natnet_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "natnet_ros2/srv/detail/marker_poses__functions.h"
// already included above
// #include "natnet_ros2/srv/detail/marker_poses__struct.h"


// Include directives for member types
// Member `x_position`
// Member `y_position`
// Member `z_position`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__MarkerPoses_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  natnet_ros2__srv__MarkerPoses_Response__init(message_memory);
}

void natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__MarkerPoses_Response_fini_function(void * message_memory)
{
  natnet_ros2__srv__MarkerPoses_Response__fini(message_memory);
}

size_t natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__size_function__MarkerPoses_Response__x_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_const_function__MarkerPoses_Response__x_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_function__MarkerPoses_Response__x_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__fetch_function__MarkerPoses_Response__x_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_const_function__MarkerPoses_Response__x_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__assign_function__MarkerPoses_Response__x_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_function__MarkerPoses_Response__x_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__resize_function__MarkerPoses_Response__x_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__size_function__MarkerPoses_Response__y_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_const_function__MarkerPoses_Response__y_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_function__MarkerPoses_Response__y_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__fetch_function__MarkerPoses_Response__y_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_const_function__MarkerPoses_Response__y_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__assign_function__MarkerPoses_Response__y_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_function__MarkerPoses_Response__y_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__resize_function__MarkerPoses_Response__y_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__size_function__MarkerPoses_Response__z_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_const_function__MarkerPoses_Response__z_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_function__MarkerPoses_Response__z_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__fetch_function__MarkerPoses_Response__z_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_const_function__MarkerPoses_Response__z_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__assign_function__MarkerPoses_Response__z_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_function__MarkerPoses_Response__z_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__resize_function__MarkerPoses_Response__z_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__MarkerPoses_Response_message_member_array[4] = {
  {
    "num_of_markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(natnet_ros2__srv__MarkerPoses_Response, num_of_markers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(natnet_ros2__srv__MarkerPoses_Response, x_position),  // bytes offset in struct
    NULL,  // default value
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__size_function__MarkerPoses_Response__x_position,  // size() function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_const_function__MarkerPoses_Response__x_position,  // get_const(index) function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_function__MarkerPoses_Response__x_position,  // get(index) function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__fetch_function__MarkerPoses_Response__x_position,  // fetch(index, &value) function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__assign_function__MarkerPoses_Response__x_position,  // assign(index, value) function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__resize_function__MarkerPoses_Response__x_position  // resize(index) function pointer
  },
  {
    "y_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(natnet_ros2__srv__MarkerPoses_Response, y_position),  // bytes offset in struct
    NULL,  // default value
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__size_function__MarkerPoses_Response__y_position,  // size() function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_const_function__MarkerPoses_Response__y_position,  // get_const(index) function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_function__MarkerPoses_Response__y_position,  // get(index) function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__fetch_function__MarkerPoses_Response__y_position,  // fetch(index, &value) function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__assign_function__MarkerPoses_Response__y_position,  // assign(index, value) function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__resize_function__MarkerPoses_Response__y_position  // resize(index) function pointer
  },
  {
    "z_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(natnet_ros2__srv__MarkerPoses_Response, z_position),  // bytes offset in struct
    NULL,  // default value
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__size_function__MarkerPoses_Response__z_position,  // size() function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_const_function__MarkerPoses_Response__z_position,  // get_const(index) function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__get_function__MarkerPoses_Response__z_position,  // get(index) function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__fetch_function__MarkerPoses_Response__z_position,  // fetch(index, &value) function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__assign_function__MarkerPoses_Response__z_position,  // assign(index, value) function pointer
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__resize_function__MarkerPoses_Response__z_position  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__MarkerPoses_Response_message_members = {
  "natnet_ros2__srv",  // message namespace
  "MarkerPoses_Response",  // message name
  4,  // number of fields
  sizeof(natnet_ros2__srv__MarkerPoses_Response),
  natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__MarkerPoses_Response_message_member_array,  // message members
  natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__MarkerPoses_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__MarkerPoses_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__MarkerPoses_Response_message_type_support_handle = {
  0,
  &natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__MarkerPoses_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_natnet_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, natnet_ros2, srv, MarkerPoses_Response)() {
  if (!natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__MarkerPoses_Response_message_type_support_handle.typesupport_identifier) {
    natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__MarkerPoses_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &natnet_ros2__srv__MarkerPoses_Response__rosidl_typesupport_introspection_c__MarkerPoses_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "natnet_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "natnet_ros2/srv/detail/marker_poses__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers natnet_ros2__srv__detail__marker_poses__rosidl_typesupport_introspection_c__MarkerPoses_service_members = {
  "natnet_ros2__srv",  // service namespace
  "MarkerPoses",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // natnet_ros2__srv__detail__marker_poses__rosidl_typesupport_introspection_c__MarkerPoses_Request_message_type_support_handle,
  NULL  // response message
  // natnet_ros2__srv__detail__marker_poses__rosidl_typesupport_introspection_c__MarkerPoses_Response_message_type_support_handle
};

static rosidl_service_type_support_t natnet_ros2__srv__detail__marker_poses__rosidl_typesupport_introspection_c__MarkerPoses_service_type_support_handle = {
  0,
  &natnet_ros2__srv__detail__marker_poses__rosidl_typesupport_introspection_c__MarkerPoses_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, natnet_ros2, srv, MarkerPoses_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, natnet_ros2, srv, MarkerPoses_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_natnet_ros2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, natnet_ros2, srv, MarkerPoses)() {
  if (!natnet_ros2__srv__detail__marker_poses__rosidl_typesupport_introspection_c__MarkerPoses_service_type_support_handle.typesupport_identifier) {
    natnet_ros2__srv__detail__marker_poses__rosidl_typesupport_introspection_c__MarkerPoses_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)natnet_ros2__srv__detail__marker_poses__rosidl_typesupport_introspection_c__MarkerPoses_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, natnet_ros2, srv, MarkerPoses_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, natnet_ros2, srv, MarkerPoses_Response)()->data;
  }

  return &natnet_ros2__srv__detail__marker_poses__rosidl_typesupport_introspection_c__MarkerPoses_service_type_support_handle;
}
