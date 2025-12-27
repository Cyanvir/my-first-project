# 1. 指定CMake的最低版本（必须写）
cmake_minimum_required(VERSION 3.10)

# 2. 定义项目名（随便取，比如叫Calculator）
project(Calculator)

# 3. 添加可执行程序：参数是“程序名”+“所有源文件”
add_executable(calculator main.c math_utils.c)

#系统里装了 Visual Studio，CMake 会默认选择 “Visual Studio” 作为生成器，生成的是 VS 工程文件（不是 Makefile）。而mingw32-make是用来执行 Makefile 的，所以当时会提示 “找不到 makefile”。
#要指定-G "MinGW Makefiles"，强制 CMake 生成 Makefile，所以mingw32-make能正常识别并编译了。