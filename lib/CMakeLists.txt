# Gather all .cpp files in the "lib" directory
file(GLOB_RECURSE source_files "*.cpp")

# Create a library target for the library
add_library(lib ${source_files})

# # Set include directory for the library to use its headers
# target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/includes/lib)