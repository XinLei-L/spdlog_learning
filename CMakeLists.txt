cmake_minimum_required(VERSION 3.0)
project(spdlog_test)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)

# 指定spdlog库的路径，这里假设spdlog库已经安装在指定目录下
set(SPDLOG_INCLUDE_DIR "~/project/spdlog_test/include")

# 添加可执行文件
add_executable(test1 src/test1.cpp)

# 包含spdlog库的头文件目录
target_include_directories(test1 PRIVATE ${SPDLOG_INCLUDE_DIR})
# 添加可执行文件
add_executable(test2 src/test2.cpp)

# 包含spdlog库的头文件目录
target_include_directories(test2 PRIVATE ${SPDLOG_INCLUDE_DIR})

# 添加可执行文件
add_executable(test3 src/test3.cpp)

# 包含spdlog库的头文件目录
target_include_directories(test3 PRIVATE ${SPDLOG_INCLUDE_DIR})

# 添加可执行文件
add_executable(test4 src/test4.cpp)

# 包含spdlog库的头文件目录
target_include_directories(test4 PRIVATE ${SPDLOG_INCLUDE_DIR})


