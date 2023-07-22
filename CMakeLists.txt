# For support, go to https://cliutils.gitlab.io/modern-cmake/chapters/basics.html.

cmake_minimum_required(VERSION 3.27.0)
if (${CMAKE_VERSION} VERSION_LESS 3.27)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
else()
    cmake_policy(VERSION 3.27)
endif()


# Get rid of warnings
add_definitions(-w)


# Setting project
project(HMS VERSION 1.0
            DESCRIPTION "Hospital Management System"
            LANGUAGES CXX)



# Executables
add_executable(${PROJECT_NAME} main.cpp)


# Here, we don't need to include full path in .cpp files
include_directories(includes/ includes/inventory includes/lib includes/licensure includes/people includes/schedule)


# # Include CMake file from "src" directory, allowing creation of src target
# add_subdirectory(src)
# # Link main project target with the src target
# target_link_libraries(${PROJECT_NAME} src)

# Include CMake file from "lib" directory, allowing creation of lib target
add_subdirectory(lib)
# Link main project target with the lib target
target_link_libraries(${PROJECT_NAME} lib)
