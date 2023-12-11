add_library(Mutex STATIC Mutex.cpp)

target_include_directories(Mutex PUBLIC "${PROJECT_SOURCE_DIR}")
target_include_directories(Mutex PUBLIC "${PROJECT_SOURCE_DIR}/Library")
target_include_directories(Mutex PUBLIC "${PROJECT_SOURCE_DIR}/Book")
