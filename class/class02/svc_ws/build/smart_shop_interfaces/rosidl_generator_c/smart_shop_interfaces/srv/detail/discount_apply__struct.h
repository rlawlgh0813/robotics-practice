// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smart_shop_interfaces:srv/DiscountApply.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__SRV__DETAIL__DISCOUNT_APPLY__STRUCT_H_
#define SMART_SHOP_INTERFACES__SRV__DETAIL__DISCOUNT_APPLY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'item_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DiscountApply in the package smart_shop_interfaces.
typedef struct smart_shop_interfaces__srv__DiscountApply_Request
{
  rosidl_runtime_c__String item_id;
  int32_t original_amount;
} smart_shop_interfaces__srv__DiscountApply_Request;

// Struct for a sequence of smart_shop_interfaces__srv__DiscountApply_Request.
typedef struct smart_shop_interfaces__srv__DiscountApply_Request__Sequence
{
  smart_shop_interfaces__srv__DiscountApply_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smart_shop_interfaces__srv__DiscountApply_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'reason'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DiscountApply in the package smart_shop_interfaces.
typedef struct smart_shop_interfaces__srv__DiscountApply_Response
{
  int32_t discounted_amount;
  int32_t discount_rate;
  rosidl_runtime_c__String reason;
} smart_shop_interfaces__srv__DiscountApply_Response;

// Struct for a sequence of smart_shop_interfaces__srv__DiscountApply_Response.
typedef struct smart_shop_interfaces__srv__DiscountApply_Response__Sequence
{
  smart_shop_interfaces__srv__DiscountApply_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smart_shop_interfaces__srv__DiscountApply_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMART_SHOP_INTERFACES__SRV__DETAIL__DISCOUNT_APPLY__STRUCT_H_
