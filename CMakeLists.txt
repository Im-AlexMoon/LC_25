cmake_minimum_required(VERSION 3.10)
project(LC_25 CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add source files
file(GLOB SOURCES "src/*.cpp")

# Create executable for each problem
foreach(source_file ${SOURCES})
    get_filename_component(filename ${source_file} NAME_WE)
    add_executable(${filename} ${source_file})

    # Optional: Add compiler flags for better diagnostics
    if(MSVC)
        target_compile_options(${filename} PRIVATE /W4)
    else()
        target_compile_options(${filename} PRIVATE -Wall -Wextra -Wpedantic)
    endif()
endforeach()
