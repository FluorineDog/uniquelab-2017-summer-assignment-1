cmake_minimum_required (VERSION 2.8.11)
project (heapsort_test)

add_subdirectory(googletest ${CMAKE_BINARY_DIR}/googletest)

add_executable(test test.cpp)
target_link_libraries(test gtest_main)
