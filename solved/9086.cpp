#include <iostream>

int main() {
    int T;
    std::cin >> T;

    for (int i = 0; i < T; ++i) {
        std::string string;
        std::cin >> string;

        std::cout << string.front() << string.back() << std::endl;
    }

    return 0;
}