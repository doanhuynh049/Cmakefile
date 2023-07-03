cmake_minimum_required(VERSION 3.0)
project(CMakefile)
set(CMAKE_C_STANDARD 11)

set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add the source file to the project
# add_library(my_executable src/dataalginment.cpp)
add_executable(my_executable
    src/main.c
    src/typedef.c
)

# add header file to the project
target_include_directories(my_executable PRIVATE ${CMAKE_CUTTENT_SOURCE_DIR}/include)
target_sources(my_executable PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/typedef.h
)
target_sources(my_executable PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/dataalignment.h)

# Link against any necessary libraries
target_link_libraries(my_executable)

# set the output directory for the executable and library
set_target_properties(my_executable PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# add custom commadn to run the executable after building it
add_custom_command(TARGET my_executable POST_BUILD
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/my_executable
    COMMENT "Running my_executable")