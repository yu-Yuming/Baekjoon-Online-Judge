#include <iostream>
#include <chrono>

int main() {
    auto now = std::chrono::system_clock::now();

    auto today = std::chrono::floor<std::chrono::days>(now);
    auto ymd = std::chrono::year_month_day{today};

    std::cout << ymd << std::endl;

    return 0;
}