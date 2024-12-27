# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_Updater_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED Updater_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(Updater_FOUND FALSE)
  elseif(NOT Updater_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(Updater_FOUND FALSE)
  endif()
  return()
endif()
set(_Updater_CONFIG_INCLUDED TRUE)

# output package information
if(NOT Updater_FIND_QUIETLY)
  message(STATUS "Found Updater: 0.0.0 (${Updater_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'Updater' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${Updater_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(Updater_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${Updater_DIR}/${_extra}")
endforeach()
