#include <iostream>
#include <string>

int main() {
    std::string S;
    int i;

    std::cin >> S >> i;
    std::cout << S[i - 1] << std::endl;

    return 0;
}