add_library(Library STATIC Library.cpp)

target_include_directories(Library PUBLIC "${PROJECT_SOURCE_DIR}")
target_include_directories(Library PUBLIC "${PROJECT_SOURCE_DIR}/Book")
target_include_directories(Library PUBLIC "${PROJECT_SOURCE_DIR}/Mutex")