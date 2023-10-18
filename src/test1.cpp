#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"//for basic file logger

int main(int argc, char** argv)
{
    auto logger = spdlog::basic_logger_mt("file_logger", "logs/basic-log.txt");
    logger->set_level(spdlog::level::info);
    int a = 10;
    float b = 10.2;
    std::string name = "Tom";
    logger->info("a = {}", a);
    logger->info("b = {}", b);
    logger->info("name = {}", name); 

    return 0; 
}