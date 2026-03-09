// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from smart_shop_interfaces:srv/DiscountApply.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "smart_shop_interfaces/srv/detail/discount_apply__struct.h"
#include "smart_shop_interfaces/srv/detail/discount_apply__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool smart_shop_interfaces__srv__discount_apply__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("smart_shop_interfaces.srv._discount_apply.DiscountApply_Request", full_classname_dest, 63) == 0);
  }
  smart_shop_interfaces__srv__DiscountApply_Request * ros_message = _ros_message;
  {  // item_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "item_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->item_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // original_amount
    PyObject * field = PyObject_GetAttrString(_pymsg, "original_amount");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->original_amount = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * smart_shop_interfaces__srv__discount_apply__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DiscountApply_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("smart_shop_interfaces.srv._discount_apply");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DiscountApply_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  smart_shop_interfaces__srv__DiscountApply_Request * ros_message = (smart_shop_interfaces__srv__DiscountApply_Request *)raw_ros_message;
  {  // item_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->item_id.data,
      strlen(ros_message->item_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "item_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // original_amount
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->original_amount);
    {
      int rc = PyObject_SetAttrString(_pymessage, "original_amount", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "smart_shop_interfaces/srv/detail/discount_apply__struct.h"
// already included above
// #include "smart_shop_interfaces/srv/detail/discount_apply__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool smart_shop_interfaces__srv__discount_apply__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("smart_shop_interfaces.srv._discount_apply.DiscountApply_Response", full_classname_dest, 64) == 0);
  }
  smart_shop_interfaces__srv__DiscountApply_Response * ros_message = _ros_message;
  {  // discounted_amount
    PyObject * field = PyObject_GetAttrString(_pymsg, "discounted_amount");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->discounted_amount = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // discount_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "discount_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->discount_rate = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * smart_shop_interfaces__srv__discount_apply__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DiscountApply_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("smart_shop_interfaces.srv._discount_apply");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DiscountApply_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  smart_shop_interfaces__srv__DiscountApply_Response * ros_message = (smart_shop_interfaces__srv__DiscountApply_Response *)raw_ros_message;
  {  // discounted_amount
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->discounted_amount);
    {
      int rc = PyObject_SetAttrString(_pymessage, "discounted_amount", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // discount_rate
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->discount_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "discount_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->reason.data,
      strlen(ros_message->reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
