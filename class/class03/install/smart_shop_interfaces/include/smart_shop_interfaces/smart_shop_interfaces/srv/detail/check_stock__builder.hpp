// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smart_shop_interfaces:srv/CheckStock.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__SRV__DETAIL__CHECK_STOCK__BUILDER_HPP_
#define SMART_SHOP_INTERFACES__SRV__DETAIL__CHECK_STOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smart_shop_interfaces/srv/detail/check_stock__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smart_shop_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckStock_Request_quantity
{
public:
  explicit Init_CheckStock_Request_quantity(::smart_shop_interfaces::srv::CheckStock_Request & msg)
  : msg_(msg)
  {}
  ::smart_shop_interfaces::srv::CheckStock_Request quantity(::smart_shop_interfaces::srv::CheckStock_Request::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smart_shop_interfaces::srv::CheckStock_Request msg_;
};

class Init_CheckStock_Request_item_id
{
public:
  Init_CheckStock_Request_item_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckStock_Request_quantity item_id(::smart_shop_interfaces::srv::CheckStock_Request::_item_id_type arg)
  {
    msg_.item_id = std::move(arg);
    return Init_CheckStock_Request_quantity(msg_);
  }

private:
  ::smart_shop_interfaces::srv::CheckStock_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::smart_shop_interfaces::srv::CheckStock_Request>()
{
  return smart_shop_interfaces::srv::builder::Init_CheckStock_Request_item_id();
}

}  // namespace smart_shop_interfaces


namespace smart_shop_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckStock_Response_reason
{
public:
  explicit Init_CheckStock_Response_reason(::smart_shop_interfaces::srv::CheckStock_Response & msg)
  : msg_(msg)
  {}
  ::smart_shop_interfaces::srv::CheckStock_Response reason(::smart_shop_interfaces::srv::CheckStock_Response::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smart_shop_interfaces::srv::CheckStock_Response msg_;
};

class Init_CheckStock_Response_remaining
{
public:
  explicit Init_CheckStock_Response_remaining(::smart_shop_interfaces::srv::CheckStock_Response & msg)
  : msg_(msg)
  {}
  Init_CheckStock_Response_reason remaining(::smart_shop_interfaces::srv::CheckStock_Response::_remaining_type arg)
  {
    msg_.remaining = std::move(arg);
    return Init_CheckStock_Response_reason(msg_);
  }

private:
  ::smart_shop_interfaces::srv::CheckStock_Response msg_;
};

class Init_CheckStock_Response_available
{
public:
  Init_CheckStock_Response_available()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckStock_Response_remaining available(::smart_shop_interfaces::srv::CheckStock_Response::_available_type arg)
  {
    msg_.available = std::move(arg);
    return Init_CheckStock_Response_remaining(msg_);
  }

private:
  ::smart_shop_interfaces::srv::CheckStock_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::smart_shop_interfaces::srv::CheckStock_Response>()
{
  return smart_shop_interfaces::srv::builder::Init_CheckStock_Response_available();
}

}  // namespace smart_shop_interfaces

#endif  // SMART_SHOP_INTERFACES__SRV__DETAIL__CHECK_STOCK__BUILDER_HPP_
