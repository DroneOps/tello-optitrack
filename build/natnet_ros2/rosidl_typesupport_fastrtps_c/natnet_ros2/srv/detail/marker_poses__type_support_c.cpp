// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from natnet_ros2:srv/MarkerPoses.idl
// generated code does not contain a copyright notice
#include "natnet_ros2/srv/detail/marker_poses__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "natnet_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "natnet_ros2/srv/detail/marker_poses__struct.h"
#include "natnet_ros2/srv/detail/marker_poses__functions.h"
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


// forward declare type support functions


using _MarkerPoses_Request__ros_msg_type = natnet_ros2__srv__MarkerPoses_Request;

static bool _MarkerPoses_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MarkerPoses_Request__ros_msg_type * ros_message = static_cast<const _MarkerPoses_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _MarkerPoses_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MarkerPoses_Request__ros_msg_type * ros_message = static_cast<_MarkerPoses_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_natnet_ros2
size_t get_serialized_size_natnet_ros2__srv__MarkerPoses_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MarkerPoses_Request__ros_msg_type * ros_message = static_cast<const _MarkerPoses_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MarkerPoses_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_natnet_ros2__srv__MarkerPoses_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_natnet_ros2
size_t max_serialized_size_natnet_ros2__srv__MarkerPoses_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = natnet_ros2__srv__MarkerPoses_Request;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MarkerPoses_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_natnet_ros2__srv__MarkerPoses_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MarkerPoses_Request = {
  "natnet_ros2::srv",
  "MarkerPoses_Request",
  _MarkerPoses_Request__cdr_serialize,
  _MarkerPoses_Request__cdr_deserialize,
  _MarkerPoses_Request__get_serialized_size,
  _MarkerPoses_Request__max_serialized_size
};

static rosidl_message_type_support_t _MarkerPoses_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MarkerPoses_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, natnet_ros2, srv, MarkerPoses_Request)() {
  return &_MarkerPoses_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "natnet_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "natnet_ros2/srv/detail/marker_poses__struct.h"
// already included above
// #include "natnet_ros2/srv/detail/marker_poses__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // x_position, y_position, z_position
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // x_position, y_position, z_position

// forward declare type support functions


using _MarkerPoses_Response__ros_msg_type = natnet_ros2__srv__MarkerPoses_Response;

static bool _MarkerPoses_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MarkerPoses_Response__ros_msg_type * ros_message = static_cast<const _MarkerPoses_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: num_of_markers
  {
    cdr << ros_message->num_of_markers;
  }

  // Field name: x_position
  {
    size_t size = ros_message->x_position.size;
    auto array_ptr = ros_message->x_position.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: y_position
  {
    size_t size = ros_message->y_position.size;
    auto array_ptr = ros_message->y_position.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: z_position
  {
    size_t size = ros_message->z_position.size;
    auto array_ptr = ros_message->z_position.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MarkerPoses_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MarkerPoses_Response__ros_msg_type * ros_message = static_cast<_MarkerPoses_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: num_of_markers
  {
    cdr >> ros_message->num_of_markers;
  }

  // Field name: x_position
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x_position.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->x_position);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->x_position, size)) {
      fprintf(stderr, "failed to create array for field 'x_position'");
      return false;
    }
    auto array_ptr = ros_message->x_position.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: y_position
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->y_position.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->y_position);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->y_position, size)) {
      fprintf(stderr, "failed to create array for field 'y_position'");
      return false;
    }
    auto array_ptr = ros_message->y_position.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: z_position
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->z_position.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->z_position);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->z_position, size)) {
      fprintf(stderr, "failed to create array for field 'z_position'");
      return false;
    }
    auto array_ptr = ros_message->z_position.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_natnet_ros2
size_t get_serialized_size_natnet_ros2__srv__MarkerPoses_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MarkerPoses_Response__ros_msg_type * ros_message = static_cast<const _MarkerPoses_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name num_of_markers
  {
    size_t item_size = sizeof(ros_message->num_of_markers);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_position
  {
    size_t array_size = ros_message->x_position.size;
    auto array_ptr = ros_message->x_position.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_position
  {
    size_t array_size = ros_message->y_position.size;
    auto array_ptr = ros_message->y_position.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_position
  {
    size_t array_size = ros_message->z_position.size;
    auto array_ptr = ros_message->z_position.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MarkerPoses_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_natnet_ros2__srv__MarkerPoses_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_natnet_ros2
size_t max_serialized_size_natnet_ros2__srv__MarkerPoses_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: num_of_markers
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x_position
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_position
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z_position
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = natnet_ros2__srv__MarkerPoses_Response;
    is_plain =
      (
      offsetof(DataType, z_position) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MarkerPoses_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_natnet_ros2__srv__MarkerPoses_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MarkerPoses_Response = {
  "natnet_ros2::srv",
  "MarkerPoses_Response",
  _MarkerPoses_Response__cdr_serialize,
  _MarkerPoses_Response__cdr_deserialize,
  _MarkerPoses_Response__get_serialized_size,
  _MarkerPoses_Response__max_serialized_size
};

static rosidl_message_type_support_t _MarkerPoses_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MarkerPoses_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, natnet_ros2, srv, MarkerPoses_Response)() {
  return &_MarkerPoses_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "natnet_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "natnet_ros2/srv/marker_poses.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MarkerPoses__callbacks = {
  "natnet_ros2::srv",
  "MarkerPoses",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, natnet_ros2, srv, MarkerPoses_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, natnet_ros2, srv, MarkerPoses_Response)(),
};

static rosidl_service_type_support_t MarkerPoses__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MarkerPoses__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, natnet_ros2, srv, MarkerPoses)() {
  return &MarkerPoses__handle;
}

#if defined(__cplusplus)
}
#endif
