// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_action_interfaces:action/MyInterfaces.idl
// generated code does not contain a copyright notice

#ifndef MY_ACTION_INTERFACES__ACTION__DETAIL__MY_INTERFACES__STRUCT_H_
#define MY_ACTION_INTERFACES__ACTION__DETAIL__MY_INTERFACES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MyInterfaces in the package my_action_interfaces.
typedef struct my_action_interfaces__action__MyInterfaces_Goal
{
  int32_t order;
} my_action_interfaces__action__MyInterfaces_Goal;

// Struct for a sequence of my_action_interfaces__action__MyInterfaces_Goal.
typedef struct my_action_interfaces__action__MyInterfaces_Goal__Sequence
{
  my_action_interfaces__action__MyInterfaces_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interfaces__action__MyInterfaces_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/MyInterfaces in the package my_action_interfaces.
typedef struct my_action_interfaces__action__MyInterfaces_Result
{
  rosidl_runtime_c__int32__Sequence sequence;
} my_action_interfaces__action__MyInterfaces_Result;

// Struct for a sequence of my_action_interfaces__action__MyInterfaces_Result.
typedef struct my_action_interfaces__action__MyInterfaces_Result__Sequence
{
  my_action_interfaces__action__MyInterfaces_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interfaces__action__MyInterfaces_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'partial_sequence'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/MyInterfaces in the package my_action_interfaces.
typedef struct my_action_interfaces__action__MyInterfaces_Feedback
{
  rosidl_runtime_c__int32__Sequence partial_sequence;
} my_action_interfaces__action__MyInterfaces_Feedback;

// Struct for a sequence of my_action_interfaces__action__MyInterfaces_Feedback.
typedef struct my_action_interfaces__action__MyInterfaces_Feedback__Sequence
{
  my_action_interfaces__action__MyInterfaces_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interfaces__action__MyInterfaces_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "my_action_interfaces/action/detail/my_interfaces__struct.h"

/// Struct defined in action/MyInterfaces in the package my_action_interfaces.
typedef struct my_action_interfaces__action__MyInterfaces_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_action_interfaces__action__MyInterfaces_Goal goal;
} my_action_interfaces__action__MyInterfaces_SendGoal_Request;

// Struct for a sequence of my_action_interfaces__action__MyInterfaces_SendGoal_Request.
typedef struct my_action_interfaces__action__MyInterfaces_SendGoal_Request__Sequence
{
  my_action_interfaces__action__MyInterfaces_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interfaces__action__MyInterfaces_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MyInterfaces in the package my_action_interfaces.
typedef struct my_action_interfaces__action__MyInterfaces_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} my_action_interfaces__action__MyInterfaces_SendGoal_Response;

// Struct for a sequence of my_action_interfaces__action__MyInterfaces_SendGoal_Response.
typedef struct my_action_interfaces__action__MyInterfaces_SendGoal_Response__Sequence
{
  my_action_interfaces__action__MyInterfaces_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interfaces__action__MyInterfaces_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MyInterfaces in the package my_action_interfaces.
typedef struct my_action_interfaces__action__MyInterfaces_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} my_action_interfaces__action__MyInterfaces_GetResult_Request;

// Struct for a sequence of my_action_interfaces__action__MyInterfaces_GetResult_Request.
typedef struct my_action_interfaces__action__MyInterfaces_GetResult_Request__Sequence
{
  my_action_interfaces__action__MyInterfaces_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interfaces__action__MyInterfaces_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "my_action_interfaces/action/detail/my_interfaces__struct.h"

/// Struct defined in action/MyInterfaces in the package my_action_interfaces.
typedef struct my_action_interfaces__action__MyInterfaces_GetResult_Response
{
  int8_t status;
  my_action_interfaces__action__MyInterfaces_Result result;
} my_action_interfaces__action__MyInterfaces_GetResult_Response;

// Struct for a sequence of my_action_interfaces__action__MyInterfaces_GetResult_Response.
typedef struct my_action_interfaces__action__MyInterfaces_GetResult_Response__Sequence
{
  my_action_interfaces__action__MyInterfaces_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interfaces__action__MyInterfaces_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "my_action_interfaces/action/detail/my_interfaces__struct.h"

/// Struct defined in action/MyInterfaces in the package my_action_interfaces.
typedef struct my_action_interfaces__action__MyInterfaces_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_action_interfaces__action__MyInterfaces_Feedback feedback;
} my_action_interfaces__action__MyInterfaces_FeedbackMessage;

// Struct for a sequence of my_action_interfaces__action__MyInterfaces_FeedbackMessage.
typedef struct my_action_interfaces__action__MyInterfaces_FeedbackMessage__Sequence
{
  my_action_interfaces__action__MyInterfaces_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_action_interfaces__action__MyInterfaces_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ACTION_INTERFACES__ACTION__DETAIL__MY_INTERFACES__STRUCT_H_
