// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smart_shop_interfaces:srv/DiscountApply.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__SRV__DETAIL__DISCOUNT_APPLY__BUILDER_HPP_
#define SMART_SHOP_INTERFACES__SRV__DETAIL__DISCOUNT_APPLY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smart_shop_interfaces/srv/detail/discount_apply__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smart_shop_interfaces
{

namespace srv
{

namespace builder
{

class Init_DiscountApply_Request_original_amount
{
public:
  explicit Init_DiscountApply_Request_original_amount(::smart_shop_interfaces::srv::DiscountApply_Request & msg)
  : msg_(msg)
  {}
  ::smart_shop_interfaces::srv::DiscountApply_Request original_amount(::smart_shop_interfaces::srv::DiscountApply_Request::_original_amount_type arg)
  {
    msg_.original_amount = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smart_shop_interfaces::srv::DiscountApply_Request msg_;
};

class Init_DiscountApply_Request_item_id
{
public:
  Init_DiscountApply_Request_item_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiscountApply_Request_original_amount item_id(::smart_shop_interfaces::srv::DiscountApply_Request::_item_id_type arg)
  {
    msg_.item_id = std::move(arg);
    return Init_DiscountApply_Request_original_amount(msg_);
  }

private:
  ::smart_shop_interfaces::srv::DiscountApply_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::smart_shop_interfaces::srv::DiscountApply_Request>()
{
  return smart_shop_interfaces::srv::builder::Init_DiscountApply_Request_item_id();
}

}  // namespace smart_shop_interfaces


namespace smart_shop_interfaces
{

namespace srv
{

namespace builder
{

class Init_DiscountApply_Response_reason
{
public:
  explicit Init_DiscountApply_Response_reason(::smart_shop_interfaces::srv::DiscountApply_Response & msg)
  : msg_(msg)
  {}
  ::smart_shop_interfaces::srv::DiscountApply_Response reason(::smart_shop_interfaces::srv::DiscountApply_Response::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smart_shop_interfaces::srv::DiscountApply_Response msg_;
};

class Init_DiscountApply_Response_discount_rate
{
public:
  explicit Init_DiscountApply_Response_discount_rate(::smart_shop_interfaces::srv::DiscountApply_Response & msg)
  : msg_(msg)
  {}
  Init_DiscountApply_Response_reason discount_rate(::smart_shop_interfaces::srv::DiscountApply_Response::_discount_rate_type arg)
  {
    msg_.discount_rate = std::move(arg);
    return Init_DiscountApply_Response_reason(msg_);
  }

private:
  ::smart_shop_interfaces::srv::DiscountApply_Response msg_;
};

class Init_DiscountApply_Response_discounted_amount
{
public:
  Init_DiscountApply_Response_discounted_amount()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiscountApply_Response_discount_rate discounted_amount(::smart_shop_interfaces::srv::DiscountApply_Response::_discounted_amount_type arg)
  {
    msg_.discounted_amount = std::move(arg);
    return Init_DiscountApply_Response_discount_rate(msg_);
  }

private:
  ::smart_shop_interfaces::srv::DiscountApply_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::smart_shop_interfaces::srv::DiscountApply_Response>()
{
  return smart_shop_interfaces::srv::builder::Init_DiscountApply_Response_discounted_amount();
}

}  // namespace smart_shop_interfaces

#endif  // SMART_SHOP_INTERFACES__SRV__DETAIL__DISCOUNT_APPLY__BUILDER_HPP_
