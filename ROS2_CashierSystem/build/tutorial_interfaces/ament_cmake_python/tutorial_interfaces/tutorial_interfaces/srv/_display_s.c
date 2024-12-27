// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tutorial_interfaces:srv/Display.idl
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
#include "tutorial_interfaces/srv/detail/display__struct.h"
#include "tutorial_interfaces/srv/detail/display__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tutorial_interfaces__srv__display__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("tutorial_interfaces.srv._display.Display_Request", full_classname_dest, 48) == 0);
  }
  tutorial_interfaces__srv__Display_Request * ros_message = _ros_message;
  {  // number
    PyObject * field = PyObject_GetAttrString(_pymsg, "number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tutorial_interfaces__srv__display__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Display_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tutorial_interfaces.srv._display");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Display_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tutorial_interfaces__srv__Display_Request * ros_message = (tutorial_interfaces__srv__Display_Request *)raw_ros_message;
  {  // number
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number", field);
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
// #include "tutorial_interfaces/srv/detail/display__struct.h"
// already included above
// #include "tutorial_interfaces/srv/detail/display__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tutorial_interfaces__srv__display__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("tutorial_interfaces.srv._display.Display_Response", full_classname_dest, 49) == 0);
  }
  tutorial_interfaces__srv__Display_Response * ros_message = _ros_message;
  {  // bill_no
    PyObject * field = PyObject_GetAttrString(_pymsg, "bill_no");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bill_no = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->time, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // unit_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "unit_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->unit_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // unit_no
    PyObject * field = PyObject_GetAttrString(_pymsg, "unit_no");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->unit_no = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // unit_price
    PyObject * field = PyObject_GetAttrString(_pymsg, "unit_price");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->unit_price = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total
    PyObject * field = PyObject_GetAttrString(_pymsg, "total");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tutorial_interfaces__srv__display__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Display_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tutorial_interfaces.srv._display");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Display_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tutorial_interfaces__srv__Display_Response * ros_message = (tutorial_interfaces__srv__Display_Response *)raw_ros_message;
  {  // bill_no
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bill_no);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bill_no", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->time.data,
      strlen(ros_message->time.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unit_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->unit_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unit_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unit_no
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->unit_no);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unit_no", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unit_price
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->unit_price);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unit_price", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
