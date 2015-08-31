cmake_minimum_required(VERSION 3.3)
project(BinaryTreeTraversal)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp BinaryTree.cc BinaryTree.h)
add_executable(BinaryTreeTraversal ${SOURCE_FILES})