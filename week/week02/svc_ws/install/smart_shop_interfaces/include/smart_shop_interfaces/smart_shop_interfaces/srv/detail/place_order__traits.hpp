// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smart_shop_interfaces:srv/PlaceOrder.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__SRV__DETAIL__PLACE_ORDER__TRAITS_HPP_
#define SMART_SHOP_INTERFACES__SRV__DETAIL__PLACE_ORDER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smart_shop_interfaces/srv/detail/place_order__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace smart_shop_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlaceOrder_Request & msg,
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

  // member: currency
  {
    out << "currency: ";
    rosidl_generator_traits::value_to_yaml(msg.currency, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlaceOrder_Request & msg,
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

  // member: currency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "currency: ";
    rosidl_generator_traits::value_to_yaml(msg.currency, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlaceOrder_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace smart_shop_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use smart_shop_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smart_shop_interfaces::srv::PlaceOrder_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  smart_shop_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smart_shop_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const smart_shop_interfaces::srv::PlaceOrder_Request & msg)
{
  return smart_shop_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<smart_shop_interfaces::srv::PlaceOrder_Request>()
{
  return "smart_shop_interfaces::srv::PlaceOrder_Request";
}

template<>
inline const char * name<smart_shop_interfaces::srv::PlaceOrder_Request>()
{
  return "smart_shop_interfaces/srv/PlaceOrder_Request";
}

template<>
struct has_fixed_size<smart_shop_interfaces::srv::PlaceOrder_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smart_shop_interfaces::srv::PlaceOrder_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smart_shop_interfaces::srv::PlaceOrder_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace smart_shop_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlaceOrder_Response & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: remaining_stock
  {
    out << "remaining_stock: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_stock, out);
    out << ", ";
  }

  // member: payment_auth_code
  {
    out << "payment_auth_code: ";
    rosidl_generator_traits::value_to_yaml(msg.payment_auth_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlaceOrder_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: remaining_stock
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_stock: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_stock, out);
    out << "\n";
  }

  // member: payment_auth_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payment_auth_code: ";
    rosidl_generator_traits::value_to_yaml(msg.payment_auth_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlaceOrder_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace smart_shop_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use smart_shop_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smart_shop_interfaces::srv::PlaceOrder_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  smart_shop_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smart_shop_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const smart_shop_interfaces::srv::PlaceOrder_Response & msg)
{
  return smart_shop_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<smart_shop_interfaces::srv::PlaceOrder_Response>()
{
  return "smart_shop_interfaces::srv::PlaceOrder_Response";
}

template<>
inline const char * name<smart_shop_interfaces::srv::PlaceOrder_Response>()
{
  return "smart_shop_interfaces/srv/PlaceOrder_Response";
}

template<>
struct has_fixed_size<smart_shop_interfaces::srv::PlaceOrder_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smart_shop_interfaces::srv::PlaceOrder_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smart_shop_interfaces::srv::PlaceOrder_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<smart_shop_interfaces::srv::PlaceOrder>()
{
  return "smart_shop_interfaces::srv::PlaceOrder";
}

template<>
inline const char * name<smart_shop_interfaces::srv::PlaceOrder>()
{
  return "smart_shop_interfaces/srv/PlaceOrder";
}

template<>
struct has_fixed_size<smart_shop_interfaces::srv::PlaceOrder>
  : std::integral_constant<
    bool,
    has_fixed_size<smart_shop_interfaces::srv::PlaceOrder_Request>::value &&
    has_fixed_size<smart_shop_interfaces::srv::PlaceOrder_Response>::value
  >
{
};

template<>
struct has_bounded_size<smart_shop_interfaces::srv::PlaceOrder>
  : std::integral_constant<
    bool,
    has_bounded_size<smart_shop_interfaces::srv::PlaceOrder_Request>::value &&
    has_bounded_size<smart_shop_interfaces::srv::PlaceOrder_Response>::value
  >
{
};

template<>
struct is_service<smart_shop_interfaces::srv::PlaceOrder>
  : std::true_type
{
};

template<>
struct is_service_request<smart_shop_interfaces::srv::PlaceOrder_Request>
  : std::true_type
{
};

template<>
struct is_service_response<smart_shop_interfaces::srv::PlaceOrder_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SMART_SHOP_INTERFACES__SRV__DETAIL__PLACE_ORDER__TRAITS_HPP_
