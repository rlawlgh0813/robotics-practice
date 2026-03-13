// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smart_shop_interfaces:srv/CheckStock.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__SRV__DETAIL__CHECK_STOCK__STRUCT_HPP_
#define SMART_SHOP_INTERFACES__SRV__DETAIL__CHECK_STOCK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__smart_shop_interfaces__srv__CheckStock_Request __attribute__((deprecated))
#else
# define DEPRECATED__smart_shop_interfaces__srv__CheckStock_Request __declspec(deprecated)
#endif

namespace smart_shop_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckStock_Request_
{
  using Type = CheckStock_Request_<ContainerAllocator>;

  explicit CheckStock_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->item_id = "";
      this->quantity = 0l;
    }
  }

  explicit CheckStock_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : item_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->item_id = "";
      this->quantity = 0l;
    }
  }

  // field types and members
  using _item_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _item_id_type item_id;
  using _quantity_type =
    int32_t;
  _quantity_type quantity;

  // setters for named parameter idiom
  Type & set__item_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->item_id = _arg;
    return *this;
  }
  Type & set__quantity(
    const int32_t & _arg)
  {
    this->quantity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smart_shop_interfaces::srv::CheckStock_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const smart_shop_interfaces::srv::CheckStock_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smart_shop_interfaces::srv::CheckStock_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smart_shop_interfaces::srv::CheckStock_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smart_shop_interfaces::srv::CheckStock_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smart_shop_interfaces::srv::CheckStock_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smart_shop_interfaces::srv::CheckStock_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smart_shop_interfaces::srv::CheckStock_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smart_shop_interfaces::srv::CheckStock_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smart_shop_interfaces::srv::CheckStock_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smart_shop_interfaces__srv__CheckStock_Request
    std::shared_ptr<smart_shop_interfaces::srv::CheckStock_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smart_shop_interfaces__srv__CheckStock_Request
    std::shared_ptr<smart_shop_interfaces::srv::CheckStock_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckStock_Request_ & other) const
  {
    if (this->item_id != other.item_id) {
      return false;
    }
    if (this->quantity != other.quantity) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckStock_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckStock_Request_

// alias to use template instance with default allocator
using CheckStock_Request =
  smart_shop_interfaces::srv::CheckStock_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace smart_shop_interfaces


#ifndef _WIN32
# define DEPRECATED__smart_shop_interfaces__srv__CheckStock_Response __attribute__((deprecated))
#else
# define DEPRECATED__smart_shop_interfaces__srv__CheckStock_Response __declspec(deprecated)
#endif

namespace smart_shop_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckStock_Response_
{
  using Type = CheckStock_Response_<ContainerAllocator>;

  explicit CheckStock_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
      this->remaining = 0l;
      this->reason = "";
    }
  }

  explicit CheckStock_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
      this->remaining = 0l;
      this->reason = "";
    }
  }

  // field types and members
  using _available_type =
    bool;
  _available_type available;
  using _remaining_type =
    int32_t;
  _remaining_type remaining;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__available(
    const bool & _arg)
  {
    this->available = _arg;
    return *this;
  }
  Type & set__remaining(
    const int32_t & _arg)
  {
    this->remaining = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smart_shop_interfaces::srv::CheckStock_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const smart_shop_interfaces::srv::CheckStock_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smart_shop_interfaces::srv::CheckStock_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smart_shop_interfaces::srv::CheckStock_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smart_shop_interfaces::srv::CheckStock_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smart_shop_interfaces::srv::CheckStock_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smart_shop_interfaces::srv::CheckStock_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smart_shop_interfaces::srv::CheckStock_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smart_shop_interfaces::srv::CheckStock_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smart_shop_interfaces::srv::CheckStock_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smart_shop_interfaces__srv__CheckStock_Response
    std::shared_ptr<smart_shop_interfaces::srv::CheckStock_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smart_shop_interfaces__srv__CheckStock_Response
    std::shared_ptr<smart_shop_interfaces::srv::CheckStock_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckStock_Response_ & other) const
  {
    if (this->available != other.available) {
      return false;
    }
    if (this->remaining != other.remaining) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckStock_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckStock_Response_

// alias to use template instance with default allocator
using CheckStock_Response =
  smart_shop_interfaces::srv::CheckStock_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace smart_shop_interfaces

namespace smart_shop_interfaces
{

namespace srv
{

struct CheckStock
{
  using Request = smart_shop_interfaces::srv::CheckStock_Request;
  using Response = smart_shop_interfaces::srv::CheckStock_Response;
};

}  // namespace srv

}  // namespace smart_shop_interfaces

#endif  // SMART_SHOP_INTERFACES__SRV__DETAIL__CHECK_STOCK__STRUCT_HPP_
