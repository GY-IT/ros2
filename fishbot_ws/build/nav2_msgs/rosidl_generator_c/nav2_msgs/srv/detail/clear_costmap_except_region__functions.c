// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:srv/ClearCostmapExceptRegion.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/srv/detail/clear_costmap_except_region__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
nav2_msgs__srv__ClearCostmapExceptRegion_Request__init(nav2_msgs__srv__ClearCostmapExceptRegion_Request * msg)
{
  if (!msg) {
    return false;
  }
  // reset_distance
  return true;
}

void
nav2_msgs__srv__ClearCostmapExceptRegion_Request__fini(nav2_msgs__srv__ClearCostmapExceptRegion_Request * msg)
{
  if (!msg) {
    return;
  }
  // reset_distance
}

bool
nav2_msgs__srv__ClearCostmapExceptRegion_Request__are_equal(const nav2_msgs__srv__ClearCostmapExceptRegion_Request * lhs, const nav2_msgs__srv__ClearCostmapExceptRegion_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reset_distance
  if (lhs->reset_distance != rhs->reset_distance) {
    return false;
  }
  return true;
}

bool
nav2_msgs__srv__ClearCostmapExceptRegion_Request__copy(
  const nav2_msgs__srv__ClearCostmapExceptRegion_Request * input,
  nav2_msgs__srv__ClearCostmapExceptRegion_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // reset_distance
  output->reset_distance = input->reset_distance;
  return true;
}

nav2_msgs__srv__ClearCostmapExceptRegion_Request *
nav2_msgs__srv__ClearCostmapExceptRegion_Request__create()
{
  nav2_msgs__srv__ClearCostmapExceptRegion_Request * msg = (nav2_msgs__srv__ClearCostmapExceptRegion_Request *)malloc(sizeof(nav2_msgs__srv__ClearCostmapExceptRegion_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__srv__ClearCostmapExceptRegion_Request));
  bool success = nav2_msgs__srv__ClearCostmapExceptRegion_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__srv__ClearCostmapExceptRegion_Request__destroy(nav2_msgs__srv__ClearCostmapExceptRegion_Request * msg)
{
  if (msg) {
    nav2_msgs__srv__ClearCostmapExceptRegion_Request__fini(msg);
  }
  free(msg);
}


bool
nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence__init(nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_msgs__srv__ClearCostmapExceptRegion_Request * data = NULL;
  if (size) {
    data = (nav2_msgs__srv__ClearCostmapExceptRegion_Request *)calloc(size, sizeof(nav2_msgs__srv__ClearCostmapExceptRegion_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__srv__ClearCostmapExceptRegion_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__srv__ClearCostmapExceptRegion_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence__fini(nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_msgs__srv__ClearCostmapExceptRegion_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence *
nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence__create(size_t size)
{
  nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence * array = (nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence *)malloc(sizeof(nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence__destroy(nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence * array)
{
  if (array) {
    nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence__fini(array);
  }
  free(array);
}

bool
nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence__are_equal(const nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence * lhs, const nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__srv__ClearCostmapExceptRegion_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence__copy(
  const nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence * input,
  nav2_msgs__srv__ClearCostmapExceptRegion_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__srv__ClearCostmapExceptRegion_Request);
    nav2_msgs__srv__ClearCostmapExceptRegion_Request * data =
      (nav2_msgs__srv__ClearCostmapExceptRegion_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__srv__ClearCostmapExceptRegion_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nav2_msgs__srv__ClearCostmapExceptRegion_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__srv__ClearCostmapExceptRegion_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
#include "std_msgs/msg/detail/empty__functions.h"

bool
nav2_msgs__srv__ClearCostmapExceptRegion_Response__init(nav2_msgs__srv__ClearCostmapExceptRegion_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!std_msgs__msg__Empty__init(&msg->response)) {
    nav2_msgs__srv__ClearCostmapExceptRegion_Response__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__srv__ClearCostmapExceptRegion_Response__fini(nav2_msgs__srv__ClearCostmapExceptRegion_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  std_msgs__msg__Empty__fini(&msg->response);
}

bool
nav2_msgs__srv__ClearCostmapExceptRegion_Response__are_equal(const nav2_msgs__srv__ClearCostmapExceptRegion_Response * lhs, const nav2_msgs__srv__ClearCostmapExceptRegion_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!std_msgs__msg__Empty__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__srv__ClearCostmapExceptRegion_Response__copy(
  const nav2_msgs__srv__ClearCostmapExceptRegion_Response * input,
  nav2_msgs__srv__ClearCostmapExceptRegion_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!std_msgs__msg__Empty__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

nav2_msgs__srv__ClearCostmapExceptRegion_Response *
nav2_msgs__srv__ClearCostmapExceptRegion_Response__create()
{
  nav2_msgs__srv__ClearCostmapExceptRegion_Response * msg = (nav2_msgs__srv__ClearCostmapExceptRegion_Response *)malloc(sizeof(nav2_msgs__srv__ClearCostmapExceptRegion_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__srv__ClearCostmapExceptRegion_Response));
  bool success = nav2_msgs__srv__ClearCostmapExceptRegion_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__srv__ClearCostmapExceptRegion_Response__destroy(nav2_msgs__srv__ClearCostmapExceptRegion_Response * msg)
{
  if (msg) {
    nav2_msgs__srv__ClearCostmapExceptRegion_Response__fini(msg);
  }
  free(msg);
}


bool
nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence__init(nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_msgs__srv__ClearCostmapExceptRegion_Response * data = NULL;
  if (size) {
    data = (nav2_msgs__srv__ClearCostmapExceptRegion_Response *)calloc(size, sizeof(nav2_msgs__srv__ClearCostmapExceptRegion_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__srv__ClearCostmapExceptRegion_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__srv__ClearCostmapExceptRegion_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence__fini(nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_msgs__srv__ClearCostmapExceptRegion_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence *
nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence__create(size_t size)
{
  nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence * array = (nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence *)malloc(sizeof(nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence__destroy(nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence * array)
{
  if (array) {
    nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence__fini(array);
  }
  free(array);
}

bool
nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence__are_equal(const nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence * lhs, const nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__srv__ClearCostmapExceptRegion_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence__copy(
  const nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence * input,
  nav2_msgs__srv__ClearCostmapExceptRegion_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__srv__ClearCostmapExceptRegion_Response);
    nav2_msgs__srv__ClearCostmapExceptRegion_Response * data =
      (nav2_msgs__srv__ClearCostmapExceptRegion_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__srv__ClearCostmapExceptRegion_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          nav2_msgs__srv__ClearCostmapExceptRegion_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__srv__ClearCostmapExceptRegion_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
