#include <iostream>

int main() {
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        int num;
        std::cin >> num;
        sum += num * num;
    }

    std::cout << sum % 10;
}