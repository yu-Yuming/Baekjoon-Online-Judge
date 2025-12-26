#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    std::cout << A + B - C << std::endl;
    std::cout << std::stoi(std::to_string(A) + std::to_string(B)) - C;

    return 0;
}