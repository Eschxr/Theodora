cmake_minimum_required(VERSION 3.18)

project(Theodora VERSION 0.1.0 LANGUAGES CXX)

find_package(Python COMPONENTS Interpreter Development.Module REQUIRED)
find_package(pybind11 CONFIG REQUIRED)

add_subdirectory(src)

pybind11_add_module(_core bindings/module.cpp)

target_link_libraries(_core PRIVATE theodora_cpp)

install(TARGETS _core LIBRARY DESTINATION theodora)
