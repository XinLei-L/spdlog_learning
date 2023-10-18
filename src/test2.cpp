#include <iostream>
#include <spdlog/spdlog.h>
#include "spdlog/sinks/basic_file_sink.h"//for basic file logger

int main() {
    // 初始化spdlog日志系统
    spdlog::set_level(spdlog::level::debug); // 设置日志级别为DEBUG

    // 创建一个控制台日志记录器
    auto console_logger = spdlog::basic_logger_mt("file_logger", "logs/basic-log1.txt");
    console_logger->set_level(spdlog::level::debug);

    // 使用日志记录器记录日志消息
    console_logger->info("这是一条信息日志");
    console_logger->warn("这是一条警告日志");
    console_logger->error("这是一条错误日志");

    // 格式化日志消息
    console_logger->info("格式化日志消息：Hello, {}!", "World");

    // 关闭spdlog
    spdlog::drop_all();

    return 0;
}
