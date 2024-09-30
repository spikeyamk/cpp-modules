cmake_minimum_required(VERSION 3.28 FATAL_ERROR)

get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
set(CMAKE_CXX_COMPILER g++-14)
project(${PROJECT_NAME} CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    add_compile_options(-fmodules-ts)
endif()

add_executable(${PROJECT_NAME}
	main.cpp
)

add_subdirectory(example_module)
target_link_libraries(${PROJECT_NAME} PRIVATE example_module)
