cmake_minimum_required(VERSION 3.10)

project(main VERSION 1.0)

add_executable(Main main.cpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Library)
add_subdirectory(Book)
add_subdirectory(Mutex)

target_link_libraries(Main PUBLIC Library)
target_link_libraries(Main PUBLIC Book)
target_link_libraries(Main PUBLIC Mutex)

target_include_directories(Main PUBLIC "${PROJECT_SOURCE_DIR}")
target_include_directories(Main PUBLIC "${PROJECT_SOURCE_DIR}/Library")
target_include_directories(Main PUBLIC "${PROJECT_SOURCE_DIR}/Book")
target_include_directories(Main PUBLIC "${PROJECT_SOURCE_DIR}/Mutex")

