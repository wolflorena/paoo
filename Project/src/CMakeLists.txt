cmake_minimum_required(VERSION 3.10)

project(main VERSION 1.0)

add_executable(Main main.cpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(dog)
add_subdirectory(cat)
add_subdirectory(animal)

target_link_libraries(Main PUBLIC dog)
target_link_libraries(Main PUBLIC cat)
target_link_libraries(Main PUBLIC animal)

target_include_directories(Main PUBLIC "${PROJECT_SOURCE_DIR}/dog")
target_include_directories(Main PUBLIC "${PROJECT_SOURCE_DIR}/animal")
target_include_directories(Main PUBLIC "${PROJECT_SOURCE_DIR}/cat")
