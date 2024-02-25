##
# DO NOT MODIFY, DO NOT REMOVE, IGNORE IF YOU ARE NOT A CONTRIBUTOR TO THIS GITHUB
##

cmake_minimum_required(VERSION 3.14)
project(copilot-coding-gym)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add the Data Structures directory to the build process
add_subdirectory("../Data Structure Workouts" "Data Structure Workouts")

enable_testing()

# Defines the executable (may not exist yet) and specifies source file
add_executable(
  linked-list-test
  "../Data Structure Workouts/LinkedLists/linked-list-test.cpp"
)

# Link the test executable against the Google Test libraries
target_link_libraries(
  linked-list-test
  gtest_main
  linked-list-challenge
)

# Make gtest/gtest.h find-able for test files in subdirectories
target_include_directories(
  linked-list-test
  PRIVATE
  ${gtest_SOURCE_DIR}/include
  ${gtest_SOURCE_DIR}
)

include(GoogleTest)
gtest_discover_tests(linked-list-test)