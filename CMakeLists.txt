cmake_minimum_required (VERSION 2.8.11)
project (heapsort_test)

add_subdirectory(googletest ${CMAKE_BINARY_DIR}/googletest)

add_executable(test test.cpp)
target_link_libraries(test gtest_main)


add_library(priority_queue priority_queue.cpp)

add_library(set set.cpp)

SET (CUSTOM_STL set priority_queue)

target_link_libraries(CUSTOM_STL test)
