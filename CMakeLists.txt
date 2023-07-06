cmake_minimum_required(VERSION 3.0)
project(CMakefile)

# Set the C/C++ standard to C11 C++17
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add the C source file to the project
add_library(C_library src/typedef.c)

# add the CXX source file to the project
add_executable(my_executable
    src/main.cpp
    src/dataalginment.cpp
    src/virtualkeyword.cpp
    src/shape.cpp
    src/virtualdestructor.cpp
    src/template.cpp
    src/constructor.cpp
    src/copyconstructor.cpp
    src/destructor.cpp
    src/accessmodifier.cpp
    src/friendclass.cpp
)

# add header file to the project
target_include_directories(my_executable PRIVATE ${CMAKE_CUTTENT_SOURCE_DIR}/include)
target_sources(my_executable PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/typedef.h
)

# CXX
target_sources(my_executable PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/dataalignment.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/virtualkeyword.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/virtualdestructor.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/template.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/constructor.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/copyconstructor.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/destructor.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/accessmodifier.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/friendclass.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/shape.h)

# Link against any necessary libraries
target_link_libraries(my_executable C_library)

# set the output directory for the executable and library
set_target_properties(my_executable PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build/bin)

set_target_properties(C_library PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build/lib)

# add custom commadn to run the executable after building it
add_custom_command(TARGET my_executable POST_BUILD
    COMMENT "Running my_executable"
    COMMAND ${CMAKE_CURRENT_BINARY_DIR}/bin/my_executable
    COMMAND ${CMAKE_COMMAND} -E remove ${CMAKE_CURRENT_BINARY_DIR}/bin/my_executable
)