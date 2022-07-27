cmake_minimum_required(VERSION 3.20)
project(CPP_Practice)

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE SOURCES "Src/*.*")

add_executable(${PROJECT_NAME} ${SOURCES})
