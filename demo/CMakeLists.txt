cmake_minimum_required(VERSION 3.22)
project(demo)


# 获取cpp文件相对于当前工作路径的相对路径，即文件名
# 工作路径${CMAKE_CURRENT_SOURCE_DIR}就是CMakeList.txt所在的文件夹
file (GLOB files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
# 遍历每个文件名
foreach (file ${files})
    # 将去掉后缀的文件名存入exe变量（executable的缩写，不是代表.exe）
    string(REGEX REPLACE "(.+).cpp$" "\\1" exe ${file})
    # 分别生成add_executable(<name> <source>)命令
    add_executable (${exe} ${file} 03/string_demo.cpp 03/3.2.cpp 03/3.4.cpp 03/3.5.cpp)
endforeach ()

set(CMAKE_CXX_STANDARD 14)

add_executable(demo main.cpp 01/1.1.cpp 01/1.1.cpp)

add_executable(1.1 01/1.1.cpp 01/1.2.cpp 01/1.3.cpp 01/1.4.cpp 01/1.9.cpp 01/1.16.cpp 02/2.8.cpp 02/2.9.cpp 02/2.17.cpp 02/2.20.cpp 02/2.33.cpp 02/2.35.cpp 02/2.36.cpp 02/2.37.cpp 02/2.39.cpp)
add_executable(1.2 01/1.2.cpp)
add_executable(1.3 01/1.3.cpp)
add_executable(1.4 01/1.4.cpp)
add_executable(1.9 01/1.9.cpp)
add_executable(1.16 01/1.16.cpp)
add_executable(2.8 02/2.8.cpp)
add_executable(2.17 02/2.17.cpp)
add_executable(2.20 02/2.20.cpp)
add_executable(2.33 02/2.33.cpp)
add_executable(2.35 02/2.35.cpp)
add_executable(2.36 02/2.36.cpp)
add_executable(2.37 02/2.37.cpp)
add_executable(2.39 02/2.39.cpp)
add_executable(3.1 03/3.2.cpp)
add_executable(3.4 03/3.4.cpp)
add_executable(3.5 03/3.5.cpp)