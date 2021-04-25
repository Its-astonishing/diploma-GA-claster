cmake_minimum_required(VERSION 3.16)

project(tests)

include(FetchContent)

FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

file(GLOB_RECURSE SOURCES
    ./*.cpp
)

message(${SOURCES})

add_executable(${PROJECT_NAME} ${SOURCES})

# include_directories(${ga_diploma_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME} diploma::ga_lib gtest_main)


