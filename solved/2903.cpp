#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    const int length = std::pow(2, N) + 1;
    std::cout << length * length;

    return 0;
}
