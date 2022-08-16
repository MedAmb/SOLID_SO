cmake_minimum_required(VERSION 3.10.0)

project(Shapes VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(WARNING_OPTIONS
-Werror
-Wall
-Wcast-qual
-Wcast-align
-Wconversion
-Wextra
-Wfloat-equal
-Winit-self
-Wnon-virtual-dtor
-Wnull-dereference
-Wold-style-cast
-Woverloaded-virtual
-Wredundant-decls
-Wshadow
-Wvla
-Wzero-as-null-pointer-constant
-Wsign-conversion
-Wsign-promo
-Wpedantic
-pedantic-errors
)
add_compile_options("$<$<COMPILE_LANGUAGE:CXX>:${WARNING_OPTIONS}>")

set(CMAKE_C_FLAGS_RELEASE "-O3 -Os -flto -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -Os -flto -DNDEBUG")


set(MAIN_SRC ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)


add_subdirectory(enums)