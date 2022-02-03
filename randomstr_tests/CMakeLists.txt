cmake_minimum_required(VERSION 3.15)
project(randomstr_tests
        VERSION "0.0.1"
        LANGUAGES C)

set(HOMEPAGE_URL "https://github.com/offscale/randomstr")
set(DESCRIPTION "Tests for randomstr")
set(CMAKE_C_STANDARD 90)
cmake_policy(SET CMP0063 NEW)
set(CMAKE_C_VISIBILITY_PRESET hidden)
set(CMAKE_VISIBILITY_INLINES_HIDDEN YES)
set(CMAKE_VERBOSE_MAKEFILE ON)

add_subdirectory("test_randomstr")
