// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from orange_robot_interfaces:srv/CalculateAngles.idl
// generated code does not contain a copyright notice
#include "orange_robot_interfaces/srv/detail/calculate_angles__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
orange_robot_interfaces__srv__CalculateAngles_Request__init(orange_robot_interfaces__srv__CalculateAngles_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
orange_robot_interfaces__srv__CalculateAngles_Request__fini(orange_robot_interfaces__srv__CalculateAngles_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
orange_robot_interfaces__srv__CalculateAngles_Request__are_equal(const orange_robot_interfaces__srv__CalculateAngles_Request * lhs, const orange_robot_interfaces__srv__CalculateAngles_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
orange_robot_interfaces__srv__CalculateAngles_Request__copy(
  const orange_robot_interfaces__srv__CalculateAngles_Request * input,
  orange_robot_interfaces__srv__CalculateAngles_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

orange_robot_interfaces__srv__CalculateAngles_Request *
orange_robot_interfaces__srv__CalculateAngles_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  orange_robot_interfaces__srv__CalculateAngles_Request * msg = (orange_robot_interfaces__srv__CalculateAngles_Request *)allocator.allocate(sizeof(orange_robot_interfaces__srv__CalculateAngles_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(orange_robot_interfaces__srv__CalculateAngles_Request));
  bool success = orange_robot_interfaces__srv__CalculateAngles_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
orange_robot_interfaces__srv__CalculateAngles_Request__destroy(orange_robot_interfaces__srv__CalculateAngles_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    orange_robot_interfaces__srv__CalculateAngles_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
orange_robot_interfaces__srv__CalculateAngles_Request__Sequence__init(orange_robot_interfaces__srv__CalculateAngles_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  orange_robot_interfaces__srv__CalculateAngles_Request * data = NULL;

  if (size) {
    data = (orange_robot_interfaces__srv__CalculateAngles_Request *)allocator.zero_allocate(size, sizeof(orange_robot_interfaces__srv__CalculateAngles_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = orange_robot_interfaces__srv__CalculateAngles_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        orange_robot_interfaces__srv__CalculateAngles_Request__fini(&data[i - 1]);
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
orange_robot_interfaces__srv__CalculateAngles_Request__Sequence__fini(orange_robot_interfaces__srv__CalculateAngles_Request__Sequence * array)
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
      orange_robot_interfaces__srv__CalculateAngles_Request__fini(&array->data[i]);
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

orange_robot_interfaces__srv__CalculateAngles_Request__Sequence *
orange_robot_interfaces__srv__CalculateAngles_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  orange_robot_interfaces__srv__CalculateAngles_Request__Sequence * array = (orange_robot_interfaces__srv__CalculateAngles_Request__Sequence *)allocator.allocate(sizeof(orange_robot_interfaces__srv__CalculateAngles_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = orange_robot_interfaces__srv__CalculateAngles_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
orange_robot_interfaces__srv__CalculateAngles_Request__Sequence__destroy(orange_robot_interfaces__srv__CalculateAngles_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    orange_robot_interfaces__srv__CalculateAngles_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
orange_robot_interfaces__srv__CalculateAngles_Request__Sequence__are_equal(const orange_robot_interfaces__srv__CalculateAngles_Request__Sequence * lhs, const orange_robot_interfaces__srv__CalculateAngles_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!orange_robot_interfaces__srv__CalculateAngles_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
orange_robot_interfaces__srv__CalculateAngles_Request__Sequence__copy(
  const orange_robot_interfaces__srv__CalculateAngles_Request__Sequence * input,
  orange_robot_interfaces__srv__CalculateAngles_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(orange_robot_interfaces__srv__CalculateAngles_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    orange_robot_interfaces__srv__CalculateAngles_Request * data =
      (orange_robot_interfaces__srv__CalculateAngles_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!orange_robot_interfaces__srv__CalculateAngles_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          orange_robot_interfaces__srv__CalculateAngles_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!orange_robot_interfaces__srv__CalculateAngles_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
orange_robot_interfaces__srv__CalculateAngles_Response__init(orange_robot_interfaces__srv__CalculateAngles_Response * msg)
{
  if (!msg) {
    return false;
  }
  // angles
  if (!rosidl_runtime_c__float__Sequence__init(&msg->angles, 0)) {
    orange_robot_interfaces__srv__CalculateAngles_Response__fini(msg);
    return false;
  }
  return true;
}

void
orange_robot_interfaces__srv__CalculateAngles_Response__fini(orange_robot_interfaces__srv__CalculateAngles_Response * msg)
{
  if (!msg) {
    return;
  }
  // angles
  rosidl_runtime_c__float__Sequence__fini(&msg->angles);
}

bool
orange_robot_interfaces__srv__CalculateAngles_Response__are_equal(const orange_robot_interfaces__srv__CalculateAngles_Response * lhs, const orange_robot_interfaces__srv__CalculateAngles_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angles
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->angles), &(rhs->angles)))
  {
    return false;
  }
  return true;
}

bool
orange_robot_interfaces__srv__CalculateAngles_Response__copy(
  const orange_robot_interfaces__srv__CalculateAngles_Response * input,
  orange_robot_interfaces__srv__CalculateAngles_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // angles
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->angles), &(output->angles)))
  {
    return false;
  }
  return true;
}

orange_robot_interfaces__srv__CalculateAngles_Response *
orange_robot_interfaces__srv__CalculateAngles_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  orange_robot_interfaces__srv__CalculateAngles_Response * msg = (orange_robot_interfaces__srv__CalculateAngles_Response *)allocator.allocate(sizeof(orange_robot_interfaces__srv__CalculateAngles_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(orange_robot_interfaces__srv__CalculateAngles_Response));
  bool success = orange_robot_interfaces__srv__CalculateAngles_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
orange_robot_interfaces__srv__CalculateAngles_Response__destroy(orange_robot_interfaces__srv__CalculateAngles_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    orange_robot_interfaces__srv__CalculateAngles_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
orange_robot_interfaces__srv__CalculateAngles_Response__Sequence__init(orange_robot_interfaces__srv__CalculateAngles_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  orange_robot_interfaces__srv__CalculateAngles_Response * data = NULL;

  if (size) {
    data = (orange_robot_interfaces__srv__CalculateAngles_Response *)allocator.zero_allocate(size, sizeof(orange_robot_interfaces__srv__CalculateAngles_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = orange_robot_interfaces__srv__CalculateAngles_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        orange_robot_interfaces__srv__CalculateAngles_Response__fini(&data[i - 1]);
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
orange_robot_interfaces__srv__CalculateAngles_Response__Sequence__fini(orange_robot_interfaces__srv__CalculateAngles_Response__Sequence * array)
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
      orange_robot_interfaces__srv__CalculateAngles_Response__fini(&array->data[i]);
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

orange_robot_interfaces__srv__CalculateAngles_Response__Sequence *
orange_robot_interfaces__srv__CalculateAngles_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  orange_robot_interfaces__srv__CalculateAngles_Response__Sequence * array = (orange_robot_interfaces__srv__CalculateAngles_Response__Sequence *)allocator.allocate(sizeof(orange_robot_interfaces__srv__CalculateAngles_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = orange_robot_interfaces__srv__CalculateAngles_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
orange_robot_interfaces__srv__CalculateAngles_Response__Sequence__destroy(orange_robot_interfaces__srv__CalculateAngles_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    orange_robot_interfaces__srv__CalculateAngles_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
orange_robot_interfaces__srv__CalculateAngles_Response__Sequence__are_equal(const orange_robot_interfaces__srv__CalculateAngles_Response__Sequence * lhs, const orange_robot_interfaces__srv__CalculateAngles_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!orange_robot_interfaces__srv__CalculateAngles_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
orange_robot_interfaces__srv__CalculateAngles_Response__Sequence__copy(
  const orange_robot_interfaces__srv__CalculateAngles_Response__Sequence * input,
  orange_robot_interfaces__srv__CalculateAngles_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(orange_robot_interfaces__srv__CalculateAngles_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    orange_robot_interfaces__srv__CalculateAngles_Response * data =
      (orange_robot_interfaces__srv__CalculateAngles_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!orange_robot_interfaces__srv__CalculateAngles_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          orange_robot_interfaces__srv__CalculateAngles_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!orange_robot_interfaces__srv__CalculateAngles_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
