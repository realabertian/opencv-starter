cmake_minimum_required(VERSION 3.14)

project(opencv-starter)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)

add_subdirectory(mat)

add_subdirectory(scan_images)