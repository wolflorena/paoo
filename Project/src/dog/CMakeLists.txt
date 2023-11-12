add_library(dog STATIC dog.cpp lazyDog/LazyDog.cpp)

add_subdirectory(lazyDog)

target_link_libraries(dog PUBLIC lazyDog)

target_include_directories(dog PUBLIC "${PROJECT_SOURCE_DIR}")
target_include_directories(dog PUBLIC "${PROJECT_SOURCE_DIR}/dog/lazyDog")
target_include_directories(dog PUBLIC "${PROJECT_SOURCE_DIR}/animal")
