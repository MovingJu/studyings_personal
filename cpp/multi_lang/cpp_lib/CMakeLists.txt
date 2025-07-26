cmake_minimum_required(VERSION 3.14)
project(cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Python 3.10의 실행 파일 경로 직접 지정
set(Python_EXECUTABLE "${CMAKE_SOURCE_DIR}/../app/.venv/bin/python")

# pybind11 포함
add_subdirectory(extern/pybind11)

# 모듈 생성
pybind11_add_module(cpp src/main.cpp)

# .so 복사: Python 3.10용 site-packages
add_custom_command(TARGET cpp POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
            $<TARGET_FILE:cpp>
            ${CMAKE_SOURCE_DIR}/../app/.venv/lib/python3.10/site-packages/
    COMMENT "Copying .so to ../app/.venv/lib/python3.10/site-packages/"
)
