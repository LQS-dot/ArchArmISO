#----------------------------------------------------------------
# Generated CMake target import file for configuration "None".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "SampleRate::samplerate" for configuration "None"
set_property(TARGET SampleRate::samplerate APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(SampleRate::samplerate PROPERTIES
  IMPORTED_LOCATION_NONE "${_IMPORT_PREFIX}/lib/libsamplerate.so.0.2.2"
  IMPORTED_SONAME_NONE "libsamplerate.so.0"
  )

list(APPEND _cmake_import_check_targets SampleRate::samplerate )
list(APPEND _cmake_import_check_files_for_SampleRate::samplerate "${_IMPORT_PREFIX}/lib/libsamplerate.so.0.2.2" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
