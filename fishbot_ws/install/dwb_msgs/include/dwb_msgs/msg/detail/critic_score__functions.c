// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dwb_msgs:msg/CriticScore.idl
// generated code does not contain a copyright notice
#include "dwb_msgs/msg/detail/critic_score__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
dwb_msgs__msg__CriticScore__init(dwb_msgs__msg__CriticScore * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    dwb_msgs__msg__CriticScore__fini(msg);
    return false;
  }
  // raw_score
  // scale
  return true;
}

void
dwb_msgs__msg__CriticScore__fini(dwb_msgs__msg__CriticScore * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // raw_score
  // scale
}

bool
dwb_msgs__msg__CriticScore__are_equal(const dwb_msgs__msg__CriticScore * lhs, const dwb_msgs__msg__CriticScore * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // raw_score
  if (lhs->raw_score != rhs->raw_score) {
    return false;
  }
  // scale
  if (lhs->scale != rhs->scale) {
    return false;
  }
  return true;
}

bool
dwb_msgs__msg__CriticScore__copy(
  const dwb_msgs__msg__CriticScore * input,
  dwb_msgs__msg__CriticScore * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // raw_score
  output->raw_score = input->raw_score;
  // scale
  output->scale = input->scale;
  return true;
}

dwb_msgs__msg__CriticScore *
dwb_msgs__msg__CriticScore__create()
{
  dwb_msgs__msg__CriticScore * msg = (dwb_msgs__msg__CriticScore *)malloc(sizeof(dwb_msgs__msg__CriticScore));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dwb_msgs__msg__CriticScore));
  bool success = dwb_msgs__msg__CriticScore__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dwb_msgs__msg__CriticScore__destroy(dwb_msgs__msg__CriticScore * msg)
{
  if (msg) {
    dwb_msgs__msg__CriticScore__fini(msg);
  }
  free(msg);
}


bool
dwb_msgs__msg__CriticScore__Sequence__init(dwb_msgs__msg__CriticScore__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dwb_msgs__msg__CriticScore * data = NULL;
  if (size) {
    data = (dwb_msgs__msg__CriticScore *)calloc(size, sizeof(dwb_msgs__msg__CriticScore));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dwb_msgs__msg__CriticScore__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dwb_msgs__msg__CriticScore__fini(&data[i - 1]);
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
dwb_msgs__msg__CriticScore__Sequence__fini(dwb_msgs__msg__CriticScore__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dwb_msgs__msg__CriticScore__fini(&array->data[i]);
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

dwb_msgs__msg__CriticScore__Sequence *
dwb_msgs__msg__CriticScore__Sequence__create(size_t size)
{
  dwb_msgs__msg__CriticScore__Sequence * array = (dwb_msgs__msg__CriticScore__Sequence *)malloc(sizeof(dwb_msgs__msg__CriticScore__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dwb_msgs__msg__CriticScore__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dwb_msgs__msg__CriticScore__Sequence__destroy(dwb_msgs__msg__CriticScore__Sequence * array)
{
  if (array) {
    dwb_msgs__msg__CriticScore__Sequence__fini(array);
  }
  free(array);
}

bool
dwb_msgs__msg__CriticScore__Sequence__are_equal(const dwb_msgs__msg__CriticScore__Sequence * lhs, const dwb_msgs__msg__CriticScore__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dwb_msgs__msg__CriticScore__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dwb_msgs__msg__CriticScore__Sequence__copy(
  const dwb_msgs__msg__CriticScore__Sequence * input,
  dwb_msgs__msg__CriticScore__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dwb_msgs__msg__CriticScore);
    dwb_msgs__msg__CriticScore * data =
      (dwb_msgs__msg__CriticScore *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dwb_msgs__msg__CriticScore__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          dwb_msgs__msg__CriticScore__fini(&data[i]);
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
    if (!dwb_msgs__msg__CriticScore__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
