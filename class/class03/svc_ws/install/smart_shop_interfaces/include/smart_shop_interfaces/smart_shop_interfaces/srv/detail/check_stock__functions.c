// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smart_shop_interfaces:srv/CheckStock.idl
// generated code does not contain a copyright notice
#include "smart_shop_interfaces/srv/detail/check_stock__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `item_id`
#include "rosidl_runtime_c/string_functions.h"

bool
smart_shop_interfaces__srv__CheckStock_Request__init(smart_shop_interfaces__srv__CheckStock_Request * msg)
{
  if (!msg) {
    return false;
  }
  // item_id
  if (!rosidl_runtime_c__String__init(&msg->item_id)) {
    smart_shop_interfaces__srv__CheckStock_Request__fini(msg);
    return false;
  }
  // quantity
  return true;
}

void
smart_shop_interfaces__srv__CheckStock_Request__fini(smart_shop_interfaces__srv__CheckStock_Request * msg)
{
  if (!msg) {
    return;
  }
  // item_id
  rosidl_runtime_c__String__fini(&msg->item_id);
  // quantity
}

bool
smart_shop_interfaces__srv__CheckStock_Request__are_equal(const smart_shop_interfaces__srv__CheckStock_Request * lhs, const smart_shop_interfaces__srv__CheckStock_Request * rhs)
{
  if (!lhs || !rhs) {
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
  return true;
}

bool
smart_shop_interfaces__srv__CheckStock_Request__copy(
  const smart_shop_interfaces__srv__CheckStock_Request * input,
  smart_shop_interfaces__srv__CheckStock_Request * output)
{
  if (!input || !output) {
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
  return true;
}

smart_shop_interfaces__srv__CheckStock_Request *
smart_shop_interfaces__srv__CheckStock_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__srv__CheckStock_Request * msg = (smart_shop_interfaces__srv__CheckStock_Request *)allocator.allocate(sizeof(smart_shop_interfaces__srv__CheckStock_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smart_shop_interfaces__srv__CheckStock_Request));
  bool success = smart_shop_interfaces__srv__CheckStock_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smart_shop_interfaces__srv__CheckStock_Request__destroy(smart_shop_interfaces__srv__CheckStock_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smart_shop_interfaces__srv__CheckStock_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smart_shop_interfaces__srv__CheckStock_Request__Sequence__init(smart_shop_interfaces__srv__CheckStock_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__srv__CheckStock_Request * data = NULL;

  if (size) {
    data = (smart_shop_interfaces__srv__CheckStock_Request *)allocator.zero_allocate(size, sizeof(smart_shop_interfaces__srv__CheckStock_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smart_shop_interfaces__srv__CheckStock_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smart_shop_interfaces__srv__CheckStock_Request__fini(&data[i - 1]);
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
smart_shop_interfaces__srv__CheckStock_Request__Sequence__fini(smart_shop_interfaces__srv__CheckStock_Request__Sequence * array)
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
      smart_shop_interfaces__srv__CheckStock_Request__fini(&array->data[i]);
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

smart_shop_interfaces__srv__CheckStock_Request__Sequence *
smart_shop_interfaces__srv__CheckStock_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__srv__CheckStock_Request__Sequence * array = (smart_shop_interfaces__srv__CheckStock_Request__Sequence *)allocator.allocate(sizeof(smart_shop_interfaces__srv__CheckStock_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smart_shop_interfaces__srv__CheckStock_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smart_shop_interfaces__srv__CheckStock_Request__Sequence__destroy(smart_shop_interfaces__srv__CheckStock_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smart_shop_interfaces__srv__CheckStock_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smart_shop_interfaces__srv__CheckStock_Request__Sequence__are_equal(const smart_shop_interfaces__srv__CheckStock_Request__Sequence * lhs, const smart_shop_interfaces__srv__CheckStock_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smart_shop_interfaces__srv__CheckStock_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smart_shop_interfaces__srv__CheckStock_Request__Sequence__copy(
  const smart_shop_interfaces__srv__CheckStock_Request__Sequence * input,
  smart_shop_interfaces__srv__CheckStock_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smart_shop_interfaces__srv__CheckStock_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smart_shop_interfaces__srv__CheckStock_Request * data =
      (smart_shop_interfaces__srv__CheckStock_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smart_shop_interfaces__srv__CheckStock_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smart_shop_interfaces__srv__CheckStock_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smart_shop_interfaces__srv__CheckStock_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `reason`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
smart_shop_interfaces__srv__CheckStock_Response__init(smart_shop_interfaces__srv__CheckStock_Response * msg)
{
  if (!msg) {
    return false;
  }
  // available
  // remaining
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    smart_shop_interfaces__srv__CheckStock_Response__fini(msg);
    return false;
  }
  return true;
}

void
smart_shop_interfaces__srv__CheckStock_Response__fini(smart_shop_interfaces__srv__CheckStock_Response * msg)
{
  if (!msg) {
    return;
  }
  // available
  // remaining
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
}

bool
smart_shop_interfaces__srv__CheckStock_Response__are_equal(const smart_shop_interfaces__srv__CheckStock_Response * lhs, const smart_shop_interfaces__srv__CheckStock_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // available
  if (lhs->available != rhs->available) {
    return false;
  }
  // remaining
  if (lhs->remaining != rhs->remaining) {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  return true;
}

bool
smart_shop_interfaces__srv__CheckStock_Response__copy(
  const smart_shop_interfaces__srv__CheckStock_Response * input,
  smart_shop_interfaces__srv__CheckStock_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // available
  output->available = input->available;
  // remaining
  output->remaining = input->remaining;
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  return true;
}

smart_shop_interfaces__srv__CheckStock_Response *
smart_shop_interfaces__srv__CheckStock_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__srv__CheckStock_Response * msg = (smart_shop_interfaces__srv__CheckStock_Response *)allocator.allocate(sizeof(smart_shop_interfaces__srv__CheckStock_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smart_shop_interfaces__srv__CheckStock_Response));
  bool success = smart_shop_interfaces__srv__CheckStock_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smart_shop_interfaces__srv__CheckStock_Response__destroy(smart_shop_interfaces__srv__CheckStock_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smart_shop_interfaces__srv__CheckStock_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smart_shop_interfaces__srv__CheckStock_Response__Sequence__init(smart_shop_interfaces__srv__CheckStock_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__srv__CheckStock_Response * data = NULL;

  if (size) {
    data = (smart_shop_interfaces__srv__CheckStock_Response *)allocator.zero_allocate(size, sizeof(smart_shop_interfaces__srv__CheckStock_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smart_shop_interfaces__srv__CheckStock_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smart_shop_interfaces__srv__CheckStock_Response__fini(&data[i - 1]);
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
smart_shop_interfaces__srv__CheckStock_Response__Sequence__fini(smart_shop_interfaces__srv__CheckStock_Response__Sequence * array)
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
      smart_shop_interfaces__srv__CheckStock_Response__fini(&array->data[i]);
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

smart_shop_interfaces__srv__CheckStock_Response__Sequence *
smart_shop_interfaces__srv__CheckStock_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smart_shop_interfaces__srv__CheckStock_Response__Sequence * array = (smart_shop_interfaces__srv__CheckStock_Response__Sequence *)allocator.allocate(sizeof(smart_shop_interfaces__srv__CheckStock_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smart_shop_interfaces__srv__CheckStock_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smart_shop_interfaces__srv__CheckStock_Response__Sequence__destroy(smart_shop_interfaces__srv__CheckStock_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smart_shop_interfaces__srv__CheckStock_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smart_shop_interfaces__srv__CheckStock_Response__Sequence__are_equal(const smart_shop_interfaces__srv__CheckStock_Response__Sequence * lhs, const smart_shop_interfaces__srv__CheckStock_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smart_shop_interfaces__srv__CheckStock_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smart_shop_interfaces__srv__CheckStock_Response__Sequence__copy(
  const smart_shop_interfaces__srv__CheckStock_Response__Sequence * input,
  smart_shop_interfaces__srv__CheckStock_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smart_shop_interfaces__srv__CheckStock_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smart_shop_interfaces__srv__CheckStock_Response * data =
      (smart_shop_interfaces__srv__CheckStock_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smart_shop_interfaces__srv__CheckStock_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smart_shop_interfaces__srv__CheckStock_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smart_shop_interfaces__srv__CheckStock_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
