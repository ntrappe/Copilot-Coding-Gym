##
# DO NOT MODIFY, DO NOT REMOVE, IGNORE IF YOU ARE NOT A CONTRIBUTOR TO THIS GITHUB
##

# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.14)

# Project's name
project(DataStructureWorkouts)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)

# Define library for source files
add_library(
  linked-list-challenge
  LinkedLists/linked-list-challenge.cpp
)