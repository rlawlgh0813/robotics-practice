// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smart_shop_interfaces:srv/PlaceOrder.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__SRV__DETAIL__PLACE_ORDER__STRUCT_HPP_
#define SMART_SHOP_INTERFACES__SRV__DETAIL__PLACE_ORDER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__smart_shop_interfaces__srv__PlaceOrder_Request __attribute__((deprecated))
#else
# define DEPRECATED__smart_shop_interfaces__srv__PlaceOrder_Request __declspec(deprecated)
#endif

namespace smart_shop_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlaceOrder_Request_
{
  using Type = PlaceOrder_Request_<ContainerAllocator>;

  explicit PlaceOrder_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
      this->item_id = "";
      this->quantity = 0l;
      this->amount = 0l;
      this->currency = "";
    }
  }

  explicit PlaceOrder_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : order_id(_alloc),
    item_id(_alloc),
    currency(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
      this->item_id = "";
      this->quantity = 0l;
      this->amount = 0l;
      this->currency = "";
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
  using _currency_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _currency_type currency;

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
  Type & set__currency(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->currency = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smart_shop_interfaces::srv::PlaceOrder_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const smart_shop_interfaces::srv::PlaceOrder_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smart_shop_interfaces::srv::PlaceOrder_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smart_shop_interfaces::srv::PlaceOrder_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smart_shop_interfaces::srv::PlaceOrder_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smart_shop_interfaces::srv::PlaceOrder_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smart_shop_interfaces::srv::PlaceOrder_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smart_shop_interfaces::srv::PlaceOrder_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smart_shop_interfaces::srv::PlaceOrder_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smart_shop_interfaces::srv::PlaceOrder_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smart_shop_interfaces__srv__PlaceOrder_Request
    std::shared_ptr<smart_shop_interfaces::srv::PlaceOrder_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smart_shop_interfaces__srv__PlaceOrder_Request
    std::shared_ptr<smart_shop_interfaces::srv::PlaceOrder_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlaceOrder_Request_ & other) const
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
    if (this->currency != other.currency) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlaceOrder_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlaceOrder_Request_

// alias to use template instance with default allocator
using PlaceOrder_Request =
  smart_shop_interfaces::srv::PlaceOrder_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace smart_shop_interfaces


#ifndef _WIN32
# define DEPRECATED__smart_shop_interfaces__srv__PlaceOrder_Response __attribute__((deprecated))
#else
# define DEPRECATED__smart_shop_interfaces__srv__PlaceOrder_Response __declspec(deprecated)
#endif

namespace smart_shop_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlaceOrder_Response_
{
  using Type = PlaceOrder_Response_<ContainerAllocator>;

  explicit PlaceOrder_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status = "";
      this->detail = "";
      this->remaining_stock = 0l;
      this->payment_auth_code = "";
    }
  }

  explicit PlaceOrder_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc),
    detail(_alloc),
    payment_auth_code(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status = "";
      this->detail = "";
      this->remaining_stock = 0l;
      this->payment_auth_code = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _detail_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _detail_type detail;
  using _remaining_stock_type =
    int32_t;
  _remaining_stock_type remaining_stock;
  using _payment_auth_code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _payment_auth_code_type payment_auth_code;

  // setters for named parameter idiom
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
  Type & set__remaining_stock(
    const int32_t & _arg)
  {
    this->remaining_stock = _arg;
    return *this;
  }
  Type & set__payment_auth_code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->payment_auth_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smart_shop_interfaces::srv::PlaceOrder_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const smart_shop_interfaces::srv::PlaceOrder_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smart_shop_interfaces::srv::PlaceOrder_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smart_shop_interfaces::srv::PlaceOrder_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smart_shop_interfaces::srv::PlaceOrder_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smart_shop_interfaces::srv::PlaceOrder_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smart_shop_interfaces::srv::PlaceOrder_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smart_shop_interfaces::srv::PlaceOrder_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smart_shop_interfaces::srv::PlaceOrder_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smart_shop_interfaces::srv::PlaceOrder_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smart_shop_interfaces__srv__PlaceOrder_Response
    std::shared_ptr<smart_shop_interfaces::srv::PlaceOrder_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smart_shop_interfaces__srv__PlaceOrder_Response
    std::shared_ptr<smart_shop_interfaces::srv::PlaceOrder_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlaceOrder_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->detail != other.detail) {
      return false;
    }
    if (this->remaining_stock != other.remaining_stock) {
      return false;
    }
    if (this->payment_auth_code != other.payment_auth_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlaceOrder_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlaceOrder_Response_

// alias to use template instance with default allocator
using PlaceOrder_Response =
  smart_shop_interfaces::srv::PlaceOrder_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace smart_shop_interfaces

namespace smart_shop_interfaces
{

namespace srv
{

struct PlaceOrder
{
  using Request = smart_shop_interfaces::srv::PlaceOrder_Request;
  using Response = smart_shop_interfaces::srv::PlaceOrder_Response;
};

}  // namespace srv

}  // namespace smart_shop_interfaces

#endif  // SMART_SHOP_INTERFACES__SRV__DETAIL__PLACE_ORDER__STRUCT_HPP_
