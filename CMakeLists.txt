cmake_minimum_required(VERSION 3.13)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ../output)

project(
    RandomNumberGeneration
    VERSION 1.0
    LANGUAGES CXX
)

add_compile_options(
    # -Werror

    -Wall
    -Wextra
    -Wpedantic

    -Wcast-align
    -Wcast-qual
    -Wconversion
    -Wctor-dtor-privacy
    -Wenum-compare
    -Wfloat-equal
    -Wnon-virtual-dtor
    -Wold-style-cast
    -Woverloaded-virtual
    -Wredundant-decls
    -Wsign-conversion
    -Wsign-promo
)

if(NOT CMAKE_CXX_EXTENSIONS)
    set(CMAKE_CXX_EXTENSIONS OFF)
endif()
set (CMAKE_CXX_STANDARD 17)

add_library(ENGINES INTERFACE)
set(ENGINES_INCLUDE_DIR src/engines/include)
target_include_directories(ENGINES INTERFACE ${ENGINES_INCLUDE_DIR})

target_sources(ENGINES INTERFACE
    ${ENGINES_INCLUDE_DIR}/engine_base.hpp
    ${ENGINES_INCLUDE_DIR}/mersenne_storm.hpp
    ${ENGINES_INCLUDE_DIR}/rng.hpp
)

add_executable(main src/main.cpp)
target_link_libraries(main ENGINES)
