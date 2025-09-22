// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from natnet_ros2:srv/MarkerPoses.idl
// generated code does not contain a copyright notice

#ifndef NATNET_ROS2__SRV__DETAIL__MARKER_POSES__STRUCT_HPP_
#define NATNET_ROS2__SRV__DETAIL__MARKER_POSES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__natnet_ros2__srv__MarkerPoses_Request __attribute__((deprecated))
#else
# define DEPRECATED__natnet_ros2__srv__MarkerPoses_Request __declspec(deprecated)
#endif

namespace natnet_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MarkerPoses_Request_
{
  using Type = MarkerPoses_Request_<ContainerAllocator>;

  explicit MarkerPoses_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MarkerPoses_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    natnet_ros2::srv::MarkerPoses_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const natnet_ros2::srv::MarkerPoses_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<natnet_ros2::srv::MarkerPoses_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<natnet_ros2::srv::MarkerPoses_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      natnet_ros2::srv::MarkerPoses_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<natnet_ros2::srv::MarkerPoses_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      natnet_ros2::srv::MarkerPoses_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<natnet_ros2::srv::MarkerPoses_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<natnet_ros2::srv::MarkerPoses_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<natnet_ros2::srv::MarkerPoses_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__natnet_ros2__srv__MarkerPoses_Request
    std::shared_ptr<natnet_ros2::srv::MarkerPoses_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__natnet_ros2__srv__MarkerPoses_Request
    std::shared_ptr<natnet_ros2::srv::MarkerPoses_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MarkerPoses_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MarkerPoses_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MarkerPoses_Request_

// alias to use template instance with default allocator
using MarkerPoses_Request =
  natnet_ros2::srv::MarkerPoses_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace natnet_ros2


#ifndef _WIN32
# define DEPRECATED__natnet_ros2__srv__MarkerPoses_Response __attribute__((deprecated))
#else
# define DEPRECATED__natnet_ros2__srv__MarkerPoses_Response __declspec(deprecated)
#endif

namespace natnet_ros2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MarkerPoses_Response_
{
  using Type = MarkerPoses_Response_<ContainerAllocator>;

  explicit MarkerPoses_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_of_markers = 0ll;
    }
  }

  explicit MarkerPoses_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_of_markers = 0ll;
    }
  }

  // field types and members
  using _num_of_markers_type =
    int64_t;
  _num_of_markers_type num_of_markers;
  using _x_position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _x_position_type x_position;
  using _y_position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _y_position_type y_position;
  using _z_position_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _z_position_type z_position;

  // setters for named parameter idiom
  Type & set__num_of_markers(
    const int64_t & _arg)
  {
    this->num_of_markers = _arg;
    return *this;
  }
  Type & set__x_position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->x_position = _arg;
    return *this;
  }
  Type & set__y_position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->y_position = _arg;
    return *this;
  }
  Type & set__z_position(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->z_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    natnet_ros2::srv::MarkerPoses_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const natnet_ros2::srv::MarkerPoses_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<natnet_ros2::srv::MarkerPoses_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<natnet_ros2::srv::MarkerPoses_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      natnet_ros2::srv::MarkerPoses_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<natnet_ros2::srv::MarkerPoses_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      natnet_ros2::srv::MarkerPoses_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<natnet_ros2::srv::MarkerPoses_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<natnet_ros2::srv::MarkerPoses_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<natnet_ros2::srv::MarkerPoses_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__natnet_ros2__srv__MarkerPoses_Response
    std::shared_ptr<natnet_ros2::srv::MarkerPoses_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__natnet_ros2__srv__MarkerPoses_Response
    std::shared_ptr<natnet_ros2::srv::MarkerPoses_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MarkerPoses_Response_ & other) const
  {
    if (this->num_of_markers != other.num_of_markers) {
      return false;
    }
    if (this->x_position != other.x_position) {
      return false;
    }
    if (this->y_position != other.y_position) {
      return false;
    }
    if (this->z_position != other.z_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const MarkerPoses_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MarkerPoses_Response_

// alias to use template instance with default allocator
using MarkerPoses_Response =
  natnet_ros2::srv::MarkerPoses_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace natnet_ros2

namespace natnet_ros2
{

namespace srv
{

struct MarkerPoses
{
  using Request = natnet_ros2::srv::MarkerPoses_Request;
  using Response = natnet_ros2::srv::MarkerPoses_Response;
};

}  // namespace srv

}  // namespace natnet_ros2

#endif  // NATNET_ROS2__SRV__DETAIL__MARKER_POSES__STRUCT_HPP_
