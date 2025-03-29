cmake_minimum_required(VERSION 3.10)
project(MergeFiles)

set(CMAKE_CXX_STANDARD 17)

# Add source files
set(SOURCES
    src/main.cpp
    src/FileMerger.cpp
    src/ThreadPool.cpp
    src/Utils.cpp
)

# Add include directories
include_directories(include)

# Create the executable
add_executable(merge-files ${SOURCES})

# Enable testing
enable_testing()
add_subdirectory(tests)