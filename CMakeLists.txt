cmake_minimum_required(VERSION 3.16)

project(ga_diploma)

file(GLOB_RECURSE SOURCES
    sources/*.cpp
)

add_library(${PROJECT_NAME} ${SOURCES})
add_library(diploma::ga_lib ALIAS ${PROJECT_NAME})


target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

add_subdirectory(tests)

