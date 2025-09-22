// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from natnet_ros2:srv/MarkerPoses.idl
// generated code does not contain a copyright notice

#ifndef NATNET_ROS2__SRV__DETAIL__MARKER_POSES__STRUCT_H_
#define NATNET_ROS2__SRV__DETAIL__MARKER_POSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MarkerPoses in the package natnet_ros2.
typedef struct natnet_ros2__srv__MarkerPoses_Request
{
  uint8_t structure_needs_at_least_one_member;
} natnet_ros2__srv__MarkerPoses_Request;

// Struct for a sequence of natnet_ros2__srv__MarkerPoses_Request.
typedef struct natnet_ros2__srv__MarkerPoses_Request__Sequence
{
  natnet_ros2__srv__MarkerPoses_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} natnet_ros2__srv__MarkerPoses_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'x_position'
// Member 'y_position'
// Member 'z_position'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/MarkerPoses in the package natnet_ros2.
typedef struct natnet_ros2__srv__MarkerPoses_Response
{
  int64_t num_of_markers;
  rosidl_runtime_c__double__Sequence x_position;
  rosidl_runtime_c__double__Sequence y_position;
  rosidl_runtime_c__double__Sequence z_position;
} natnet_ros2__srv__MarkerPoses_Response;

// Struct for a sequence of natnet_ros2__srv__MarkerPoses_Response.
typedef struct natnet_ros2__srv__MarkerPoses_Response__Sequence
{
  natnet_ros2__srv__MarkerPoses_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} natnet_ros2__srv__MarkerPoses_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NATNET_ROS2__SRV__DETAIL__MARKER_POSES__STRUCT_H_
