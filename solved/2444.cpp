#include <iostream>

int main() {
    int N;
    std::cin >> N;
    for (int i = 1; i < N; ++i) {
        int space = N - i;
        std::cout << std::string(space, ' ');
        std::cout << std::string(2 * i - 1, '*') << std::endl;
    }

    std::cout << std::string(2 * N - 1, '*') << std::endl;

    for (int i = N - 1; i > 0; --i) {
        int space = N - i;
        std::cout << std::string(space, ' ');
        std::cout << std::string(2 * i - 1, '*') << std::endl;
    }

    return 0;
}