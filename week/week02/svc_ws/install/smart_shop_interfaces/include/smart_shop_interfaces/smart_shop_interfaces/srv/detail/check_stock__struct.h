// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smart_shop_interfaces:srv/CheckStock.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__SRV__DETAIL__CHECK_STOCK__STRUCT_H_
#define SMART_SHOP_INTERFACES__SRV__DETAIL__CHECK_STOCK__STRUCT_H_

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

/// Struct defined in srv/CheckStock in the package smart_shop_interfaces.
typedef struct smart_shop_interfaces__srv__CheckStock_Request
{
  rosidl_runtime_c__String item_id;
  int32_t quantity;
} smart_shop_interfaces__srv__CheckStock_Request;

// Struct for a sequence of smart_shop_interfaces__srv__CheckStock_Request.
typedef struct smart_shop_interfaces__srv__CheckStock_Request__Sequence
{
  smart_shop_interfaces__srv__CheckStock_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smart_shop_interfaces__srv__CheckStock_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'reason'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CheckStock in the package smart_shop_interfaces.
typedef struct smart_shop_interfaces__srv__CheckStock_Response
{
  bool available;
  int32_t remaining;
  rosidl_runtime_c__String reason;
} smart_shop_interfaces__srv__CheckStock_Response;

// Struct for a sequence of smart_shop_interfaces__srv__CheckStock_Response.
typedef struct smart_shop_interfaces__srv__CheckStock_Response__Sequence
{
  smart_shop_interfaces__srv__CheckStock_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smart_shop_interfaces__srv__CheckStock_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMART_SHOP_INTERFACES__SRV__DETAIL__CHECK_STOCK__STRUCT_H_
