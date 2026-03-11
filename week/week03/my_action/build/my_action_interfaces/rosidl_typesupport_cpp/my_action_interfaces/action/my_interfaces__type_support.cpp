// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from my_action_interfaces:action/MyInterfaces.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_action_interfaces/action/detail/my_interfaces__struct.hpp"
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

typedef struct _MyInterfaces_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyInterfaces_Goal_type_support_ids_t;

static const _MyInterfaces_Goal_type_support_ids_t _MyInterfaces_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyInterfaces_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyInterfaces_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyInterfaces_Goal_type_support_symbol_names_t _MyInterfaces_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, MyInterfaces_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, MyInterfaces_Goal)),
  }
};

typedef struct _MyInterfaces_Goal_type_support_data_t
{
  void * data[2];
} _MyInterfaces_Goal_type_support_data_t;

static _MyInterfaces_Goal_type_support_data_t _MyInterfaces_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyInterfaces_Goal_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_MyInterfaces_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MyInterfaces_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MyInterfaces_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyInterfaces_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyInterfaces_Goal_message_typesupport_map),
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
get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_Goal>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::MyInterfaces_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, MyInterfaces_Goal)() {
  return get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_Goal>();
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
// #include "my_action_interfaces/action/detail/my_interfaces__struct.hpp"
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

typedef struct _MyInterfaces_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyInterfaces_Result_type_support_ids_t;

static const _MyInterfaces_Result_type_support_ids_t _MyInterfaces_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyInterfaces_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyInterfaces_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyInterfaces_Result_type_support_symbol_names_t _MyInterfaces_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, MyInterfaces_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, MyInterfaces_Result)),
  }
};

typedef struct _MyInterfaces_Result_type_support_data_t
{
  void * data[2];
} _MyInterfaces_Result_type_support_data_t;

static _MyInterfaces_Result_type_support_data_t _MyInterfaces_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyInterfaces_Result_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_MyInterfaces_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MyInterfaces_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MyInterfaces_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyInterfaces_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyInterfaces_Result_message_typesupport_map),
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
get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_Result>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::MyInterfaces_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, MyInterfaces_Result)() {
  return get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_Result>();
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
// #include "my_action_interfaces/action/detail/my_interfaces__struct.hpp"
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

typedef struct _MyInterfaces_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyInterfaces_Feedback_type_support_ids_t;

static const _MyInterfaces_Feedback_type_support_ids_t _MyInterfaces_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyInterfaces_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyInterfaces_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyInterfaces_Feedback_type_support_symbol_names_t _MyInterfaces_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, MyInterfaces_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, MyInterfaces_Feedback)),
  }
};

typedef struct _MyInterfaces_Feedback_type_support_data_t
{
  void * data[2];
} _MyInterfaces_Feedback_type_support_data_t;

static _MyInterfaces_Feedback_type_support_data_t _MyInterfaces_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyInterfaces_Feedback_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_MyInterfaces_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MyInterfaces_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MyInterfaces_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyInterfaces_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyInterfaces_Feedback_message_typesupport_map),
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
get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_Feedback>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::MyInterfaces_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, MyInterfaces_Feedback)() {
  return get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_Feedback>();
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
// #include "my_action_interfaces/action/detail/my_interfaces__struct.hpp"
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

typedef struct _MyInterfaces_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyInterfaces_SendGoal_Request_type_support_ids_t;

static const _MyInterfaces_SendGoal_Request_type_support_ids_t _MyInterfaces_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyInterfaces_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyInterfaces_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyInterfaces_SendGoal_Request_type_support_symbol_names_t _MyInterfaces_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, MyInterfaces_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, MyInterfaces_SendGoal_Request)),
  }
};

typedef struct _MyInterfaces_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MyInterfaces_SendGoal_Request_type_support_data_t;

static _MyInterfaces_SendGoal_Request_type_support_data_t _MyInterfaces_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyInterfaces_SendGoal_Request_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_MyInterfaces_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MyInterfaces_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MyInterfaces_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyInterfaces_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyInterfaces_SendGoal_Request_message_typesupport_map),
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
get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_SendGoal_Request>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::MyInterfaces_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, MyInterfaces_SendGoal_Request)() {
  return get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_SendGoal_Request>();
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
// #include "my_action_interfaces/action/detail/my_interfaces__struct.hpp"
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

typedef struct _MyInterfaces_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyInterfaces_SendGoal_Response_type_support_ids_t;

static const _MyInterfaces_SendGoal_Response_type_support_ids_t _MyInterfaces_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyInterfaces_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyInterfaces_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyInterfaces_SendGoal_Response_type_support_symbol_names_t _MyInterfaces_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, MyInterfaces_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, MyInterfaces_SendGoal_Response)),
  }
};

typedef struct _MyInterfaces_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MyInterfaces_SendGoal_Response_type_support_data_t;

static _MyInterfaces_SendGoal_Response_type_support_data_t _MyInterfaces_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyInterfaces_SendGoal_Response_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_MyInterfaces_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MyInterfaces_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MyInterfaces_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyInterfaces_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyInterfaces_SendGoal_Response_message_typesupport_map),
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
get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_SendGoal_Response>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::MyInterfaces_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, MyInterfaces_SendGoal_Response)() {
  return get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_action_interfaces/action/detail/my_interfaces__struct.hpp"
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

typedef struct _MyInterfaces_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyInterfaces_SendGoal_type_support_ids_t;

static const _MyInterfaces_SendGoal_type_support_ids_t _MyInterfaces_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyInterfaces_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyInterfaces_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyInterfaces_SendGoal_type_support_symbol_names_t _MyInterfaces_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, MyInterfaces_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, MyInterfaces_SendGoal)),
  }
};

typedef struct _MyInterfaces_SendGoal_type_support_data_t
{
  void * data[2];
} _MyInterfaces_SendGoal_type_support_data_t;

static _MyInterfaces_SendGoal_type_support_data_t _MyInterfaces_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyInterfaces_SendGoal_service_typesupport_map = {
  2,
  "my_action_interfaces",
  &_MyInterfaces_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MyInterfaces_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MyInterfaces_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MyInterfaces_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyInterfaces_SendGoal_service_typesupport_map),
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
get_service_type_support_handle<my_action_interfaces::action::MyInterfaces_SendGoal>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::MyInterfaces_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, MyInterfaces_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<my_action_interfaces::action::MyInterfaces_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interfaces/action/detail/my_interfaces__struct.hpp"
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

typedef struct _MyInterfaces_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyInterfaces_GetResult_Request_type_support_ids_t;

static const _MyInterfaces_GetResult_Request_type_support_ids_t _MyInterfaces_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyInterfaces_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyInterfaces_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyInterfaces_GetResult_Request_type_support_symbol_names_t _MyInterfaces_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, MyInterfaces_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, MyInterfaces_GetResult_Request)),
  }
};

typedef struct _MyInterfaces_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MyInterfaces_GetResult_Request_type_support_data_t;

static _MyInterfaces_GetResult_Request_type_support_data_t _MyInterfaces_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyInterfaces_GetResult_Request_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_MyInterfaces_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MyInterfaces_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MyInterfaces_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyInterfaces_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyInterfaces_GetResult_Request_message_typesupport_map),
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
get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_GetResult_Request>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::MyInterfaces_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, MyInterfaces_GetResult_Request)() {
  return get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_GetResult_Request>();
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
// #include "my_action_interfaces/action/detail/my_interfaces__struct.hpp"
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

typedef struct _MyInterfaces_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyInterfaces_GetResult_Response_type_support_ids_t;

static const _MyInterfaces_GetResult_Response_type_support_ids_t _MyInterfaces_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyInterfaces_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyInterfaces_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyInterfaces_GetResult_Response_type_support_symbol_names_t _MyInterfaces_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, MyInterfaces_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, MyInterfaces_GetResult_Response)),
  }
};

typedef struct _MyInterfaces_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MyInterfaces_GetResult_Response_type_support_data_t;

static _MyInterfaces_GetResult_Response_type_support_data_t _MyInterfaces_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyInterfaces_GetResult_Response_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_MyInterfaces_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MyInterfaces_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MyInterfaces_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyInterfaces_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyInterfaces_GetResult_Response_message_typesupport_map),
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
get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_GetResult_Response>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::MyInterfaces_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, MyInterfaces_GetResult_Response)() {
  return get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_GetResult_Response>();
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
// #include "my_action_interfaces/action/detail/my_interfaces__struct.hpp"
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

typedef struct _MyInterfaces_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyInterfaces_GetResult_type_support_ids_t;

static const _MyInterfaces_GetResult_type_support_ids_t _MyInterfaces_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyInterfaces_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyInterfaces_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyInterfaces_GetResult_type_support_symbol_names_t _MyInterfaces_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, MyInterfaces_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, MyInterfaces_GetResult)),
  }
};

typedef struct _MyInterfaces_GetResult_type_support_data_t
{
  void * data[2];
} _MyInterfaces_GetResult_type_support_data_t;

static _MyInterfaces_GetResult_type_support_data_t _MyInterfaces_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyInterfaces_GetResult_service_typesupport_map = {
  2,
  "my_action_interfaces",
  &_MyInterfaces_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MyInterfaces_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MyInterfaces_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MyInterfaces_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyInterfaces_GetResult_service_typesupport_map),
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
get_service_type_support_handle<my_action_interfaces::action::MyInterfaces_GetResult>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::MyInterfaces_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, MyInterfaces_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<my_action_interfaces::action::MyInterfaces_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interfaces/action/detail/my_interfaces__struct.hpp"
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

typedef struct _MyInterfaces_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyInterfaces_FeedbackMessage_type_support_ids_t;

static const _MyInterfaces_FeedbackMessage_type_support_ids_t _MyInterfaces_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MyInterfaces_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyInterfaces_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyInterfaces_FeedbackMessage_type_support_symbol_names_t _MyInterfaces_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interfaces, action, MyInterfaces_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interfaces, action, MyInterfaces_FeedbackMessage)),
  }
};

typedef struct _MyInterfaces_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MyInterfaces_FeedbackMessage_type_support_data_t;

static _MyInterfaces_FeedbackMessage_type_support_data_t _MyInterfaces_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyInterfaces_FeedbackMessage_message_typesupport_map = {
  2,
  "my_action_interfaces",
  &_MyInterfaces_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MyInterfaces_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MyInterfaces_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyInterfaces_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyInterfaces_FeedbackMessage_message_typesupport_map),
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
get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_FeedbackMessage>()
{
  return &::my_action_interfaces::action::rosidl_typesupport_cpp::MyInterfaces_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, MyInterfaces_FeedbackMessage)() {
  return get_message_type_support_handle<my_action_interfaces::action::MyInterfaces_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "my_action_interfaces/action/detail/my_interfaces__struct.hpp"
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

static rosidl_action_type_support_t MyInterfaces_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<my_action_interfaces::action::MyInterfaces>()
{
  using ::my_action_interfaces::action::rosidl_typesupport_cpp::MyInterfaces_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  MyInterfaces_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::my_action_interfaces::action::MyInterfaces::Impl::SendGoalService>();
  MyInterfaces_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::my_action_interfaces::action::MyInterfaces::Impl::GetResultService>();
  MyInterfaces_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::my_action_interfaces::action::MyInterfaces::Impl::CancelGoalService>();
  MyInterfaces_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::my_action_interfaces::action::MyInterfaces::Impl::FeedbackMessage>();
  MyInterfaces_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::my_action_interfaces::action::MyInterfaces::Impl::GoalStatusMessage>();
  return &MyInterfaces_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interfaces, action, MyInterfaces)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<my_action_interfaces::action::MyInterfaces>();
}

#ifdef __cplusplus
}
#endif
