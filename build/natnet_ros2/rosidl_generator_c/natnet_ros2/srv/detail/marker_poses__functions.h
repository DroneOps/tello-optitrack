// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from natnet_ros2:srv/MarkerPoses.idl
// generated code does not contain a copyright notice

#ifndef NATNET_ROS2__SRV__DETAIL__MARKER_POSES__FUNCTIONS_H_
#define NATNET_ROS2__SRV__DETAIL__MARKER_POSES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "natnet_ros2/msg/rosidl_generator_c__visibility_control.h"

#include "natnet_ros2/srv/detail/marker_poses__struct.h"

/// Initialize srv/MarkerPoses message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * natnet_ros2__srv__MarkerPoses_Request
 * )) before or use
 * natnet_ros2__srv__MarkerPoses_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
bool
natnet_ros2__srv__MarkerPoses_Request__init(natnet_ros2__srv__MarkerPoses_Request * msg);

/// Finalize srv/MarkerPoses message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
void
natnet_ros2__srv__MarkerPoses_Request__fini(natnet_ros2__srv__MarkerPoses_Request * msg);

/// Create srv/MarkerPoses message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * natnet_ros2__srv__MarkerPoses_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
natnet_ros2__srv__MarkerPoses_Request *
natnet_ros2__srv__MarkerPoses_Request__create();

/// Destroy srv/MarkerPoses message.
/**
 * It calls
 * natnet_ros2__srv__MarkerPoses_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
void
natnet_ros2__srv__MarkerPoses_Request__destroy(natnet_ros2__srv__MarkerPoses_Request * msg);

/// Check for srv/MarkerPoses message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
bool
natnet_ros2__srv__MarkerPoses_Request__are_equal(const natnet_ros2__srv__MarkerPoses_Request * lhs, const natnet_ros2__srv__MarkerPoses_Request * rhs);

/// Copy a srv/MarkerPoses message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
bool
natnet_ros2__srv__MarkerPoses_Request__copy(
  const natnet_ros2__srv__MarkerPoses_Request * input,
  natnet_ros2__srv__MarkerPoses_Request * output);

/// Initialize array of srv/MarkerPoses messages.
/**
 * It allocates the memory for the number of elements and calls
 * natnet_ros2__srv__MarkerPoses_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
bool
natnet_ros2__srv__MarkerPoses_Request__Sequence__init(natnet_ros2__srv__MarkerPoses_Request__Sequence * array, size_t size);

/// Finalize array of srv/MarkerPoses messages.
/**
 * It calls
 * natnet_ros2__srv__MarkerPoses_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
void
natnet_ros2__srv__MarkerPoses_Request__Sequence__fini(natnet_ros2__srv__MarkerPoses_Request__Sequence * array);

/// Create array of srv/MarkerPoses messages.
/**
 * It allocates the memory for the array and calls
 * natnet_ros2__srv__MarkerPoses_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
natnet_ros2__srv__MarkerPoses_Request__Sequence *
natnet_ros2__srv__MarkerPoses_Request__Sequence__create(size_t size);

/// Destroy array of srv/MarkerPoses messages.
/**
 * It calls
 * natnet_ros2__srv__MarkerPoses_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
void
natnet_ros2__srv__MarkerPoses_Request__Sequence__destroy(natnet_ros2__srv__MarkerPoses_Request__Sequence * array);

/// Check for srv/MarkerPoses message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
bool
natnet_ros2__srv__MarkerPoses_Request__Sequence__are_equal(const natnet_ros2__srv__MarkerPoses_Request__Sequence * lhs, const natnet_ros2__srv__MarkerPoses_Request__Sequence * rhs);

/// Copy an array of srv/MarkerPoses messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
bool
natnet_ros2__srv__MarkerPoses_Request__Sequence__copy(
  const natnet_ros2__srv__MarkerPoses_Request__Sequence * input,
  natnet_ros2__srv__MarkerPoses_Request__Sequence * output);

/// Initialize srv/MarkerPoses message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * natnet_ros2__srv__MarkerPoses_Response
 * )) before or use
 * natnet_ros2__srv__MarkerPoses_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
bool
natnet_ros2__srv__MarkerPoses_Response__init(natnet_ros2__srv__MarkerPoses_Response * msg);

/// Finalize srv/MarkerPoses message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
void
natnet_ros2__srv__MarkerPoses_Response__fini(natnet_ros2__srv__MarkerPoses_Response * msg);

/// Create srv/MarkerPoses message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * natnet_ros2__srv__MarkerPoses_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
natnet_ros2__srv__MarkerPoses_Response *
natnet_ros2__srv__MarkerPoses_Response__create();

/// Destroy srv/MarkerPoses message.
/**
 * It calls
 * natnet_ros2__srv__MarkerPoses_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
void
natnet_ros2__srv__MarkerPoses_Response__destroy(natnet_ros2__srv__MarkerPoses_Response * msg);

/// Check for srv/MarkerPoses message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
bool
natnet_ros2__srv__MarkerPoses_Response__are_equal(const natnet_ros2__srv__MarkerPoses_Response * lhs, const natnet_ros2__srv__MarkerPoses_Response * rhs);

/// Copy a srv/MarkerPoses message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
bool
natnet_ros2__srv__MarkerPoses_Response__copy(
  const natnet_ros2__srv__MarkerPoses_Response * input,
  natnet_ros2__srv__MarkerPoses_Response * output);

/// Initialize array of srv/MarkerPoses messages.
/**
 * It allocates the memory for the number of elements and calls
 * natnet_ros2__srv__MarkerPoses_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
bool
natnet_ros2__srv__MarkerPoses_Response__Sequence__init(natnet_ros2__srv__MarkerPoses_Response__Sequence * array, size_t size);

/// Finalize array of srv/MarkerPoses messages.
/**
 * It calls
 * natnet_ros2__srv__MarkerPoses_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
void
natnet_ros2__srv__MarkerPoses_Response__Sequence__fini(natnet_ros2__srv__MarkerPoses_Response__Sequence * array);

/// Create array of srv/MarkerPoses messages.
/**
 * It allocates the memory for the array and calls
 * natnet_ros2__srv__MarkerPoses_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
natnet_ros2__srv__MarkerPoses_Response__Sequence *
natnet_ros2__srv__MarkerPoses_Response__Sequence__create(size_t size);

/// Destroy array of srv/MarkerPoses messages.
/**
 * It calls
 * natnet_ros2__srv__MarkerPoses_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
void
natnet_ros2__srv__MarkerPoses_Response__Sequence__destroy(natnet_ros2__srv__MarkerPoses_Response__Sequence * array);

/// Check for srv/MarkerPoses message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
bool
natnet_ros2__srv__MarkerPoses_Response__Sequence__are_equal(const natnet_ros2__srv__MarkerPoses_Response__Sequence * lhs, const natnet_ros2__srv__MarkerPoses_Response__Sequence * rhs);

/// Copy an array of srv/MarkerPoses messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_natnet_ros2
bool
natnet_ros2__srv__MarkerPoses_Response__Sequence__copy(
  const natnet_ros2__srv__MarkerPoses_Response__Sequence * input,
  natnet_ros2__srv__MarkerPoses_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NATNET_ROS2__SRV__DETAIL__MARKER_POSES__FUNCTIONS_H_
