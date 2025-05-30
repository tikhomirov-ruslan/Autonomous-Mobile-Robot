// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dobot_msgs:srv/EvaluatePTPTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__FUNCTIONS_H_
#define DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dobot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "dobot_msgs/srv/detail/evaluate_ptp_trajectory__struct.h"

/// Initialize srv/EvaluatePTPTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dobot_msgs__srv__EvaluatePTPTrajectory_Request
 * )) before or use
 * dobot_msgs__srv__EvaluatePTPTrajectory_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__srv__EvaluatePTPTrajectory_Request__init(dobot_msgs__srv__EvaluatePTPTrajectory_Request * msg);

/// Finalize srv/EvaluatePTPTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__srv__EvaluatePTPTrajectory_Request__fini(dobot_msgs__srv__EvaluatePTPTrajectory_Request * msg);

/// Create srv/EvaluatePTPTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dobot_msgs__srv__EvaluatePTPTrajectory_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
dobot_msgs__srv__EvaluatePTPTrajectory_Request *
dobot_msgs__srv__EvaluatePTPTrajectory_Request__create();

/// Destroy srv/EvaluatePTPTrajectory message.
/**
 * It calls
 * dobot_msgs__srv__EvaluatePTPTrajectory_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__srv__EvaluatePTPTrajectory_Request__destroy(dobot_msgs__srv__EvaluatePTPTrajectory_Request * msg);

/// Check for srv/EvaluatePTPTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__srv__EvaluatePTPTrajectory_Request__are_equal(const dobot_msgs__srv__EvaluatePTPTrajectory_Request * lhs, const dobot_msgs__srv__EvaluatePTPTrajectory_Request * rhs);

/// Copy a srv/EvaluatePTPTrajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__srv__EvaluatePTPTrajectory_Request__copy(
  const dobot_msgs__srv__EvaluatePTPTrajectory_Request * input,
  dobot_msgs__srv__EvaluatePTPTrajectory_Request * output);

/// Initialize array of srv/EvaluatePTPTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * dobot_msgs__srv__EvaluatePTPTrajectory_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__init(dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * array, size_t size);

/// Finalize array of srv/EvaluatePTPTrajectory messages.
/**
 * It calls
 * dobot_msgs__srv__EvaluatePTPTrajectory_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__fini(dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * array);

/// Create array of srv/EvaluatePTPTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence *
dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__create(size_t size);

/// Destroy array of srv/EvaluatePTPTrajectory messages.
/**
 * It calls
 * dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__destroy(dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * array);

/// Check for srv/EvaluatePTPTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__are_equal(const dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * lhs, const dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * rhs);

/// Copy an array of srv/EvaluatePTPTrajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence__copy(
  const dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * input,
  dobot_msgs__srv__EvaluatePTPTrajectory_Request__Sequence * output);

/// Initialize srv/EvaluatePTPTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dobot_msgs__srv__EvaluatePTPTrajectory_Response
 * )) before or use
 * dobot_msgs__srv__EvaluatePTPTrajectory_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__srv__EvaluatePTPTrajectory_Response__init(dobot_msgs__srv__EvaluatePTPTrajectory_Response * msg);

/// Finalize srv/EvaluatePTPTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__srv__EvaluatePTPTrajectory_Response__fini(dobot_msgs__srv__EvaluatePTPTrajectory_Response * msg);

/// Create srv/EvaluatePTPTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dobot_msgs__srv__EvaluatePTPTrajectory_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
dobot_msgs__srv__EvaluatePTPTrajectory_Response *
dobot_msgs__srv__EvaluatePTPTrajectory_Response__create();

/// Destroy srv/EvaluatePTPTrajectory message.
/**
 * It calls
 * dobot_msgs__srv__EvaluatePTPTrajectory_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__srv__EvaluatePTPTrajectory_Response__destroy(dobot_msgs__srv__EvaluatePTPTrajectory_Response * msg);

/// Check for srv/EvaluatePTPTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__srv__EvaluatePTPTrajectory_Response__are_equal(const dobot_msgs__srv__EvaluatePTPTrajectory_Response * lhs, const dobot_msgs__srv__EvaluatePTPTrajectory_Response * rhs);

/// Copy a srv/EvaluatePTPTrajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__srv__EvaluatePTPTrajectory_Response__copy(
  const dobot_msgs__srv__EvaluatePTPTrajectory_Response * input,
  dobot_msgs__srv__EvaluatePTPTrajectory_Response * output);

/// Initialize array of srv/EvaluatePTPTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * dobot_msgs__srv__EvaluatePTPTrajectory_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__init(dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * array, size_t size);

/// Finalize array of srv/EvaluatePTPTrajectory messages.
/**
 * It calls
 * dobot_msgs__srv__EvaluatePTPTrajectory_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__fini(dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * array);

/// Create array of srv/EvaluatePTPTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence *
dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__create(size_t size);

/// Destroy array of srv/EvaluatePTPTrajectory messages.
/**
 * It calls
 * dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
void
dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__destroy(dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * array);

/// Check for srv/EvaluatePTPTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__are_equal(const dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * lhs, const dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * rhs);

/// Copy an array of srv/EvaluatePTPTrajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_dobot_msgs
bool
dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence__copy(
  const dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * input,
  dobot_msgs__srv__EvaluatePTPTrajectory_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_MSGS__SRV__DETAIL__EVALUATE_PTP_TRAJECTORY__FUNCTIONS_H_
