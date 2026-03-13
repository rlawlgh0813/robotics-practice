// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smart_shop_interfaces:srv/CheckStock.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__SRV__DETAIL__CHECK_STOCK__TRAITS_HPP_
#define SMART_SHOP_INTERFACES__SRV__DETAIL__CHECK_STOCK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smart_shop_interfaces/srv/detail/check_stock__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace smart_shop_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckStock_Request & msg,
  std::ostream & out)
{
  out << "{";
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckStock_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckStock_Request & msg, bool use_flow_style = false)
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
  const smart_shop_interfaces::srv::CheckStock_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  smart_shop_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smart_shop_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const smart_shop_interfaces::srv::CheckStock_Request & msg)
{
  return smart_shop_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<smart_shop_interfaces::srv::CheckStock_Request>()
{
  return "smart_shop_interfaces::srv::CheckStock_Request";
}

template<>
inline const char * name<smart_shop_interfaces::srv::CheckStock_Request>()
{
  return "smart_shop_interfaces/srv/CheckStock_Request";
}

template<>
struct has_fixed_size<smart_shop_interfaces::srv::CheckStock_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smart_shop_interfaces::srv::CheckStock_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smart_shop_interfaces::srv::CheckStock_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace smart_shop_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckStock_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: available
  {
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
    out << ", ";
  }

  // member: remaining
  {
    out << "remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining, out);
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
  const CheckStock_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
    out << "\n";
  }

  // member: remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining, out);
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

inline std::string to_yaml(const CheckStock_Response & msg, bool use_flow_style = false)
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
  const smart_shop_interfaces::srv::CheckStock_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  smart_shop_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smart_shop_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const smart_shop_interfaces::srv::CheckStock_Response & msg)
{
  return smart_shop_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<smart_shop_interfaces::srv::CheckStock_Response>()
{
  return "smart_shop_interfaces::srv::CheckStock_Response";
}

template<>
inline const char * name<smart_shop_interfaces::srv::CheckStock_Response>()
{
  return "smart_shop_interfaces/srv/CheckStock_Response";
}

template<>
struct has_fixed_size<smart_shop_interfaces::srv::CheckStock_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smart_shop_interfaces::srv::CheckStock_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smart_shop_interfaces::srv::CheckStock_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<smart_shop_interfaces::srv::CheckStock>()
{
  return "smart_shop_interfaces::srv::CheckStock";
}

template<>
inline const char * name<smart_shop_interfaces::srv::CheckStock>()
{
  return "smart_shop_interfaces/srv/CheckStock";
}

template<>
struct has_fixed_size<smart_shop_interfaces::srv::CheckStock>
  : std::integral_constant<
    bool,
    has_fixed_size<smart_shop_interfaces::srv::CheckStock_Request>::value &&
    has_fixed_size<smart_shop_interfaces::srv::CheckStock_Response>::value
  >
{
};

template<>
struct has_bounded_size<smart_shop_interfaces::srv::CheckStock>
  : std::integral_constant<
    bool,
    has_bounded_size<smart_shop_interfaces::srv::CheckStock_Request>::value &&
    has_bounded_size<smart_shop_interfaces::srv::CheckStock_Response>::value
  >
{
};

template<>
struct is_service<smart_shop_interfaces::srv::CheckStock>
  : std::true_type
{
};

template<>
struct is_service_request<smart_shop_interfaces::srv::CheckStock_Request>
  : std::true_type
{
};

template<>
struct is_service_response<smart_shop_interfaces::srv::CheckStock_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SMART_SHOP_INTERFACES__SRV__DETAIL__CHECK_STOCK__TRAITS_HPP_
