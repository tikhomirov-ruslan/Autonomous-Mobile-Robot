// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dobot_msgs:srv/EvaluatePTPTrajectory.idl
// generated code does not contain a copyright notice
#include "dobot_msgs/srv/detail/evaluate_ptp_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dobot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dobot_msgs/srv/detail/evaluate_ptp_trajectory__struct.h"
#include "dobot_msgs/srv/detail/evaluate_ptp_trajectory__functions.h"
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


// forward declare type support functions


using _EvaluatePTPTrajectory_Request__ros_msg_type = dobot_msgs__srv__EvaluatePTPTrajectory_Request;

static bool _EvaluatePTPTrajectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EvaluatePTPTrajectory_Request__ros_msg_type * ros_message = static_cast<const _EvaluatePTPTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target
  {
    size_t size = 4;
    auto array_ptr = ros_message->target;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: motion_type
  {
    cdr << ros_message->motion_type;
  }

  return true;
}

static bool _EvaluatePTPTrajectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EvaluatePTPTrajectory_Request__ros_msg_type * ros_message = static_cast<_EvaluatePTPTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target
  {
    size_t size = 4;
    auto array_ptr = ros_message->target;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: motion_type
  {
    cdr >> ros_message->motion_type;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_msgs
size_t get_serialized_size_dobot_msgs__srv__EvaluatePTPTrajectory_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EvaluatePTPTrajectory_Request__ros_msg_type * ros_message = static_cast<const _EvaluatePTPTrajectory_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name target
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->target;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motion_type
  {
    size_t item_size = sizeof(ros_message->motion_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EvaluatePTPTrajectory_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_msgs__srv__EvaluatePTPTrajectory_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_msgs
size_t max_serialized_size_dobot_msgs__srv__EvaluatePTPTrajectory_Request(
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

  // member: target
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: motion_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dobot_msgs__srv__EvaluatePTPTrajectory_Request;
    is_plain =
      (
      offsetof(DataType, motion_type) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EvaluatePTPTrajectory_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dobot_msgs__srv__EvaluatePTPTrajectory_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EvaluatePTPTrajectory_Request = {
  "dobot_msgs::srv",
  "EvaluatePTPTrajectory_Request",
  _EvaluatePTPTrajectory_Request__cdr_serialize,
  _EvaluatePTPTrajectory_Request__cdr_deserialize,
  _EvaluatePTPTrajectory_Request__get_serialized_size,
  _EvaluatePTPTrajectory_Request__max_serialized_size
};

static rosidl_message_type_support_t _EvaluatePTPTrajectory_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EvaluatePTPTrajectory_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs, srv, EvaluatePTPTrajectory_Request)() {
  return &_EvaluatePTPTrajectory_Request__type_support;
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
// #include "dobot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dobot_msgs/srv/detail/evaluate_ptp_trajectory__struct.h"
// already included above
// #include "dobot_msgs/srv/detail/evaluate_ptp_trajectory__functions.h"
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

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _EvaluatePTPTrajectory_Response__ros_msg_type = dobot_msgs__srv__EvaluatePTPTrajectory_Response;

static bool _EvaluatePTPTrajectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EvaluatePTPTrajectory_Response__ros_msg_type * ros_message = static_cast<const _EvaluatePTPTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: is_valid
  {
    cdr << (ros_message->is_valid ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

static bool _EvaluatePTPTrajectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EvaluatePTPTrajectory_Response__ros_msg_type * ros_message = static_cast<_EvaluatePTPTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: is_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_msgs
size_t get_serialized_size_dobot_msgs__srv__EvaluatePTPTrajectory_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EvaluatePTPTrajectory_Response__ros_msg_type * ros_message = static_cast<const _EvaluatePTPTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_valid
  {
    size_t item_size = sizeof(ros_message->is_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _EvaluatePTPTrajectory_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_msgs__srv__EvaluatePTPTrajectory_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_msgs
size_t max_serialized_size_dobot_msgs__srv__EvaluatePTPTrajectory_Response(
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

  // member: is_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
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
    using DataType = dobot_msgs__srv__EvaluatePTPTrajectory_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EvaluatePTPTrajectory_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dobot_msgs__srv__EvaluatePTPTrajectory_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EvaluatePTPTrajectory_Response = {
  "dobot_msgs::srv",
  "EvaluatePTPTrajectory_Response",
  _EvaluatePTPTrajectory_Response__cdr_serialize,
  _EvaluatePTPTrajectory_Response__cdr_deserialize,
  _EvaluatePTPTrajectory_Response__get_serialized_size,
  _EvaluatePTPTrajectory_Response__max_serialized_size
};

static rosidl_message_type_support_t _EvaluatePTPTrajectory_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EvaluatePTPTrajectory_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs, srv, EvaluatePTPTrajectory_Response)() {
  return &_EvaluatePTPTrajectory_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dobot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dobot_msgs/srv/evaluate_ptp_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t EvaluatePTPTrajectory__callbacks = {
  "dobot_msgs::srv",
  "EvaluatePTPTrajectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs, srv, EvaluatePTPTrajectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs, srv, EvaluatePTPTrajectory_Response)(),
};

static rosidl_service_type_support_t EvaluatePTPTrajectory__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &EvaluatePTPTrajectory__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs, srv, EvaluatePTPTrajectory)() {
  return &EvaluatePTPTrajectory__handle;
}

#if defined(__cplusplus)
}
#endif
