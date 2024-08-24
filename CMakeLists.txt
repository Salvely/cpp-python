cmake_minimum_required(VERSION 3.20)
project(python)
set(CMAKE_CXX_STANDARD 17)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})

find_package(Boost REQUIRED COMPONENTS regex filesystem)
include_directories(${Boost_INCLUDE_DIRS})
add_executable(python main.cpp interpreter.cpp interpreter.h error.cpp error.h runtime.cpp runtime.h)
target_link_libraries(python ${Boost_LIBRARIES})