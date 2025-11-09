#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N;

    for (int i = 1; i <= N; ++i) {
        if (i == N) {
            std::cout << std::string(2 * N - 1, '*');
        } else {
            std::cout << std::string(N - i, ' ') << '*' << std::string(i > 1 ? 2 * (i - 1) - 1 : 0, ' ') << (i > 1 ? '*' : ' ') << std::endl;
        }
    }

    return 0;
}