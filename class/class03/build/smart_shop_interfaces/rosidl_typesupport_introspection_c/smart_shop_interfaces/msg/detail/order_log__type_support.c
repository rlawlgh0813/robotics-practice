// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from smart_shop_interfaces:msg/OrderLog.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "smart_shop_interfaces/msg/detail/order_log__rosidl_typesupport_introspection_c.h"
#include "smart_shop_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "smart_shop_interfaces/msg/detail/order_log__functions.h"
#include "smart_shop_interfaces/msg/detail/order_log__struct.h"


// Include directives for member types
// Member `order_id`
// Member `item_id`
// Member `status`
// Member `detail`
// Member `timestamp`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void smart_shop_interfaces__msg__OrderLog__rosidl_typesupport_introspection_c__OrderLog_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  smart_shop_interfaces__msg__OrderLog__init(message_memory);
}

void smart_shop_interfaces__msg__OrderLog__rosidl_typesupport_introspection_c__OrderLog_fini_function(void * message_memory)
{
  smart_shop_interfaces__msg__OrderLog__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember smart_shop_interfaces__msg__OrderLog__rosidl_typesupport_introspection_c__OrderLog_message_member_array[8] = {
  {
    "order_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smart_shop_interfaces__msg__OrderLog, order_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "item_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smart_shop_interfaces__msg__OrderLog, item_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quantity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smart_shop_interfaces__msg__OrderLog, quantity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "amount",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smart_shop_interfaces__msg__OrderLog, amount),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smart_shop_interfaces__msg__OrderLog, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smart_shop_interfaces__msg__OrderLog, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detail",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smart_shop_interfaces__msg__OrderLog, detail),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smart_shop_interfaces__msg__OrderLog, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers smart_shop_interfaces__msg__OrderLog__rosidl_typesupport_introspection_c__OrderLog_message_members = {
  "smart_shop_interfaces__msg",  // message namespace
  "OrderLog",  // message name
  8,  // number of fields
  sizeof(smart_shop_interfaces__msg__OrderLog),
  smart_shop_interfaces__msg__OrderLog__rosidl_typesupport_introspection_c__OrderLog_message_member_array,  // message members
  smart_shop_interfaces__msg__OrderLog__rosidl_typesupport_introspection_c__OrderLog_init_function,  // function to initialize message memory (memory has to be allocated)
  smart_shop_interfaces__msg__OrderLog__rosidl_typesupport_introspection_c__OrderLog_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t smart_shop_interfaces__msg__OrderLog__rosidl_typesupport_introspection_c__OrderLog_message_type_support_handle = {
  0,
  &smart_shop_interfaces__msg__OrderLog__rosidl_typesupport_introspection_c__OrderLog_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_smart_shop_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smart_shop_interfaces, msg, OrderLog)() {
  if (!smart_shop_interfaces__msg__OrderLog__rosidl_typesupport_introspection_c__OrderLog_message_type_support_handle.typesupport_identifier) {
    smart_shop_interfaces__msg__OrderLog__rosidl_typesupport_introspection_c__OrderLog_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &smart_shop_interfaces__msg__OrderLog__rosidl_typesupport_introspection_c__OrderLog_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
