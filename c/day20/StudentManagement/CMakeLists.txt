cmake_minimum_required(VERSION 3.10)
project(StudentManagement)
set(CMAKE_C_STANDARD 11)

# 关键：指定头文件目录（include/）
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加可执行程序，包含所有源文件（src/下的3个.c）
add_executable(student_system
    ${PROJECT_SOURCE_DIR}/src/main.c
    ${PROJECT_SOURCE_DIR}/src/student.c
    ${PROJECT_SOURCE_DIR}/src/file_utils.c
)

# 编译警告选项（适配MinGW）
target_compile_options(student_system PRIVATE -Wall)