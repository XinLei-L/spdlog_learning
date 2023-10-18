#include <iostream>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>

int main() {
    // 初始化spdlog日志系统
    spdlog::set_level(spdlog::level::debug); // 设置日志级别为DEBUG

    // 创建一个覆盖文件日志记录器
    auto file_logger = spdlog::basic_logger_mt("file_logger", "logs/basic_log2.txt", true); // 第三个参数为true表示覆盖日志文件

    // 设置日志级别
    file_logger->set_level(spdlog::level::debug);

    // 使用日志记录器记录日志消息
    file_logger->info("这是一条信息日志");
    file_logger->warn("这是一条警告日志");
    file_logger->error("这是一条错误日志");

    // 格式化日志消息
    file_logger->info("格式化日志消息：Hello, {}!", "World");

    // 关闭spdlog
    spdlog::drop_all();

    return 0;
}
