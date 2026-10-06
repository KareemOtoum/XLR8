cmake_minimum_required(VERSION 3.28)

project(swiftex
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
    PRIVATE
        src/main.cpp

    PRIVATE
        FILE_SET cxx_modules
        TYPE CXX_MODULES
        FILES
            src/order.ixx
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        include
)