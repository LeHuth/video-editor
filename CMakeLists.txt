cmake_minimum_required(VERSION 3.15)
project(video-editor CXX)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(./lib/glfw)

add_executable(video-editor ./src/main.cpp)

target_link_libraries(video-editor glfw)