// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smart_shop_interfaces:srv/AuthorizePayment.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__SRV__DETAIL__AUTHORIZE_PAYMENT__BUILDER_HPP_
#define SMART_SHOP_INTERFACES__SRV__DETAIL__AUTHORIZE_PAYMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smart_shop_interfaces/srv/detail/authorize_payment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smart_shop_interfaces
{

namespace srv
{

namespace builder
{

class Init_AuthorizePayment_Request_currency
{
public:
  explicit Init_AuthorizePayment_Request_currency(::smart_shop_interfaces::srv::AuthorizePayment_Request & msg)
  : msg_(msg)
  {}
  ::smart_shop_interfaces::srv::AuthorizePayment_Request currency(::smart_shop_interfaces::srv::AuthorizePayment_Request::_currency_type arg)
  {
    msg_.currency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smart_shop_interfaces::srv::AuthorizePayment_Request msg_;
};

class Init_AuthorizePayment_Request_amount
{
public:
  explicit Init_AuthorizePayment_Request_amount(::smart_shop_interfaces::srv::AuthorizePayment_Request & msg)
  : msg_(msg)
  {}
  Init_AuthorizePayment_Request_currency amount(::smart_shop_interfaces::srv::AuthorizePayment_Request::_amount_type arg)
  {
    msg_.amount = std::move(arg);
    return Init_AuthorizePayment_Request_currency(msg_);
  }

private:
  ::smart_shop_interfaces::srv::AuthorizePayment_Request msg_;
};

class Init_AuthorizePayment_Request_order_id
{
public:
  Init_AuthorizePayment_Request_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuthorizePayment_Request_amount order_id(::smart_shop_interfaces::srv::AuthorizePayment_Request::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return Init_AuthorizePayment_Request_amount(msg_);
  }

private:
  ::smart_shop_interfaces::srv::AuthorizePayment_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::smart_shop_interfaces::srv::AuthorizePayment_Request>()
{
  return smart_shop_interfaces::srv::builder::Init_AuthorizePayment_Request_order_id();
}

}  // namespace smart_shop_interfaces


namespace smart_shop_interfaces
{

namespace srv
{

namespace builder
{

class Init_AuthorizePayment_Response_reason
{
public:
  explicit Init_AuthorizePayment_Response_reason(::smart_shop_interfaces::srv::AuthorizePayment_Response & msg)
  : msg_(msg)
  {}
  ::smart_shop_interfaces::srv::AuthorizePayment_Response reason(::smart_shop_interfaces::srv::AuthorizePayment_Response::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smart_shop_interfaces::srv::AuthorizePayment_Response msg_;
};

class Init_AuthorizePayment_Response_auth_code
{
public:
  explicit Init_AuthorizePayment_Response_auth_code(::smart_shop_interfaces::srv::AuthorizePayment_Response & msg)
  : msg_(msg)
  {}
  Init_AuthorizePayment_Response_reason auth_code(::smart_shop_interfaces::srv::AuthorizePayment_Response::_auth_code_type arg)
  {
    msg_.auth_code = std::move(arg);
    return Init_AuthorizePayment_Response_reason(msg_);
  }

private:
  ::smart_shop_interfaces::srv::AuthorizePayment_Response msg_;
};

class Init_AuthorizePayment_Response_approved
{
public:
  Init_AuthorizePayment_Response_approved()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AuthorizePayment_Response_auth_code approved(::smart_shop_interfaces::srv::AuthorizePayment_Response::_approved_type arg)
  {
    msg_.approved = std::move(arg);
    return Init_AuthorizePayment_Response_auth_code(msg_);
  }

private:
  ::smart_shop_interfaces::srv::AuthorizePayment_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::smart_shop_interfaces::srv::AuthorizePayment_Response>()
{
  return smart_shop_interfaces::srv::builder::Init_AuthorizePayment_Response_approved();
}

}  // namespace smart_shop_interfaces

#endif  // SMART_SHOP_INTERFACES__SRV__DETAIL__AUTHORIZE_PAYMENT__BUILDER_HPP_
