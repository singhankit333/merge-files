#include "Utils.h"
#include <chrono>
#include <ctime>

std::string Utils::getCurrentTimestamp() {
    auto now = std::chrono::system_clock::now();
    auto time = std::chrono::system_clock::to_time_t(now);
    return std::ctime(&time);
}