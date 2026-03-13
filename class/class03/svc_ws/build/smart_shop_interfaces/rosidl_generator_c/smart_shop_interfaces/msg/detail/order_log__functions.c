// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smart_shop_interfaces:msg/OrderLog.idl
// generated code does not contain a copyright notice
#include "smart_shop_interfaces/msg/detail/order_log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `order_id`
// Member `item_id`
// Member `status`
// Member `detail`
// Member `timestamp`
#include "rosidl_runtime_c/string_functions.h"

bool
smart_shop_interfaces__msg__OrderLog__init(smart_shop_interfaces__msg__OrderLog * msg)
{
  if (!msg) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__init(&msg->order_id)) {
    smart_shop_interfaces__msg__OrderLog__fini(msg);
    return false;
  }
  // item_id
  if (!rosidl_runtime_c__String__init(&msg->item_id)) {
    smart_shop_interfaces__msg__OrderLog__fini(msg);
    return false;
  }
  // quantity
  // amount
  // success
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    smart_shop_interfaces__msg__OrderLog__fini(msg);
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__init(&msg->detail)) {
    smart_shop_interfaces__msg__OrderLog__fini(msg);
    return false;
  }
  // timestamp
  if (!rosidl_runtime_c__String__init(&msg->timestamp)) {
    smart_shop_interfaces__msg__OrderLog__fini(msg);
    return false;
  }
  return true;
}

void
smart_shop_interfaces__msg__OrderLog__fini(smart_shop_interfaces__msg__OrderLog * msg)
{
  if (!msg) {
    return;
  }
  // order_id
  rosidl_runtime_c__String__fini(&msg->order_id);
  // item_id
  rosidl_runtime_c__String__fini(&msg->item_id);
  // quantity
  // amount
  // success
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // detail
  rosidl_runtime_c__String__fini(&msg->detail);
  // timestamp
  rosidl_runtime_c__String__fini(&msg->timestamp);
}

bool
smart_shop_interfaces__msg__OrderLog__are_equal(const smart_shop_interfaces__msg__OrderLog * lhs, const smart_shop_interfaces__msg__OrderLog * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->order_id), &(rhs->order_id)))
  {
    return false;
  }
  // item_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->item_id), &(rhs->item_id)))
  {
    return false;
  }
  // quantity
  if (lhs->quantity != rhs->quantity) {
    return false;
  }
  // amount
  if (lhs->amount != rhs->amount) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detail), &(rhs->detail)))
  {
    return false;
  }
  // timestamp
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  return true;
}

bool
smart_shop_interfaces__msg__OrderLog__copy(
  const smart_shop_interfaces__msg__OrderLog * input,
  smart_shop_interfaces__msg__OrderLog * output)
{
  if (!input || !output) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__copy(
      &(input->order_id), &(output->order_id)))
  {
    return false;
  }
  // item_id
  if (!rosidl_runtime_c__String__copy(
      &(input->item_id), &(output->item_id)))
  {
    return false;
  }
  // quantity
  output->quantity = input->quantity;
  // amount
  output->amount = input->amount;
  // success
  output->success = input->success;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__copy(
      &(input->detail), &(output->detail)))
  {
    return false;
  }
  // timestamp
  if (!rosidl_runtime_c__String__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  return true;
}

smart_shop_interfaces__msg__OrderLog *
smart_shop_interfaces__msg__OrderLog__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__msg__OrderLog * msg = (smart_shop_interfaces__msg__OrderLog *)allocator.allocate(sizeof(smart_shop_interfaces__msg__OrderLog), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smart_shop_interfaces__msg__OrderLog));
  bool success = smart_shop_interfaces__msg__OrderLog__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smart_shop_interfaces__msg__OrderLog__destroy(smart_shop_interfaces__msg__OrderLog * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smart_shop_interfaces__msg__OrderLog__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smart_shop_interfaces__msg__OrderLog__Sequence__init(smart_shop_interfaces__msg__OrderLog__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__msg__OrderLog * data = NULL;

  if (size) {
    data = (smart_shop_interfaces__msg__OrderLog *)allocator.zero_allocate(size, sizeof(smart_shop_interfaces__msg__OrderLog), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smart_shop_interfaces__msg__OrderLog__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smart_shop_interfaces__msg__OrderLog__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
smart_shop_interfaces__msg__OrderLog__Sequence__fini(smart_shop_interfaces__msg__OrderLog__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      smart_shop_interfaces__msg__OrderLog__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

smart_shop_interfaces__msg__OrderLog__Sequence *
smart_shop_interfaces__msg__OrderLog__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__msg__OrderLog__Sequence * array = (smart_shop_interfaces__msg__OrderLog__Sequence *)allocator.allocate(sizeof(smart_shop_interfaces__msg__OrderLog__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smart_shop_interfaces__msg__OrderLog__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smart_shop_interfaces__msg__OrderLog__Sequence__destroy(smart_shop_interfaces__msg__OrderLog__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smart_shop_interfaces__msg__OrderLog__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smart_shop_interfaces__msg__OrderLog__Sequence__are_equal(const smart_shop_interfaces__msg__OrderLog__Sequence * lhs, const smart_shop_interfaces__msg__OrderLog__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smart_shop_interfaces__msg__OrderLog__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smart_shop_interfaces__msg__OrderLog__Sequence__copy(
  const smart_shop_interfaces__msg__OrderLog__Sequence * input,
  smart_shop_interfaces__msg__OrderLog__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smart_shop_interfaces__msg__OrderLog);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smart_shop_interfaces__msg__OrderLog * data =
      (smart_shop_interfaces__msg__OrderLog *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smart_shop_interfaces__msg__OrderLog__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smart_shop_interfaces__msg__OrderLog__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smart_shop_interfaces__msg__OrderLog__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
