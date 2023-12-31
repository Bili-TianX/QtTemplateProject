cmake_minimum_required(VERSION 3.27)
project(QtTemplateProject)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_PREFIX_PATH C:/Users/TianX/Documents/Qt/5.15.2/msvc2019_64/lib/cmake)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_executable(${PROJECT_NAME})

# Project Sources
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/Headers/*.hpp")
target_sources(${PROJECT_NAME} PRIVATE ${SOURCES} assets/assets.qrc)
target_precompile_headers(${PROJECT_NAME} PRIVATE src/Headers/pch.hpp)

# Release
if (${CMAKE_BUILD_TYPE} MATCHES Release)
    set_target_properties(${PROJECT_NAME} PROPERTIES WIN32_EXECUTABLE true)
endif ()

find_package(Qt5 COMPONENTS REQUIRED Core Gui Widgets)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Gui Qt5::Widgets)