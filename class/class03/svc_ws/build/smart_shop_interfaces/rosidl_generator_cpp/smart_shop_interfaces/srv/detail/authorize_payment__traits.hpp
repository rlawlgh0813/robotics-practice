// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smart_shop_interfaces:srv/AuthorizePayment.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__SRV__DETAIL__AUTHORIZE_PAYMENT__TRAITS_HPP_
#define SMART_SHOP_INTERFACES__SRV__DETAIL__AUTHORIZE_PAYMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smart_shop_interfaces/srv/detail/authorize_payment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace smart_shop_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AuthorizePayment_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: order_id
  {
    out << "order_id: ";
    rosidl_generator_traits::value_to_yaml(msg.order_id, out);
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
  const AuthorizePayment_Request & msg,
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

inline std::string to_yaml(const AuthorizePayment_Request & msg, bool use_flow_style = false)
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
  const smart_shop_interfaces::srv::AuthorizePayment_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  smart_shop_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smart_shop_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const smart_shop_interfaces::srv::AuthorizePayment_Request & msg)
{
  return smart_shop_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<smart_shop_interfaces::srv::AuthorizePayment_Request>()
{
  return "smart_shop_interfaces::srv::AuthorizePayment_Request";
}

template<>
inline const char * name<smart_shop_interfaces::srv::AuthorizePayment_Request>()
{
  return "smart_shop_interfaces/srv/AuthorizePayment_Request";
}

template<>
struct has_fixed_size<smart_shop_interfaces::srv::AuthorizePayment_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smart_shop_interfaces::srv::AuthorizePayment_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smart_shop_interfaces::srv::AuthorizePayment_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace smart_shop_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const AuthorizePayment_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: approved
  {
    out << "approved: ";
    rosidl_generator_traits::value_to_yaml(msg.approved, out);
    out << ", ";
  }

  // member: auth_code
  {
    out << "auth_code: ";
    rosidl_generator_traits::value_to_yaml(msg.auth_code, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AuthorizePayment_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: approved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "approved: ";
    rosidl_generator_traits::value_to_yaml(msg.approved, out);
    out << "\n";
  }

  // member: auth_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auth_code: ";
    rosidl_generator_traits::value_to_yaml(msg.auth_code, out);
    out << "\n";
  }

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AuthorizePayment_Response & msg, bool use_flow_style = false)
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
  const smart_shop_interfaces::srv::AuthorizePayment_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  smart_shop_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smart_shop_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const smart_shop_interfaces::srv::AuthorizePayment_Response & msg)
{
  return smart_shop_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<smart_shop_interfaces::srv::AuthorizePayment_Response>()
{
  return "smart_shop_interfaces::srv::AuthorizePayment_Response";
}

template<>
inline const char * name<smart_shop_interfaces::srv::AuthorizePayment_Response>()
{
  return "smart_shop_interfaces/srv/AuthorizePayment_Response";
}

template<>
struct has_fixed_size<smart_shop_interfaces::srv::AuthorizePayment_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smart_shop_interfaces::srv::AuthorizePayment_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smart_shop_interfaces::srv::AuthorizePayment_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<smart_shop_interfaces::srv::AuthorizePayment>()
{
  return "smart_shop_interfaces::srv::AuthorizePayment";
}

template<>
inline const char * name<smart_shop_interfaces::srv::AuthorizePayment>()
{
  return "smart_shop_interfaces/srv/AuthorizePayment";
}

template<>
struct has_fixed_size<smart_shop_interfaces::srv::AuthorizePayment>
  : std::integral_constant<
    bool,
    has_fixed_size<smart_shop_interfaces::srv::AuthorizePayment_Request>::value &&
    has_fixed_size<smart_shop_interfaces::srv::AuthorizePayment_Response>::value
  >
{
};

template<>
struct has_bounded_size<smart_shop_interfaces::srv::AuthorizePayment>
  : std::integral_constant<
    bool,
    has_bounded_size<smart_shop_interfaces::srv::AuthorizePayment_Request>::value &&
    has_bounded_size<smart_shop_interfaces::srv::AuthorizePayment_Response>::value
  >
{
};

template<>
struct is_service<smart_shop_interfaces::srv::AuthorizePayment>
  : std::true_type
{
};

template<>
struct is_service_request<smart_shop_interfaces::srv::AuthorizePayment_Request>
  : std::true_type
{
};

template<>
struct is_service_response<smart_shop_interfaces::srv::AuthorizePayment_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SMART_SHOP_INTERFACES__SRV__DETAIL__AUTHORIZE_PAYMENT__TRAITS_HPP_
