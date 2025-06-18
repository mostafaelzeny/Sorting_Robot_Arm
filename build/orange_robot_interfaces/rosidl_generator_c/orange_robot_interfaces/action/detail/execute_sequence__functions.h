// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from orange_robot_interfaces:action/ExecuteSequence.idl
// generated code does not contain a copyright notice

#ifndef ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__FUNCTIONS_H_
#define ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "orange_robot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "orange_robot_interfaces/action/detail/execute_sequence__struct.h"

/// Initialize action/ExecuteSequence message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * orange_robot_interfaces__action__ExecuteSequence_Goal
 * )) before or use
 * orange_robot_interfaces__action__ExecuteSequence_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Goal__init(orange_robot_interfaces__action__ExecuteSequence_Goal * msg);

/// Finalize action/ExecuteSequence message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_Goal__fini(orange_robot_interfaces__action__ExecuteSequence_Goal * msg);

/// Create action/ExecuteSequence message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * orange_robot_interfaces__action__ExecuteSequence_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_Goal *
orange_robot_interfaces__action__ExecuteSequence_Goal__create();

/// Destroy action/ExecuteSequence message.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_Goal__destroy(orange_robot_interfaces__action__ExecuteSequence_Goal * msg);

/// Check for action/ExecuteSequence message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Goal__are_equal(const orange_robot_interfaces__action__ExecuteSequence_Goal * lhs, const orange_robot_interfaces__action__ExecuteSequence_Goal * rhs);

/// Copy a action/ExecuteSequence message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Goal__copy(
  const orange_robot_interfaces__action__ExecuteSequence_Goal * input,
  orange_robot_interfaces__action__ExecuteSequence_Goal * output);

/// Initialize array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the number of elements and calls
 * orange_robot_interfaces__action__ExecuteSequence_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence__init(orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence * array, size_t size);

/// Finalize array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence__fini(orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence * array);

/// Create array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the array and calls
 * orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence *
orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence__create(size_t size);

/// Destroy array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence__destroy(orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence * array);

/// Check for action/ExecuteSequence message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence__are_equal(const orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence * lhs, const orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence * rhs);

/// Copy an array of action/ExecuteSequence messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence__copy(
  const orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence * input,
  orange_robot_interfaces__action__ExecuteSequence_Goal__Sequence * output);

/// Initialize action/ExecuteSequence message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * orange_robot_interfaces__action__ExecuteSequence_Result
 * )) before or use
 * orange_robot_interfaces__action__ExecuteSequence_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Result__init(orange_robot_interfaces__action__ExecuteSequence_Result * msg);

/// Finalize action/ExecuteSequence message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_Result__fini(orange_robot_interfaces__action__ExecuteSequence_Result * msg);

/// Create action/ExecuteSequence message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * orange_robot_interfaces__action__ExecuteSequence_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_Result *
orange_robot_interfaces__action__ExecuteSequence_Result__create();

/// Destroy action/ExecuteSequence message.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_Result__destroy(orange_robot_interfaces__action__ExecuteSequence_Result * msg);

/// Check for action/ExecuteSequence message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Result__are_equal(const orange_robot_interfaces__action__ExecuteSequence_Result * lhs, const orange_robot_interfaces__action__ExecuteSequence_Result * rhs);

/// Copy a action/ExecuteSequence message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Result__copy(
  const orange_robot_interfaces__action__ExecuteSequence_Result * input,
  orange_robot_interfaces__action__ExecuteSequence_Result * output);

/// Initialize array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the number of elements and calls
 * orange_robot_interfaces__action__ExecuteSequence_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Result__Sequence__init(orange_robot_interfaces__action__ExecuteSequence_Result__Sequence * array, size_t size);

/// Finalize array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_Result__Sequence__fini(orange_robot_interfaces__action__ExecuteSequence_Result__Sequence * array);

/// Create array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the array and calls
 * orange_robot_interfaces__action__ExecuteSequence_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_Result__Sequence *
orange_robot_interfaces__action__ExecuteSequence_Result__Sequence__create(size_t size);

/// Destroy array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_Result__Sequence__destroy(orange_robot_interfaces__action__ExecuteSequence_Result__Sequence * array);

/// Check for action/ExecuteSequence message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Result__Sequence__are_equal(const orange_robot_interfaces__action__ExecuteSequence_Result__Sequence * lhs, const orange_robot_interfaces__action__ExecuteSequence_Result__Sequence * rhs);

/// Copy an array of action/ExecuteSequence messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Result__Sequence__copy(
  const orange_robot_interfaces__action__ExecuteSequence_Result__Sequence * input,
  orange_robot_interfaces__action__ExecuteSequence_Result__Sequence * output);

/// Initialize action/ExecuteSequence message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * orange_robot_interfaces__action__ExecuteSequence_Feedback
 * )) before or use
 * orange_robot_interfaces__action__ExecuteSequence_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Feedback__init(orange_robot_interfaces__action__ExecuteSequence_Feedback * msg);

/// Finalize action/ExecuteSequence message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_Feedback__fini(orange_robot_interfaces__action__ExecuteSequence_Feedback * msg);

/// Create action/ExecuteSequence message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * orange_robot_interfaces__action__ExecuteSequence_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_Feedback *
orange_robot_interfaces__action__ExecuteSequence_Feedback__create();

/// Destroy action/ExecuteSequence message.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_Feedback__destroy(orange_robot_interfaces__action__ExecuteSequence_Feedback * msg);

/// Check for action/ExecuteSequence message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Feedback__are_equal(const orange_robot_interfaces__action__ExecuteSequence_Feedback * lhs, const orange_robot_interfaces__action__ExecuteSequence_Feedback * rhs);

/// Copy a action/ExecuteSequence message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Feedback__copy(
  const orange_robot_interfaces__action__ExecuteSequence_Feedback * input,
  orange_robot_interfaces__action__ExecuteSequence_Feedback * output);

/// Initialize array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the number of elements and calls
 * orange_robot_interfaces__action__ExecuteSequence_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence__init(orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence__fini(orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence * array);

/// Create array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the array and calls
 * orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence *
orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence__destroy(orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence * array);

/// Check for action/ExecuteSequence message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence__are_equal(const orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence * lhs, const orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence * rhs);

/// Copy an array of action/ExecuteSequence messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence__copy(
  const orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence * input,
  orange_robot_interfaces__action__ExecuteSequence_Feedback__Sequence * output);

/// Initialize action/ExecuteSequence message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request
 * )) before or use
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__init(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request * msg);

/// Finalize action/ExecuteSequence message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__fini(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request * msg);

/// Create action/ExecuteSequence message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request *
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__create();

/// Destroy action/ExecuteSequence message.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__destroy(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request * msg);

/// Check for action/ExecuteSequence message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__are_equal(const orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request * lhs, const orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request * rhs);

/// Copy a action/ExecuteSequence message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__copy(
  const orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request * input,
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request * output);

/// Initialize array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the number of elements and calls
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence__init(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence__fini(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence * array);

/// Create array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the array and calls
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence *
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence__destroy(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence * array);

/// Check for action/ExecuteSequence message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence__are_equal(const orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence * lhs, const orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ExecuteSequence messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence__copy(
  const orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence * input,
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Request__Sequence * output);

/// Initialize action/ExecuteSequence message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response
 * )) before or use
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__init(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response * msg);

/// Finalize action/ExecuteSequence message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__fini(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response * msg);

/// Create action/ExecuteSequence message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response *
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__create();

/// Destroy action/ExecuteSequence message.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__destroy(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response * msg);

/// Check for action/ExecuteSequence message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__are_equal(const orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response * lhs, const orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response * rhs);

/// Copy a action/ExecuteSequence message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__copy(
  const orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response * input,
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response * output);

/// Initialize array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the number of elements and calls
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence__init(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence__fini(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence * array);

/// Create array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the array and calls
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence *
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence__destroy(orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence * array);

/// Check for action/ExecuteSequence message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence__are_equal(const orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence * lhs, const orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ExecuteSequence messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence__copy(
  const orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence * input,
  orange_robot_interfaces__action__ExecuteSequence_SendGoal_Response__Sequence * output);

/// Initialize action/ExecuteSequence message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Request
 * )) before or use
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__init(orange_robot_interfaces__action__ExecuteSequence_GetResult_Request * msg);

/// Finalize action/ExecuteSequence message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__fini(orange_robot_interfaces__action__ExecuteSequence_GetResult_Request * msg);

/// Create action/ExecuteSequence message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_GetResult_Request *
orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__create();

/// Destroy action/ExecuteSequence message.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__destroy(orange_robot_interfaces__action__ExecuteSequence_GetResult_Request * msg);

/// Check for action/ExecuteSequence message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__are_equal(const orange_robot_interfaces__action__ExecuteSequence_GetResult_Request * lhs, const orange_robot_interfaces__action__ExecuteSequence_GetResult_Request * rhs);

/// Copy a action/ExecuteSequence message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__copy(
  const orange_robot_interfaces__action__ExecuteSequence_GetResult_Request * input,
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Request * output);

/// Initialize array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the number of elements and calls
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence__init(orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence__fini(orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence * array);

/// Create array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the array and calls
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence *
orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence__destroy(orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence * array);

/// Check for action/ExecuteSequence message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence__are_equal(const orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence * lhs, const orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ExecuteSequence messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence__copy(
  const orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence * input,
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Request__Sequence * output);

/// Initialize action/ExecuteSequence message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Response
 * )) before or use
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__init(orange_robot_interfaces__action__ExecuteSequence_GetResult_Response * msg);

/// Finalize action/ExecuteSequence message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__fini(orange_robot_interfaces__action__ExecuteSequence_GetResult_Response * msg);

/// Create action/ExecuteSequence message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_GetResult_Response *
orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__create();

/// Destroy action/ExecuteSequence message.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__destroy(orange_robot_interfaces__action__ExecuteSequence_GetResult_Response * msg);

/// Check for action/ExecuteSequence message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__are_equal(const orange_robot_interfaces__action__ExecuteSequence_GetResult_Response * lhs, const orange_robot_interfaces__action__ExecuteSequence_GetResult_Response * rhs);

/// Copy a action/ExecuteSequence message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__copy(
  const orange_robot_interfaces__action__ExecuteSequence_GetResult_Response * input,
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Response * output);

/// Initialize array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the number of elements and calls
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence__init(orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence__fini(orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence * array);

/// Create array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the array and calls
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence *
orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence__destroy(orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence * array);

/// Check for action/ExecuteSequence message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence__are_equal(const orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence * lhs, const orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ExecuteSequence messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence__copy(
  const orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence * input,
  orange_robot_interfaces__action__ExecuteSequence_GetResult_Response__Sequence * output);

/// Initialize action/ExecuteSequence message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage
 * )) before or use
 * orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__init(orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage * msg);

/// Finalize action/ExecuteSequence message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__fini(orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage * msg);

/// Create action/ExecuteSequence message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage *
orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__create();

/// Destroy action/ExecuteSequence message.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__destroy(orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage * msg);

/// Check for action/ExecuteSequence message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__are_equal(const orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage * lhs, const orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage * rhs);

/// Copy a action/ExecuteSequence message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__copy(
  const orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage * input,
  orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage * output);

/// Initialize array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the number of elements and calls
 * orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence__init(orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence__fini(orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence * array);

/// Create array of action/ExecuteSequence messages.
/**
 * It allocates the memory for the array and calls
 * orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence *
orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ExecuteSequence messages.
/**
 * It calls
 * orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
void
orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence__destroy(orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence * array);

/// Check for action/ExecuteSequence message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence__are_equal(const orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence * lhs, const orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ExecuteSequence messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_orange_robot_interfaces
bool
orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence__copy(
  const orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence * input,
  orange_robot_interfaces__action__ExecuteSequence_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ORANGE_ROBOT_INTERFACES__ACTION__DETAIL__EXECUTE_SEQUENCE__FUNCTIONS_H_
