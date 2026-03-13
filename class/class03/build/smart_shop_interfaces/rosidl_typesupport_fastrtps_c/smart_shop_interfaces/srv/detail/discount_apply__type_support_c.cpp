// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from smart_shop_interfaces:srv/DiscountApply.idl
// generated code does not contain a copyright notice
#include "smart_shop_interfaces/srv/detail/discount_apply__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "smart_shop_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "smart_shop_interfaces/srv/detail/discount_apply__struct.h"
#include "smart_shop_interfaces/srv/detail/discount_apply__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // item_id
#include "rosidl_runtime_c/string_functions.h"  // item_id

// forward declare type support functions


using _DiscountApply_Request__ros_msg_type = smart_shop_interfaces__srv__DiscountApply_Request;

static bool _DiscountApply_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DiscountApply_Request__ros_msg_type * ros_message = static_cast<const _DiscountApply_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: item_id
  {
    const rosidl_runtime_c__String * str = &ros_message->item_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: original_amount
  {
    cdr << ros_message->original_amount;
  }

  return true;
}

static bool _DiscountApply_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DiscountApply_Request__ros_msg_type * ros_message = static_cast<_DiscountApply_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: item_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->item_id.data) {
      rosidl_runtime_c__String__init(&ros_message->item_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->item_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'item_id'\n");
      return false;
    }
  }

  // Field name: original_amount
  {
    cdr >> ros_message->original_amount;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_shop_interfaces
size_t get_serialized_size_smart_shop_interfaces__srv__DiscountApply_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DiscountApply_Request__ros_msg_type * ros_message = static_cast<const _DiscountApply_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name item_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->item_id.size + 1);
  // field.name original_amount
  {
    size_t item_size = sizeof(ros_message->original_amount);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DiscountApply_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_smart_shop_interfaces__srv__DiscountApply_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_shop_interfaces
size_t max_serialized_size_smart_shop_interfaces__srv__DiscountApply_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: item_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: original_amount
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = smart_shop_interfaces__srv__DiscountApply_Request;
    is_plain =
      (
      offsetof(DataType, original_amount) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DiscountApply_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_smart_shop_interfaces__srv__DiscountApply_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DiscountApply_Request = {
  "smart_shop_interfaces::srv",
  "DiscountApply_Request",
  _DiscountApply_Request__cdr_serialize,
  _DiscountApply_Request__cdr_deserialize,
  _DiscountApply_Request__get_serialized_size,
  _DiscountApply_Request__max_serialized_size
};

static rosidl_message_type_support_t _DiscountApply_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DiscountApply_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smart_shop_interfaces, srv, DiscountApply_Request)() {
  return &_DiscountApply_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "smart_shop_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "smart_shop_interfaces/srv/detail/discount_apply__struct.h"
// already included above
// #include "smart_shop_interfaces/srv/detail/discount_apply__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // reason
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // reason

// forward declare type support functions


using _DiscountApply_Response__ros_msg_type = smart_shop_interfaces__srv__DiscountApply_Response;

static bool _DiscountApply_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DiscountApply_Response__ros_msg_type * ros_message = static_cast<const _DiscountApply_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: discounted_amount
  {
    cdr << ros_message->discounted_amount;
  }

  // Field name: discount_rate
  {
    cdr << ros_message->discount_rate;
  }

  // Field name: reason
  {
    const rosidl_runtime_c__String * str = &ros_message->reason;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _DiscountApply_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DiscountApply_Response__ros_msg_type * ros_message = static_cast<_DiscountApply_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: discounted_amount
  {
    cdr >> ros_message->discounted_amount;
  }

  // Field name: discount_rate
  {
    cdr >> ros_message->discount_rate;
  }

  // Field name: reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->reason.data) {
      rosidl_runtime_c__String__init(&ros_message->reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'reason'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_shop_interfaces
size_t get_serialized_size_smart_shop_interfaces__srv__DiscountApply_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DiscountApply_Response__ros_msg_type * ros_message = static_cast<const _DiscountApply_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name discounted_amount
  {
    size_t item_size = sizeof(ros_message->discounted_amount);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name discount_rate
  {
    size_t item_size = sizeof(ros_message->discount_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->reason.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _DiscountApply_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_smart_shop_interfaces__srv__DiscountApply_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_smart_shop_interfaces
size_t max_serialized_size_smart_shop_interfaces__srv__DiscountApply_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: discounted_amount
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: discount_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reason
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = smart_shop_interfaces__srv__DiscountApply_Response;
    is_plain =
      (
      offsetof(DataType, reason) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DiscountApply_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_smart_shop_interfaces__srv__DiscountApply_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DiscountApply_Response = {
  "smart_shop_interfaces::srv",
  "DiscountApply_Response",
  _DiscountApply_Response__cdr_serialize,
  _DiscountApply_Response__cdr_deserialize,
  _DiscountApply_Response__get_serialized_size,
  _DiscountApply_Response__max_serialized_size
};

static rosidl_message_type_support_t _DiscountApply_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DiscountApply_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smart_shop_interfaces, srv, DiscountApply_Response)() {
  return &_DiscountApply_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "smart_shop_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "smart_shop_interfaces/srv/discount_apply.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DiscountApply__callbacks = {
  "smart_shop_interfaces::srv",
  "DiscountApply",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smart_shop_interfaces, srv, DiscountApply_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smart_shop_interfaces, srv, DiscountApply_Response)(),
};

static rosidl_service_type_support_t DiscountApply__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &DiscountApply__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, smart_shop_interfaces, srv, DiscountApply)() {
  return &DiscountApply__handle;
}

#if defined(__cplusplus)
}
#endif
