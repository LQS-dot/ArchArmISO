#----------------------------------------------------------------
# Generated CMake target import file for configuration "None".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "json-c::json-c" for configuration "None"
set_property(TARGET json-c::json-c APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(json-c::json-c PROPERTIES
  IMPORTED_LOCATION_NONE "/usr/lib/libjson-c.so.5.2.0"
  IMPORTED_SONAME_NONE "libjson-c.so.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS json-c::json-c )
list(APPEND _IMPORT_CHECK_FILES_FOR_json-c::json-c "/usr/lib/libjson-c.so.5.2.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
