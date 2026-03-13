// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smart_shop_interfaces:msg/OrderLog.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__MSG__DETAIL__ORDER_LOG__STRUCT_HPP_
#define SMART_SHOP_INTERFACES__MSG__DETAIL__ORDER_LOG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__smart_shop_interfaces__msg__OrderLog __attribute__((deprecated))
#else
# define DEPRECATED__smart_shop_interfaces__msg__OrderLog __declspec(deprecated)
#endif

namespace smart_shop_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OrderLog_
{
  using Type = OrderLog_<ContainerAllocator>;

  explicit OrderLog_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
      this->item_id = "";
      this->quantity = 0l;
      this->amount = 0l;
      this->success = false;
      this->status = "";
      this->detail = "";
      this->timestamp = "";
    }
  }

  explicit OrderLog_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : order_id(_alloc),
    item_id(_alloc),
    status(_alloc),
    detail(_alloc),
    timestamp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
      this->item_id = "";
      this->quantity = 0l;
      this->amount = 0l;
      this->success = false;
      this->status = "";
      this->detail = "";
      this->timestamp = "";
    }
  }

  // field types and members
  using _order_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _order_id_type order_id;
  using _item_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _item_id_type item_id;
  using _quantity_type =
    int32_t;
  _quantity_type quantity;
  using _amount_type =
    int32_t;
  _amount_type amount;
  using _success_type =
    bool;
  _success_type success;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _detail_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _detail_type detail;
  using _timestamp_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__order_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->order_id = _arg;
    return *this;
  }
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
  Type & set__amount(
    const int32_t & _arg)
  {
    this->amount = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__detail(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->detail = _arg;
    return *this;
  }
  Type & set__timestamp(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smart_shop_interfaces::msg::OrderLog_<ContainerAllocator> *;
  using ConstRawPtr =
    const smart_shop_interfaces::msg::OrderLog_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smart_shop_interfaces::msg::OrderLog_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smart_shop_interfaces::msg::OrderLog_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smart_shop_interfaces::msg::OrderLog_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smart_shop_interfaces::msg::OrderLog_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smart_shop_interfaces::msg::OrderLog_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smart_shop_interfaces::msg::OrderLog_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smart_shop_interfaces::msg::OrderLog_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smart_shop_interfaces::msg::OrderLog_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smart_shop_interfaces__msg__OrderLog
    std::shared_ptr<smart_shop_interfaces::msg::OrderLog_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smart_shop_interfaces__msg__OrderLog
    std::shared_ptr<smart_shop_interfaces::msg::OrderLog_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OrderLog_ & other) const
  {
    if (this->order_id != other.order_id) {
      return false;
    }
    if (this->item_id != other.item_id) {
      return false;
    }
    if (this->quantity != other.quantity) {
      return false;
    }
    if (this->amount != other.amount) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->detail != other.detail) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const OrderLog_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OrderLog_

// alias to use template instance with default allocator
using OrderLog =
  smart_shop_interfaces::msg::OrderLog_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace smart_shop_interfaces

#endif  // SMART_SHOP_INTERFACES__MSG__DETAIL__ORDER_LOG__STRUCT_HPP_
