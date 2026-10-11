# NEXT-E算法组第二次作业

## 项目简介
本项目使用 Git 管理一个包含三道 C++ 算法题的 CMake 项目。

## 目录结构
- src/           源代码目录
- tests/         测试数据目录
- CMakeLists.txt CMake构建配置
- commands.txt   命令行记录

## 环境版本
- Ubuntu 24.04.1 LTS
- g++ 15.2.0
- CMake 3.28+
- Git 2.43+

## 构建与运行命令
```bash
cmake -S . -B build
cmake --build build
./build/streak < tests/streak_sample.in
./build/unique_ids < tests/unique_ids_sample.in
./build/range_sum < tests/range_sum_sample.in
