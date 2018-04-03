cmake_minimum_required (VERSION 2.8.11)
project (uniquelab_test)

add_subdirectory(googletest ${CMAKE_BINARY_DIR}/googletest)

add_executable(set_test set_test.cpp)

add_library(set set.cpp)

target_link_libraries(set_test set gtest_main)
