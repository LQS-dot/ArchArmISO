#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Ogg::ogg" for configuration ""
set_property(TARGET Ogg::ogg APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(Ogg::ogg PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libogg.so.0.8.5"
  IMPORTED_SONAME_NOCONFIG "libogg.so.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS Ogg::ogg )
list(APPEND _IMPORT_CHECK_FILES_FOR_Ogg::ogg "${_IMPORT_PREFIX}/lib/libogg.so.0.8.5" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
