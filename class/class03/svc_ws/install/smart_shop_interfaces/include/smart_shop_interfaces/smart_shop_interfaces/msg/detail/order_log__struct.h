// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smart_shop_interfaces:msg/OrderLog.idl
// generated code does not contain a copyright notice

#ifndef SMART_SHOP_INTERFACES__MSG__DETAIL__ORDER_LOG__STRUCT_H_
#define SMART_SHOP_INTERFACES__MSG__DETAIL__ORDER_LOG__STRUCT_H_

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
// Member 'status'
// Member 'detail'
// Member 'timestamp'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/OrderLog in the package smart_shop_interfaces.
typedef struct smart_shop_interfaces__msg__OrderLog
{
  rosidl_runtime_c__String order_id;
  rosidl_runtime_c__String item_id;
  int32_t quantity;
  int32_t amount;
  bool success;
  rosidl_runtime_c__String status;
  rosidl_runtime_c__String detail;
  rosidl_runtime_c__String timestamp;
} smart_shop_interfaces__msg__OrderLog;

// Struct for a sequence of smart_shop_interfaces__msg__OrderLog.
typedef struct smart_shop_interfaces__msg__OrderLog__Sequence
{
  smart_shop_interfaces__msg__OrderLog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smart_shop_interfaces__msg__OrderLog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMART_SHOP_INTERFACES__MSG__DETAIL__ORDER_LOG__STRUCT_H_
