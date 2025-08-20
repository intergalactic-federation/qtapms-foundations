cmake_minimum_required(VERSION 3.10.0)
project(qtapms-sim VERSION 0.1.0 LANGUAGES C CXX)
cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)

add_executable(qtapms-sim
    src/main.cpp
    src/lib/glad/src/gl.c    # only glad.c (or gl.c in your case)
)

target_include_directories(qtapms-sim PRIVATE
    src/lib/glad/include
)

target_link_libraries(qtapms-sim
    glfw
    OpenGL::GL
)
