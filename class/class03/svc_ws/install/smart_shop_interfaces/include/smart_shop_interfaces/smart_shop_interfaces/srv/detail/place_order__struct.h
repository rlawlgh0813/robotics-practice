// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smart_shop_interfaces:srv/PlaceOrder.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__SRV__DETAIL__PLACE_ORDER__STRUCT_H_
#define SMART_SHOP_INTERFACES__SRV__DETAIL__PLACE_ORDER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'order_id'
// Member 'item_id'
// Member 'currency'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlaceOrder in the package smart_shop_interfaces.
typedef struct smart_shop_interfaces__srv__PlaceOrder_Request
{
  rosidl_runtime_c__String order_id;
  rosidl_runtime_c__String item_id;
  int32_t quantity;
  int32_t amount;
  rosidl_runtime_c__String currency;
} smart_shop_interfaces__srv__PlaceOrder_Request;

// Struct for a sequence of smart_shop_interfaces__srv__PlaceOrder_Request.
typedef struct smart_shop_interfaces__srv__PlaceOrder_Request__Sequence
{
  smart_shop_interfaces__srv__PlaceOrder_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smart_shop_interfaces__srv__PlaceOrder_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// Member 'detail'
// Member 'payment_auth_code'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlaceOrder in the package smart_shop_interfaces.
typedef struct smart_shop_interfaces__srv__PlaceOrder_Response
{
  bool success;
  rosidl_runtime_c__String status;
  rosidl_runtime_c__String detail;
  int32_t remaining_stock;
  rosidl_runtime_c__String payment_auth_code;
} smart_shop_interfaces__srv__PlaceOrder_Response;

// Struct for a sequence of smart_shop_interfaces__srv__PlaceOrder_Response.
typedef struct smart_shop_interfaces__srv__PlaceOrder_Response__Sequence
{
  smart_shop_interfaces__srv__PlaceOrder_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smart_shop_interfaces__srv__PlaceOrder_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMART_SHOP_INTERFACES__SRV__DETAIL__PLACE_ORDER__STRUCT_H_
