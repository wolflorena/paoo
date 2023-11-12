add_library(lazyDog STATIC lazyDog.cpp)

target_include_directories(lazyDog PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(lazyDog PUBLIC "${PROJECT_SOURCE_DIR}/dog")
target_include_directories(lazyDog PUBLIC "${PROJECT_SOURCE_DIR}/animal")