cmake_minimum_required(VERSION 3.10)

# Project name and version
project(Rubik VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++ -Wall -Wextra -Wpedantic")

# Source files
file(GLOB SOURCES "source/*.cpp")

# Add executable for debug build
add_executable(rubik_debug ${SOURCES})
target_compile_options(rubik_debug PRIVATE -g)
set_target_properties(rubik_debug PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/build"
	OUTPUT_NAME "rubik_debug"
)

# Add executable for release build
add_executable(rubik ${SOURCES})
target_compile_options(rubik PRIVATE -O3)
set_target_properties(rubik PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/build"
	OUTPUT_NAME "rubik"
)

# Custom clean target
# add_custom_target(clean
# COMMAND ${CMAKE_COMMAND} -E remove -f ${CMAKE_BINARY_DIR}/build/rubik ${CMAKE_BINARY_DIR}/build/rubik_debug
# COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_BINARY_DIR}/build
# )
