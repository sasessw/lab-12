cmake_minimum_required(VERSION 3.6)
project(curl_lesson)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lcurl")

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(curl_lesson ${SOURCE_FILES})
target_link_libraries(curl_lesson curl)