cmake_minimum_required(VERSION 3.16)

project(tests)

file(GLOB_RECURSE SOURCES
    ./*.cpp
)

message(${SOURCES})

add_executable(${PROJECT_NAME} ${SOURCES})

# include_directories(${ga_diploma_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME} diploma::ga_lib)


