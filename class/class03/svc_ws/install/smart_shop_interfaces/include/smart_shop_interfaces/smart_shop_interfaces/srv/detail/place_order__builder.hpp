// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smart_shop_interfaces:srv/PlaceOrder.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__SRV__DETAIL__PLACE_ORDER__BUILDER_HPP_
#define SMART_SHOP_INTERFACES__SRV__DETAIL__PLACE_ORDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smart_shop_interfaces/srv/detail/place_order__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smart_shop_interfaces
{

namespace srv
{

namespace builder
{

class Init_PlaceOrder_Request_currency
{
public:
  explicit Init_PlaceOrder_Request_currency(::smart_shop_interfaces::srv::PlaceOrder_Request & msg)
  : msg_(msg)
  {}
  ::smart_shop_interfaces::srv::PlaceOrder_Request currency(::smart_shop_interfaces::srv::PlaceOrder_Request::_currency_type arg)
  {
    msg_.currency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smart_shop_interfaces::srv::PlaceOrder_Request msg_;
};

class Init_PlaceOrder_Request_amount
{
public:
  explicit Init_PlaceOrder_Request_amount(::smart_shop_interfaces::srv::PlaceOrder_Request & msg)
  : msg_(msg)
  {}
  Init_PlaceOrder_Request_currency amount(::smart_shop_interfaces::srv::PlaceOrder_Request::_amount_type arg)
  {
    msg_.amount = std::move(arg);
    return Init_PlaceOrder_Request_currency(msg_);
  }

private:
  ::smart_shop_interfaces::srv::PlaceOrder_Request msg_;
};

class Init_PlaceOrder_Request_quantity
{
public:
  explicit Init_PlaceOrder_Request_quantity(::smart_shop_interfaces::srv::PlaceOrder_Request & msg)
  : msg_(msg)
  {}
  Init_PlaceOrder_Request_amount quantity(::smart_shop_interfaces::srv::PlaceOrder_Request::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return Init_PlaceOrder_Request_amount(msg_);
  }

private:
  ::smart_shop_interfaces::srv::PlaceOrder_Request msg_;
};

class Init_PlaceOrder_Request_item_id
{
public:
  explicit Init_PlaceOrder_Request_item_id(::smart_shop_interfaces::srv::PlaceOrder_Request & msg)
  : msg_(msg)
  {}
  Init_PlaceOrder_Request_quantity item_id(::smart_shop_interfaces::srv::PlaceOrder_Request::_item_id_type arg)
  {
    msg_.item_id = std::move(arg);
    return Init_PlaceOrder_Request_quantity(msg_);
  }

private:
  ::smart_shop_interfaces::srv::PlaceOrder_Request msg_;
};

class Init_PlaceOrder_Request_order_id
{
public:
  Init_PlaceOrder_Request_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaceOrder_Request_item_id order_id(::smart_shop_interfaces::srv::PlaceOrder_Request::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return Init_PlaceOrder_Request_item_id(msg_);
  }

private:
  ::smart_shop_interfaces::srv::PlaceOrder_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::smart_shop_interfaces::srv::PlaceOrder_Request>()
{
  return smart_shop_interfaces::srv::builder::Init_PlaceOrder_Request_order_id();
}

}  // namespace smart_shop_interfaces


namespace smart_shop_interfaces
{

namespace srv
{

namespace builder
{

class Init_PlaceOrder_Response_payment_auth_code
{
public:
  explicit Init_PlaceOrder_Response_payment_auth_code(::smart_shop_interfaces::srv::PlaceOrder_Response & msg)
  : msg_(msg)
  {}
  ::smart_shop_interfaces::srv::PlaceOrder_Response payment_auth_code(::smart_shop_interfaces::srv::PlaceOrder_Response::_payment_auth_code_type arg)
  {
    msg_.payment_auth_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smart_shop_interfaces::srv::PlaceOrder_Response msg_;
};

class Init_PlaceOrder_Response_remaining_stock
{
public:
  explicit Init_PlaceOrder_Response_remaining_stock(::smart_shop_interfaces::srv::PlaceOrder_Response & msg)
  : msg_(msg)
  {}
  Init_PlaceOrder_Response_payment_auth_code remaining_stock(::smart_shop_interfaces::srv::PlaceOrder_Response::_remaining_stock_type arg)
  {
    msg_.remaining_stock = std::move(arg);
    return Init_PlaceOrder_Response_payment_auth_code(msg_);
  }

private:
  ::smart_shop_interfaces::srv::PlaceOrder_Response msg_;
};

class Init_PlaceOrder_Response_detail
{
public:
  explicit Init_PlaceOrder_Response_detail(::smart_shop_interfaces::srv::PlaceOrder_Response & msg)
  : msg_(msg)
  {}
  Init_PlaceOrder_Response_remaining_stock detail(::smart_shop_interfaces::srv::PlaceOrder_Response::_detail_type arg)
  {
    msg_.detail = std::move(arg);
    return Init_PlaceOrder_Response_remaining_stock(msg_);
  }

private:
  ::smart_shop_interfaces::srv::PlaceOrder_Response msg_;
};

class Init_PlaceOrder_Response_status
{
public:
  explicit Init_PlaceOrder_Response_status(::smart_shop_interfaces::srv::PlaceOrder_Response & msg)
  : msg_(msg)
  {}
  Init_PlaceOrder_Response_detail status(::smart_shop_interfaces::srv::PlaceOrder_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PlaceOrder_Response_detail(msg_);
  }

private:
  ::smart_shop_interfaces::srv::PlaceOrder_Response msg_;
};

class Init_PlaceOrder_Response_success
{
public:
  Init_PlaceOrder_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaceOrder_Response_status success(::smart_shop_interfaces::srv::PlaceOrder_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PlaceOrder_Response_status(msg_);
  }

private:
  ::smart_shop_interfaces::srv::PlaceOrder_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::smart_shop_interfaces::srv::PlaceOrder_Response>()
{
  return smart_shop_interfaces::srv::builder::Init_PlaceOrder_Response_success();
}

}  // namespace smart_shop_interfaces

#endif  // SMART_SHOP_INTERFACES__SRV__DETAIL__PLACE_ORDER__BUILDER_HPP_
