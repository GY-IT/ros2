// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/MetricLabel.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/metric_label__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `key`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
cartographer_ros_msgs__msg__MetricLabel__init(cartographer_ros_msgs__msg__MetricLabel * msg)
{
  if (!msg) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__init(&msg->key)) {
    cartographer_ros_msgs__msg__MetricLabel__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__init(&msg->value)) {
    cartographer_ros_msgs__msg__MetricLabel__fini(msg);
    return false;
  }
  return true;
}

void
cartographer_ros_msgs__msg__MetricLabel__fini(cartographer_ros_msgs__msg__MetricLabel * msg)
{
  if (!msg) {
    return;
  }
  // key
  rosidl_runtime_c__String__fini(&msg->key);
  // value
  rosidl_runtime_c__String__fini(&msg->value);
}

bool
cartographer_ros_msgs__msg__MetricLabel__are_equal(const cartographer_ros_msgs__msg__MetricLabel * lhs, const cartographer_ros_msgs__msg__MetricLabel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->key), &(rhs->key)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
cartographer_ros_msgs__msg__MetricLabel__copy(
  const cartographer_ros_msgs__msg__MetricLabel * input,
  cartographer_ros_msgs__msg__MetricLabel * output)
{
  if (!input || !output) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__copy(
      &(input->key), &(output->key)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

cartographer_ros_msgs__msg__MetricLabel *
cartographer_ros_msgs__msg__MetricLabel__create()
{
  cartographer_ros_msgs__msg__MetricLabel * msg = (cartographer_ros_msgs__msg__MetricLabel *)malloc(sizeof(cartographer_ros_msgs__msg__MetricLabel));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__MetricLabel));
  bool success = cartographer_ros_msgs__msg__MetricLabel__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__MetricLabel__destroy(cartographer_ros_msgs__msg__MetricLabel * msg)
{
  if (msg) {
    cartographer_ros_msgs__msg__MetricLabel__fini(msg);
  }
  free(msg);
}


bool
cartographer_ros_msgs__msg__MetricLabel__Sequence__init(cartographer_ros_msgs__msg__MetricLabel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartographer_ros_msgs__msg__MetricLabel * data = NULL;
  if (size) {
    data = (cartographer_ros_msgs__msg__MetricLabel *)calloc(size, sizeof(cartographer_ros_msgs__msg__MetricLabel));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__MetricLabel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__MetricLabel__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__MetricLabel__Sequence__fini(cartographer_ros_msgs__msg__MetricLabel__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartographer_ros_msgs__msg__MetricLabel__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__MetricLabel__Sequence *
cartographer_ros_msgs__msg__MetricLabel__Sequence__create(size_t size)
{
  cartographer_ros_msgs__msg__MetricLabel__Sequence * array = (cartographer_ros_msgs__msg__MetricLabel__Sequence *)malloc(sizeof(cartographer_ros_msgs__msg__MetricLabel__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__MetricLabel__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__MetricLabel__Sequence__destroy(cartographer_ros_msgs__msg__MetricLabel__Sequence * array)
{
  if (array) {
    cartographer_ros_msgs__msg__MetricLabel__Sequence__fini(array);
  }
  free(array);
}

bool
cartographer_ros_msgs__msg__MetricLabel__Sequence__are_equal(const cartographer_ros_msgs__msg__MetricLabel__Sequence * lhs, const cartographer_ros_msgs__msg__MetricLabel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartographer_ros_msgs__msg__MetricLabel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartographer_ros_msgs__msg__MetricLabel__Sequence__copy(
  const cartographer_ros_msgs__msg__MetricLabel__Sequence * input,
  cartographer_ros_msgs__msg__MetricLabel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartographer_ros_msgs__msg__MetricLabel);
    cartographer_ros_msgs__msg__MetricLabel * data =
      (cartographer_ros_msgs__msg__MetricLabel *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartographer_ros_msgs__msg__MetricLabel__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cartographer_ros_msgs__msg__MetricLabel__fini(&data[i]);
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
    if (!cartographer_ros_msgs__msg__MetricLabel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
