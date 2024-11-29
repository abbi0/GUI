cmake_minimum_required(VERSION 3.5)
project(MyQtApp)

set(CMAKE_CXX_STANDARD 11)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(MyQtApp main.cpp)
target_link_libraries(MyQtApp Qt5::Widgets)