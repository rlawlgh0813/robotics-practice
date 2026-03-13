// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smart_shop_interfaces:msg/OrderLog.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__MSG__DETAIL__ORDER_LOG__BUILDER_HPP_
#define SMART_SHOP_INTERFACES__MSG__DETAIL__ORDER_LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smart_shop_interfaces/msg/detail/order_log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smart_shop_interfaces
{

namespace msg
{

namespace builder
{

class Init_OrderLog_timestamp
{
public:
  explicit Init_OrderLog_timestamp(::smart_shop_interfaces::msg::OrderLog & msg)
  : msg_(msg)
  {}
  ::smart_shop_interfaces::msg::OrderLog timestamp(::smart_shop_interfaces::msg::OrderLog::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smart_shop_interfaces::msg::OrderLog msg_;
};

class Init_OrderLog_detail
{
public:
  explicit Init_OrderLog_detail(::smart_shop_interfaces::msg::OrderLog & msg)
  : msg_(msg)
  {}
  Init_OrderLog_timestamp detail(::smart_shop_interfaces::msg::OrderLog::_detail_type arg)
  {
    msg_.detail = std::move(arg);
    return Init_OrderLog_timestamp(msg_);
  }

private:
  ::smart_shop_interfaces::msg::OrderLog msg_;
};

class Init_OrderLog_status
{
public:
  explicit Init_OrderLog_status(::smart_shop_interfaces::msg::OrderLog & msg)
  : msg_(msg)
  {}
  Init_OrderLog_detail status(::smart_shop_interfaces::msg::OrderLog::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_OrderLog_detail(msg_);
  }

private:
  ::smart_shop_interfaces::msg::OrderLog msg_;
};

class Init_OrderLog_success
{
public:
  explicit Init_OrderLog_success(::smart_shop_interfaces::msg::OrderLog & msg)
  : msg_(msg)
  {}
  Init_OrderLog_status success(::smart_shop_interfaces::msg::OrderLog::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_OrderLog_status(msg_);
  }

private:
  ::smart_shop_interfaces::msg::OrderLog msg_;
};

class Init_OrderLog_amount
{
public:
  explicit Init_OrderLog_amount(::smart_shop_interfaces::msg::OrderLog & msg)
  : msg_(msg)
  {}
  Init_OrderLog_success amount(::smart_shop_interfaces::msg::OrderLog::_amount_type arg)
  {
    msg_.amount = std::move(arg);
    return Init_OrderLog_success(msg_);
  }

private:
  ::smart_shop_interfaces::msg::OrderLog msg_;
};

class Init_OrderLog_quantity
{
public:
  explicit Init_OrderLog_quantity(::smart_shop_interfaces::msg::OrderLog & msg)
  : msg_(msg)
  {}
  Init_OrderLog_amount quantity(::smart_shop_interfaces::msg::OrderLog::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return Init_OrderLog_amount(msg_);
  }

private:
  ::smart_shop_interfaces::msg::OrderLog msg_;
};

class Init_OrderLog_item_id
{
public:
  explicit Init_OrderLog_item_id(::smart_shop_interfaces::msg::OrderLog & msg)
  : msg_(msg)
  {}
  Init_OrderLog_quantity item_id(::smart_shop_interfaces::msg::OrderLog::_item_id_type arg)
  {
    msg_.item_id = std::move(arg);
    return Init_OrderLog_quantity(msg_);
  }

private:
  ::smart_shop_interfaces::msg::OrderLog msg_;
};

class Init_OrderLog_order_id
{
public:
  Init_OrderLog_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrderLog_item_id order_id(::smart_shop_interfaces::msg::OrderLog::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return Init_OrderLog_item_id(msg_);
  }

private:
  ::smart_shop_interfaces::msg::OrderLog msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smart_shop_interfaces::msg::OrderLog>()
{
  return smart_shop_interfaces::msg::builder::Init_OrderLog_order_id();
}

}  // namespace smart_shop_interfaces

#endif  // SMART_SHOP_INTERFACES__MSG__DETAIL__ORDER_LOG__BUILDER_HPP_
