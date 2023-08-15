cmake_minimum_required(VERSION 3.15)
project(video-editor CXX)
set(CMAKE_CXX_STANDARD 17)

# FFmpeg directories
include_directories(${CMAKE_SOURCE_DIR}/lib/ffmpeg/include)
link_directories(${CMAKE_SOURCE_DIR}/lib/ffmpeg/lib)

# FFmpeg libraries to link against
set(FFMPEG_LIBRARIES avcodec avformat avutil swscale swresample)

# GLFW and other dependencies
add_subdirectory(./lib/glfw)

# Executable
add_executable(video-editor ./src/main.cpp)

# Linking
target_link_libraries(video-editor glfw ${FFMPEG_LIBRARIES})
