# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_Display_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED Display_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(Display_FOUND FALSE)
  elseif(NOT Display_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(Display_FOUND FALSE)
  endif()
  return()
endif()
set(_Display_CONFIG_INCLUDED TRUE)

# output package information
if(NOT Display_FIND_QUIETLY)
  message(STATUS "Found Display: 0.0.0 (${Display_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'Display' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${Display_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(Display_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${Display_DIR}/${_extra}")
endforeach()
