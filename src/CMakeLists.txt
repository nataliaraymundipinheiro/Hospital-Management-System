# Gather all .cpp files in the "lib" directory
file(GLOB source_files "*.cpp")

# Create a library target for the library
add_library(lib ${source_files})