cmake_minimum_required(VERSION 3.10)
project(qt_JSB)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)

set(CMALE_AUTOUIC ON)

set (CMAKE_PREFIX_PATH "/usr/local/Cellar/qt/5.10.1/lib/cmake")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(Qt5Widgets REQUIRED)

add_executable(qt_JSB main.cpp mainwindow.h mainwindow.cpp jsb.cpp jsb.h)

target_link_libraries(qt_JSB Qt5::Widgets)