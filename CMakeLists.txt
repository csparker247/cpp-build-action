cmake_minimum_required(VERSION 3.10)

project(cpp-build-action)

find_package(OpenCV 4 REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main opencv_core ITKCommon)