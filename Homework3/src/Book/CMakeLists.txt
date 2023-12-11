add_library(Book STATIC Book.cpp)

target_include_directories(Book PUBLIC "${PROJECT_SOURCE_DIR}")
target_include_directories(Book PUBLIC "${PROJECT_SOURCE_DIR}/Library")
target_include_directories(Book PUBLIC "${PROJECT_SOURCE_DIR}/Mutex")
