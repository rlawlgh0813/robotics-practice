// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smart_shop_interfaces:srv/AuthorizePayment.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__SRV__DETAIL__AUTHORIZE_PAYMENT__STRUCT_HPP_
#define SMART_SHOP_INTERFACES__SRV__DETAIL__AUTHORIZE_PAYMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__smart_shop_interfaces__srv__AuthorizePayment_Request __attribute__((deprecated))
#else
# define DEPRECATED__smart_shop_interfaces__srv__AuthorizePayment_Request __declspec(deprecated)
#endif

namespace smart_shop_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AuthorizePayment_Request_
{
  using Type = AuthorizePayment_Request_<ContainerAllocator>;

  explicit AuthorizePayment_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
      this->amount = 0l;
      this->currency = "";
    }
  }

  explicit AuthorizePayment_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : order_id(_alloc),
    currency(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
      this->amount = 0l;
      this->currency = "";
    }
  }

  // field types and members
  using _order_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _order_id_type order_id;
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
    smart_shop_interfaces::srv::AuthorizePayment_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const smart_shop_interfaces::srv::AuthorizePayment_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smart_shop_interfaces::srv::AuthorizePayment_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smart_shop_interfaces::srv::AuthorizePayment_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smart_shop_interfaces::srv::AuthorizePayment_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smart_shop_interfaces::srv::AuthorizePayment_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smart_shop_interfaces::srv::AuthorizePayment_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smart_shop_interfaces::srv::AuthorizePayment_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smart_shop_interfaces::srv::AuthorizePayment_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smart_shop_interfaces::srv::AuthorizePayment_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smart_shop_interfaces__srv__AuthorizePayment_Request
    std::shared_ptr<smart_shop_interfaces::srv::AuthorizePayment_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smart_shop_interfaces__srv__AuthorizePayment_Request
    std::shared_ptr<smart_shop_interfaces::srv::AuthorizePayment_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AuthorizePayment_Request_ & other) const
  {
    if (this->order_id != other.order_id) {
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
  bool operator!=(const AuthorizePayment_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AuthorizePayment_Request_

// alias to use template instance with default allocator
using AuthorizePayment_Request =
  smart_shop_interfaces::srv::AuthorizePayment_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace smart_shop_interfaces


#ifndef _WIN32
# define DEPRECATED__smart_shop_interfaces__srv__AuthorizePayment_Response __attribute__((deprecated))
#else
# define DEPRECATED__smart_shop_interfaces__srv__AuthorizePayment_Response __declspec(deprecated)
#endif

namespace smart_shop_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AuthorizePayment_Response_
{
  using Type = AuthorizePayment_Response_<ContainerAllocator>;

  explicit AuthorizePayment_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->approved = false;
      this->auth_code = "";
      this->reason = "";
    }
  }

  explicit AuthorizePayment_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : auth_code(_alloc),
    reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->approved = false;
      this->auth_code = "";
      this->reason = "";
    }
  }

  // field types and members
  using _approved_type =
    bool;
  _approved_type approved;
  using _auth_code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _auth_code_type auth_code;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

  // setters for named parameter idiom
  Type & set__approved(
    const bool & _arg)
  {
    this->approved = _arg;
    return *this;
  }
  Type & set__auth_code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->auth_code = _arg;
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
    smart_shop_interfaces::srv::AuthorizePayment_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const smart_shop_interfaces::srv::AuthorizePayment_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smart_shop_interfaces::srv::AuthorizePayment_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smart_shop_interfaces::srv::AuthorizePayment_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smart_shop_interfaces::srv::AuthorizePayment_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smart_shop_interfaces::srv::AuthorizePayment_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smart_shop_interfaces::srv::AuthorizePayment_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smart_shop_interfaces::srv::AuthorizePayment_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smart_shop_interfaces::srv::AuthorizePayment_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smart_shop_interfaces::srv::AuthorizePayment_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smart_shop_interfaces__srv__AuthorizePayment_Response
    std::shared_ptr<smart_shop_interfaces::srv::AuthorizePayment_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smart_shop_interfaces__srv__AuthorizePayment_Response
    std::shared_ptr<smart_shop_interfaces::srv::AuthorizePayment_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AuthorizePayment_Response_ & other) const
  {
    if (this->approved != other.approved) {
      return false;
    }
    if (this->auth_code != other.auth_code) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const AuthorizePayment_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AuthorizePayment_Response_

// alias to use template instance with default allocator
using AuthorizePayment_Response =
  smart_shop_interfaces::srv::AuthorizePayment_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace smart_shop_interfaces

namespace smart_shop_interfaces
{

namespace srv
{

struct AuthorizePayment
{
  using Request = smart_shop_interfaces::srv::AuthorizePayment_Request;
  using Response = smart_shop_interfaces::srv::AuthorizePayment_Response;
};

}  // namespace srv

}  // namespace smart_shop_interfaces

#endif  // SMART_SHOP_INTERFACES__SRV__DETAIL__AUTHORIZE_PAYMENT__STRUCT_HPP_
