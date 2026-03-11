// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from my_action_interfaces:action/PatrolTest.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_action_interfaces/action/detail/patrol_test__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PatrolTest_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PatrolTest_Goal_type_support_ids_t;

static const _PatrolTest_Goal_type_support_ids_t _PatrolTest_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PatrolTest_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PatrolTest_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PatrolTest_Goal_type_support_symbol_names_t _PatrolTest_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, PatrolTest_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, PatrolTest_Goal)),
  }
};

typedef struct _PatrolTest_Goal_type_support_data_t
{
  void * data[2];
} _PatrolTest_Goal_type_support_data_t;

static _PatrolTest_Goal_type_support_data_t _PatrolTest_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PatrolTest_Goal_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_PatrolTest_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PatrolTest_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PatrolTest_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PatrolTest_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PatrolTest_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interfaces::action::PatrolTest_Goal>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::PatrolTest_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, PatrolTest_Goal)() {
  return get_message_type_support_handle<my_action_interfaces::action::PatrolTest_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interfaces/action/detail/patrol_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PatrolTest_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PatrolTest_Result_type_support_ids_t;

static const _PatrolTest_Result_type_support_ids_t _PatrolTest_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PatrolTest_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PatrolTest_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PatrolTest_Result_type_support_symbol_names_t _PatrolTest_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, PatrolTest_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, PatrolTest_Result)),
  }
};

typedef struct _PatrolTest_Result_type_support_data_t
{
  void * data[2];
} _PatrolTest_Result_type_support_data_t;

static _PatrolTest_Result_type_support_data_t _PatrolTest_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PatrolTest_Result_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_PatrolTest_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PatrolTest_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PatrolTest_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PatrolTest_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PatrolTest_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interfaces::action::PatrolTest_Result>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::PatrolTest_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, PatrolTest_Result)() {
  return get_message_type_support_handle<my_action_interfaces::action::PatrolTest_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interfaces/action/detail/patrol_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PatrolTest_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PatrolTest_Feedback_type_support_ids_t;

static const _PatrolTest_Feedback_type_support_ids_t _PatrolTest_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PatrolTest_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PatrolTest_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PatrolTest_Feedback_type_support_symbol_names_t _PatrolTest_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, PatrolTest_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, PatrolTest_Feedback)),
  }
};

typedef struct _PatrolTest_Feedback_type_support_data_t
{
  void * data[2];
} _PatrolTest_Feedback_type_support_data_t;

static _PatrolTest_Feedback_type_support_data_t _PatrolTest_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PatrolTest_Feedback_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_PatrolTest_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PatrolTest_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PatrolTest_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PatrolTest_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PatrolTest_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interfaces::action::PatrolTest_Feedback>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::PatrolTest_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, PatrolTest_Feedback)() {
  return get_message_type_support_handle<my_action_interfaces::action::PatrolTest_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interfaces/action/detail/patrol_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PatrolTest_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PatrolTest_SendGoal_Request_type_support_ids_t;

static const _PatrolTest_SendGoal_Request_type_support_ids_t _PatrolTest_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PatrolTest_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PatrolTest_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PatrolTest_SendGoal_Request_type_support_symbol_names_t _PatrolTest_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, PatrolTest_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, PatrolTest_SendGoal_Request)),
  }
};

typedef struct _PatrolTest_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PatrolTest_SendGoal_Request_type_support_data_t;

static _PatrolTest_SendGoal_Request_type_support_data_t _PatrolTest_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PatrolTest_SendGoal_Request_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_PatrolTest_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PatrolTest_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PatrolTest_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PatrolTest_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PatrolTest_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interfaces::action::PatrolTest_SendGoal_Request>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::PatrolTest_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, PatrolTest_SendGoal_Request)() {
  return get_message_type_support_handle<my_action_interfaces::action::PatrolTest_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interfaces/action/detail/patrol_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PatrolTest_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PatrolTest_SendGoal_Response_type_support_ids_t;

static const _PatrolTest_SendGoal_Response_type_support_ids_t _PatrolTest_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PatrolTest_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PatrolTest_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PatrolTest_SendGoal_Response_type_support_symbol_names_t _PatrolTest_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, PatrolTest_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, PatrolTest_SendGoal_Response)),
  }
};

typedef struct _PatrolTest_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PatrolTest_SendGoal_Response_type_support_data_t;

static _PatrolTest_SendGoal_Response_type_support_data_t _PatrolTest_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PatrolTest_SendGoal_Response_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_PatrolTest_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PatrolTest_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PatrolTest_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PatrolTest_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PatrolTest_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interfaces::action::PatrolTest_SendGoal_Response>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::PatrolTest_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, PatrolTest_SendGoal_Response)() {
  return get_message_type_support_handle<my_action_interfaces::action::PatrolTest_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_action_interfaces/action/detail/patrol_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PatrolTest_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PatrolTest_SendGoal_type_support_ids_t;

static const _PatrolTest_SendGoal_type_support_ids_t _PatrolTest_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PatrolTest_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PatrolTest_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PatrolTest_SendGoal_type_support_symbol_names_t _PatrolTest_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, PatrolTest_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, PatrolTest_SendGoal)),
  }
};

typedef struct _PatrolTest_SendGoal_type_support_data_t
{
  void * data[2];
} _PatrolTest_SendGoal_type_support_data_t;

static _PatrolTest_SendGoal_type_support_data_t _PatrolTest_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PatrolTest_SendGoal_service_typesupport_map = {
  2,
  "my_action_interfaces",
  &_PatrolTest_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PatrolTest_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PatrolTest_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PatrolTest_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PatrolTest_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_action_interfaces::action::PatrolTest_SendGoal>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::PatrolTest_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, PatrolTest_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<my_action_interfaces::action::PatrolTest_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interfaces/action/detail/patrol_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PatrolTest_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PatrolTest_GetResult_Request_type_support_ids_t;

static const _PatrolTest_GetResult_Request_type_support_ids_t _PatrolTest_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PatrolTest_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PatrolTest_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PatrolTest_GetResult_Request_type_support_symbol_names_t _PatrolTest_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, PatrolTest_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, PatrolTest_GetResult_Request)),
  }
};

typedef struct _PatrolTest_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PatrolTest_GetResult_Request_type_support_data_t;

static _PatrolTest_GetResult_Request_type_support_data_t _PatrolTest_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PatrolTest_GetResult_Request_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_PatrolTest_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PatrolTest_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PatrolTest_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PatrolTest_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PatrolTest_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interfaces::action::PatrolTest_GetResult_Request>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::PatrolTest_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, PatrolTest_GetResult_Request)() {
  return get_message_type_support_handle<my_action_interfaces::action::PatrolTest_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interfaces/action/detail/patrol_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PatrolTest_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PatrolTest_GetResult_Response_type_support_ids_t;

static const _PatrolTest_GetResult_Response_type_support_ids_t _PatrolTest_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PatrolTest_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PatrolTest_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PatrolTest_GetResult_Response_type_support_symbol_names_t _PatrolTest_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, PatrolTest_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, PatrolTest_GetResult_Response)),
  }
};

typedef struct _PatrolTest_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PatrolTest_GetResult_Response_type_support_data_t;

static _PatrolTest_GetResult_Response_type_support_data_t _PatrolTest_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PatrolTest_GetResult_Response_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_PatrolTest_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PatrolTest_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PatrolTest_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PatrolTest_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PatrolTest_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interfaces::action::PatrolTest_GetResult_Response>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::PatrolTest_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, PatrolTest_GetResult_Response)() {
  return get_message_type_support_handle<my_action_interfaces::action::PatrolTest_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_action_interfaces/action/detail/patrol_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PatrolTest_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PatrolTest_GetResult_type_support_ids_t;

static const _PatrolTest_GetResult_type_support_ids_t _PatrolTest_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PatrolTest_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PatrolTest_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PatrolTest_GetResult_type_support_symbol_names_t _PatrolTest_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, PatrolTest_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, PatrolTest_GetResult)),
  }
};

typedef struct _PatrolTest_GetResult_type_support_data_t
{
  void * data[2];
} _PatrolTest_GetResult_type_support_data_t;

static _PatrolTest_GetResult_type_support_data_t _PatrolTest_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PatrolTest_GetResult_service_typesupport_map = {
  2,
  "my_action_interfaces",
  &_PatrolTest_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PatrolTest_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PatrolTest_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PatrolTest_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PatrolTest_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_action_interfaces::action::PatrolTest_GetResult>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::PatrolTest_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, PatrolTest_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<my_action_interfaces::action::PatrolTest_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interfaces/action/detail/patrol_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PatrolTest_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PatrolTest_FeedbackMessage_type_support_ids_t;

static const _PatrolTest_FeedbackMessage_type_support_ids_t _PatrolTest_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PatrolTest_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PatrolTest_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PatrolTest_FeedbackMessage_type_support_symbol_names_t _PatrolTest_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, PatrolTest_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, PatrolTest_FeedbackMessage)),
  }
};

typedef struct _PatrolTest_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PatrolTest_FeedbackMessage_type_support_data_t;

static _PatrolTest_FeedbackMessage_type_support_data_t _PatrolTest_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PatrolTest_FeedbackMessage_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_PatrolTest_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PatrolTest_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PatrolTest_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PatrolTest_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PatrolTest_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interfaces::action::PatrolTest_FeedbackMessage>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::PatrolTest_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, PatrolTest_FeedbackMessage)() {
  return get_message_type_support_handle<my_action_interfaces::action::PatrolTest_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "my_action_interfaces/action/detail/patrol_test__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace my_action_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t PatrolTest_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<my_action_interfaces::action::PatrolTest>()
{
  using ::my_action_interfaces::action::rosidl_typesupport_cpp::PatrolTest_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  PatrolTest_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::my_action_interfaces::action::PatrolTest::Impl::SendGoalService>();
  PatrolTest_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::my_action_interfaces::action::PatrolTest::Impl::GetResultService>();
  PatrolTest_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::my_action_interfaces::action::PatrolTest::Impl::CancelGoalService>();
  PatrolTest_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::my_action_interfaces::action::PatrolTest::Impl::FeedbackMessage>();
  PatrolTest_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::my_action_interfaces::action::PatrolTest::Impl::GoalStatusMessage>();
  return &PatrolTest_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, PatrolTest)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<my_action_interfaces::action::PatrolTest>();
}

#ifdef __cplusplus
}
#endif
