cmake_minimum_required(VERSION 3.5.0)


project(std_support LANGUAGES CXX)

################################################################################

add_library               (std_memory INTERFACE)

target_sources            (std_memory INTERFACE "${CMAKE_CURRENT_LIST_DIR}/include/memory.hpp")

target_include_directories(std_memory INTERFACE include)

################################################################################

install(TARGETS std_memory DESTINATION include)
