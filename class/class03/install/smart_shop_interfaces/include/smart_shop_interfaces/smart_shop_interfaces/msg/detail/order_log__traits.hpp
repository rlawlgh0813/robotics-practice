// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smart_shop_interfaces:msg/OrderLog.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__MSG__DETAIL__ORDER_LOG__TRAITS_HPP_
#define SMART_SHOP_INTERFACES__MSG__DETAIL__ORDER_LOG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smart_shop_interfaces/msg/detail/order_log__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace smart_shop_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const OrderLog & msg,
  std::ostream & out)
{
  out << "{";
  // member: order_id
  {
    out << "order_id: ";
    rosidl_generator_traits::value_to_yaml(msg.order_id, out);
    out << ", ";
  }

  // member: item_id
  {
    out << "item_id: ";
    rosidl_generator_traits::value_to_yaml(msg.item_id, out);
    out << ", ";
  }

  // member: quantity
  {
    out << "quantity: ";
    rosidl_generator_traits::value_to_yaml(msg.quantity, out);
    out << ", ";
  }

  // member: amount
  {
    out << "amount: ";
    rosidl_generator_traits::value_to_yaml(msg.amount, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: detail
  {
    out << "detail: ";
    rosidl_generator_traits::value_to_yaml(msg.detail, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OrderLog & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: order_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "order_id: ";
    rosidl_generator_traits::value_to_yaml(msg.order_id, out);
    out << "\n";
  }

  // member: item_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_id: ";
    rosidl_generator_traits::value_to_yaml(msg.item_id, out);
    out << "\n";
  }

  // member: quantity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quantity: ";
    rosidl_generator_traits::value_to_yaml(msg.quantity, out);
    out << "\n";
  }

  // member: amount
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "amount: ";
    rosidl_generator_traits::value_to_yaml(msg.amount, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: detail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detail: ";
    rosidl_generator_traits::value_to_yaml(msg.detail, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OrderLog & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace smart_shop_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use smart_shop_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smart_shop_interfaces::msg::OrderLog & msg,
  std::ostream & out, size_t indentation = 0)
{
  smart_shop_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smart_shop_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const smart_shop_interfaces::msg::OrderLog & msg)
{
  return smart_shop_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<smart_shop_interfaces::msg::OrderLog>()
{
  return "smart_shop_interfaces::msg::OrderLog";
}

template<>
inline const char * name<smart_shop_interfaces::msg::OrderLog>()
{
  return "smart_shop_interfaces/msg/OrderLog";
}

template<>
struct has_fixed_size<smart_shop_interfaces::msg::OrderLog>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smart_shop_interfaces::msg::OrderLog>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smart_shop_interfaces::msg::OrderLog>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMART_SHOP_INTERFACES__MSG__DETAIL__ORDER_LOG__TRAITS_HPP_
