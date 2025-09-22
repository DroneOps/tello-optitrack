// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from natnet_ros2:srv/MarkerPoses.idl
// generated code does not contain a copyright notice

#ifndef NATNET_ROS2__SRV__DETAIL__MARKER_POSES__TRAITS_HPP_
#define NATNET_ROS2__SRV__DETAIL__MARKER_POSES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "natnet_ros2/srv/detail/marker_poses__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace natnet_ros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const MarkerPoses_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MarkerPoses_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MarkerPoses_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace natnet_ros2

namespace rosidl_generator_traits
{

[[deprecated("use natnet_ros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const natnet_ros2::srv::MarkerPoses_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  natnet_ros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use natnet_ros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const natnet_ros2::srv::MarkerPoses_Request & msg)
{
  return natnet_ros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<natnet_ros2::srv::MarkerPoses_Request>()
{
  return "natnet_ros2::srv::MarkerPoses_Request";
}

template<>
inline const char * name<natnet_ros2::srv::MarkerPoses_Request>()
{
  return "natnet_ros2/srv/MarkerPoses_Request";
}

template<>
struct has_fixed_size<natnet_ros2::srv::MarkerPoses_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<natnet_ros2::srv::MarkerPoses_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<natnet_ros2::srv::MarkerPoses_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace natnet_ros2
{

namespace srv
{

inline void to_flow_style_yaml(
  const MarkerPoses_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_of_markers
  {
    out << "num_of_markers: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_markers, out);
    out << ", ";
  }

  // member: x_position
  {
    if (msg.x_position.size() == 0) {
      out << "x_position: []";
    } else {
      out << "x_position: [";
      size_t pending_items = msg.x_position.size();
      for (auto item : msg.x_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y_position
  {
    if (msg.y_position.size() == 0) {
      out << "y_position: []";
    } else {
      out << "y_position: [";
      size_t pending_items = msg.y_position.size();
      for (auto item : msg.y_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: z_position
  {
    if (msg.z_position.size() == 0) {
      out << "z_position: []";
    } else {
      out << "z_position: [";
      size_t pending_items = msg.z_position.size();
      for (auto item : msg.z_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MarkerPoses_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_of_markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_of_markers: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_markers, out);
    out << "\n";
  }

  // member: x_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x_position.size() == 0) {
      out << "x_position: []\n";
    } else {
      out << "x_position:\n";
      for (auto item : msg.x_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y_position.size() == 0) {
      out << "y_position: []\n";
    } else {
      out << "y_position:\n";
      for (auto item : msg.y_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: z_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.z_position.size() == 0) {
      out << "z_position: []\n";
    } else {
      out << "z_position:\n";
      for (auto item : msg.z_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MarkerPoses_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace natnet_ros2

namespace rosidl_generator_traits
{

[[deprecated("use natnet_ros2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const natnet_ros2::srv::MarkerPoses_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  natnet_ros2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use natnet_ros2::srv::to_yaml() instead")]]
inline std::string to_yaml(const natnet_ros2::srv::MarkerPoses_Response & msg)
{
  return natnet_ros2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<natnet_ros2::srv::MarkerPoses_Response>()
{
  return "natnet_ros2::srv::MarkerPoses_Response";
}

template<>
inline const char * name<natnet_ros2::srv::MarkerPoses_Response>()
{
  return "natnet_ros2/srv/MarkerPoses_Response";
}

template<>
struct has_fixed_size<natnet_ros2::srv::MarkerPoses_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<natnet_ros2::srv::MarkerPoses_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<natnet_ros2::srv::MarkerPoses_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<natnet_ros2::srv::MarkerPoses>()
{
  return "natnet_ros2::srv::MarkerPoses";
}

template<>
inline const char * name<natnet_ros2::srv::MarkerPoses>()
{
  return "natnet_ros2/srv/MarkerPoses";
}

template<>
struct has_fixed_size<natnet_ros2::srv::MarkerPoses>
  : std::integral_constant<
    bool,
    has_fixed_size<natnet_ros2::srv::MarkerPoses_Request>::value &&
    has_fixed_size<natnet_ros2::srv::MarkerPoses_Response>::value
  >
{
};

template<>
struct has_bounded_size<natnet_ros2::srv::MarkerPoses>
  : std::integral_constant<
    bool,
    has_bounded_size<natnet_ros2::srv::MarkerPoses_Request>::value &&
    has_bounded_size<natnet_ros2::srv::MarkerPoses_Response>::value
  >
{
};

template<>
struct is_service<natnet_ros2::srv::MarkerPoses>
  : std::true_type
{
};

template<>
struct is_service_request<natnet_ros2::srv::MarkerPoses_Request>
  : std::true_type
{
};

template<>
struct is_service_response<natnet_ros2::srv::MarkerPoses_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NATNET_ROS2__SRV__DETAIL__MARKER_POSES__TRAITS_HPP_
