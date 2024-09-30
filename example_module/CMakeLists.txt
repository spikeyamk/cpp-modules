get_filename_component(MODULE_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
add_library(${MODULE_NAME})
target_sources(${MODULE_NAME}
	PUBLIC
	FILE_SET CXX_MODULES
	BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}
	FILES
	example_module.cpp
)