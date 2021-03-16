cmake_minimum_required(VERSION 3.17)

project(FFmpeg-cpp VERSION 1.0)
conrigure_file(FFmpegConfig.h.in FFmpegConfig.h)

target_include_directories(FFmpeg-cpp PUBLIC
"${PROJECT_BINARY_DIR}"
)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Codecs)
add_subdirectory(Demuxing)
add_subdirectory(Frame_Sinks)
add_subdirectory(Info)
add_subdirectory(Muxing)
add_subdirectory(Sources)
