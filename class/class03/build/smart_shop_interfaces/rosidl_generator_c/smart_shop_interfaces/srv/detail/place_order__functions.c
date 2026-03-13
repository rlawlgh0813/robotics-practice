// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smart_shop_interfaces:srv/PlaceOrder.idl
// generated code does not contain a copyright notice
#include "smart_shop_interfaces/srv/detail/place_order__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `order_id`
// Member `item_id`
// Member `currency`
#include "rosidl_runtime_c/string_functions.h"

bool
smart_shop_interfaces__srv__PlaceOrder_Request__init(smart_shop_interfaces__srv__PlaceOrder_Request * msg)
{
  if (!msg) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__init(&msg->order_id)) {
    smart_shop_interfaces__srv__PlaceOrder_Request__fini(msg);
    return false;
  }
  // item_id
  if (!rosidl_runtime_c__String__init(&msg->item_id)) {
    smart_shop_interfaces__srv__PlaceOrder_Request__fini(msg);
    return false;
  }
  // quantity
  // amount
  // currency
  if (!rosidl_runtime_c__String__init(&msg->currency)) {
    smart_shop_interfaces__srv__PlaceOrder_Request__fini(msg);
    return false;
  }
  return true;
}

void
smart_shop_interfaces__srv__PlaceOrder_Request__fini(smart_shop_interfaces__srv__PlaceOrder_Request * msg)
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
  // currency
  rosidl_runtime_c__String__fini(&msg->currency);
}

bool
smart_shop_interfaces__srv__PlaceOrder_Request__are_equal(const smart_shop_interfaces__srv__PlaceOrder_Request * lhs, const smart_shop_interfaces__srv__PlaceOrder_Request * rhs)
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
  // currency
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->currency), &(rhs->currency)))
  {
    return false;
  }
  return true;
}

bool
smart_shop_interfaces__srv__PlaceOrder_Request__copy(
  const smart_shop_interfaces__srv__PlaceOrder_Request * input,
  smart_shop_interfaces__srv__PlaceOrder_Request * output)
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
  // currency
  if (!rosidl_runtime_c__String__copy(
      &(input->currency), &(output->currency)))
  {
    return false;
  }
  return true;
}

smart_shop_interfaces__srv__PlaceOrder_Request *
smart_shop_interfaces__srv__PlaceOrder_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__srv__PlaceOrder_Request * msg = (smart_shop_interfaces__srv__PlaceOrder_Request *)allocator.allocate(sizeof(smart_shop_interfaces__srv__PlaceOrder_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smart_shop_interfaces__srv__PlaceOrder_Request));
  bool success = smart_shop_interfaces__srv__PlaceOrder_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smart_shop_interfaces__srv__PlaceOrder_Request__destroy(smart_shop_interfaces__srv__PlaceOrder_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smart_shop_interfaces__srv__PlaceOrder_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smart_shop_interfaces__srv__PlaceOrder_Request__Sequence__init(smart_shop_interfaces__srv__PlaceOrder_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__srv__PlaceOrder_Request * data = NULL;

  if (size) {
    data = (smart_shop_interfaces__srv__PlaceOrder_Request *)allocator.zero_allocate(size, sizeof(smart_shop_interfaces__srv__PlaceOrder_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smart_shop_interfaces__srv__PlaceOrder_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smart_shop_interfaces__srv__PlaceOrder_Request__fini(&data[i - 1]);
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
smart_shop_interfaces__srv__PlaceOrder_Request__Sequence__fini(smart_shop_interfaces__srv__PlaceOrder_Request__Sequence * array)
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
      smart_shop_interfaces__srv__PlaceOrder_Request__fini(&array->data[i]);
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

smart_shop_interfaces__srv__PlaceOrder_Request__Sequence *
smart_shop_interfaces__srv__PlaceOrder_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__srv__PlaceOrder_Request__Sequence * array = (smart_shop_interfaces__srv__PlaceOrder_Request__Sequence *)allocator.allocate(sizeof(smart_shop_interfaces__srv__PlaceOrder_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smart_shop_interfaces__srv__PlaceOrder_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smart_shop_interfaces__srv__PlaceOrder_Request__Sequence__destroy(smart_shop_interfaces__srv__PlaceOrder_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smart_shop_interfaces__srv__PlaceOrder_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smart_shop_interfaces__srv__PlaceOrder_Request__Sequence__are_equal(const smart_shop_interfaces__srv__PlaceOrder_Request__Sequence * lhs, const smart_shop_interfaces__srv__PlaceOrder_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smart_shop_interfaces__srv__PlaceOrder_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smart_shop_interfaces__srv__PlaceOrder_Request__Sequence__copy(
  const smart_shop_interfaces__srv__PlaceOrder_Request__Sequence * input,
  smart_shop_interfaces__srv__PlaceOrder_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smart_shop_interfaces__srv__PlaceOrder_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smart_shop_interfaces__srv__PlaceOrder_Request * data =
      (smart_shop_interfaces__srv__PlaceOrder_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smart_shop_interfaces__srv__PlaceOrder_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smart_shop_interfaces__srv__PlaceOrder_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smart_shop_interfaces__srv__PlaceOrder_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
// Member `detail`
// Member `payment_auth_code`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
smart_shop_interfaces__srv__PlaceOrder_Response__init(smart_shop_interfaces__srv__PlaceOrder_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    smart_shop_interfaces__srv__PlaceOrder_Response__fini(msg);
    return false;
  }
  // detail
  if (!rosidl_runtime_c__String__init(&msg->detail)) {
    smart_shop_interfaces__srv__PlaceOrder_Response__fini(msg);
    return false;
  }
  // remaining_stock
  // payment_auth_code
  if (!rosidl_runtime_c__String__init(&msg->payment_auth_code)) {
    smart_shop_interfaces__srv__PlaceOrder_Response__fini(msg);
    return false;
  }
  return true;
}

void
smart_shop_interfaces__srv__PlaceOrder_Response__fini(smart_shop_interfaces__srv__PlaceOrder_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // detail
  rosidl_runtime_c__String__fini(&msg->detail);
  // remaining_stock
  // payment_auth_code
  rosidl_runtime_c__String__fini(&msg->payment_auth_code);
}

bool
smart_shop_interfaces__srv__PlaceOrder_Response__are_equal(const smart_shop_interfaces__srv__PlaceOrder_Response * lhs, const smart_shop_interfaces__srv__PlaceOrder_Response * rhs)
{
  if (!lhs || !rhs) {
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
  // remaining_stock
  if (lhs->remaining_stock != rhs->remaining_stock) {
    return false;
  }
  // payment_auth_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->payment_auth_code), &(rhs->payment_auth_code)))
  {
    return false;
  }
  return true;
}

bool
smart_shop_interfaces__srv__PlaceOrder_Response__copy(
  const smart_shop_interfaces__srv__PlaceOrder_Response * input,
  smart_shop_interfaces__srv__PlaceOrder_Response * output)
{
  if (!input || !output) {
    return false;
  }
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
  // remaining_stock
  output->remaining_stock = input->remaining_stock;
  // payment_auth_code
  if (!rosidl_runtime_c__String__copy(
      &(input->payment_auth_code), &(output->payment_auth_code)))
  {
    return false;
  }
  return true;
}

smart_shop_interfaces__srv__PlaceOrder_Response *
smart_shop_interfaces__srv__PlaceOrder_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__srv__PlaceOrder_Response * msg = (smart_shop_interfaces__srv__PlaceOrder_Response *)allocator.allocate(sizeof(smart_shop_interfaces__srv__PlaceOrder_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smart_shop_interfaces__srv__PlaceOrder_Response));
  bool success = smart_shop_interfaces__srv__PlaceOrder_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smart_shop_interfaces__srv__PlaceOrder_Response__destroy(smart_shop_interfaces__srv__PlaceOrder_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smart_shop_interfaces__srv__PlaceOrder_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smart_shop_interfaces__srv__PlaceOrder_Response__Sequence__init(smart_shop_interfaces__srv__PlaceOrder_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__srv__PlaceOrder_Response * data = NULL;

  if (size) {
    data = (smart_shop_interfaces__srv__PlaceOrder_Response *)allocator.zero_allocate(size, sizeof(smart_shop_interfaces__srv__PlaceOrder_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smart_shop_interfaces__srv__PlaceOrder_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smart_shop_interfaces__srv__PlaceOrder_Response__fini(&data[i - 1]);
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
smart_shop_interfaces__srv__PlaceOrder_Response__Sequence__fini(smart_shop_interfaces__srv__PlaceOrder_Response__Sequence * array)
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
      smart_shop_interfaces__srv__PlaceOrder_Response__fini(&array->data[i]);
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

smart_shop_interfaces__srv__PlaceOrder_Response__Sequence *
smart_shop_interfaces__srv__PlaceOrder_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__srv__PlaceOrder_Response__Sequence * array = (smart_shop_interfaces__srv__PlaceOrder_Response__Sequence *)allocator.allocate(sizeof(smart_shop_interfaces__srv__PlaceOrder_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smart_shop_interfaces__srv__PlaceOrder_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smart_shop_interfaces__srv__PlaceOrder_Response__Sequence__destroy(smart_shop_interfaces__srv__PlaceOrder_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smart_shop_interfaces__srv__PlaceOrder_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smart_shop_interfaces__srv__PlaceOrder_Response__Sequence__are_equal(const smart_shop_interfaces__srv__PlaceOrder_Response__Sequence * lhs, const smart_shop_interfaces__srv__PlaceOrder_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smart_shop_interfaces__srv__PlaceOrder_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smart_shop_interfaces__srv__PlaceOrder_Response__Sequence__copy(
  const smart_shop_interfaces__srv__PlaceOrder_Response__Sequence * input,
  smart_shop_interfaces__srv__PlaceOrder_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smart_shop_interfaces__srv__PlaceOrder_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smart_shop_interfaces__srv__PlaceOrder_Response * data =
      (smart_shop_interfaces__srv__PlaceOrder_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smart_shop_interfaces__srv__PlaceOrder_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smart_shop_interfaces__srv__PlaceOrder_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smart_shop_interfaces__srv__PlaceOrder_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
