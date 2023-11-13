add_library(cat STATIC cat.cpp)

# target_link_libraries(cat PUBLIC lazyDog)

target_include_directories(cat PUBLIC "${PROJECT_SOURCE_DIR}")
# target_include_directories(dog PUBLIC "${PROJECT_SOURCE_DIR}/dog/lazyDog")
target_include_directories(cat PUBLIC "${PROJECT_SOURCE_DIR}/animal")
