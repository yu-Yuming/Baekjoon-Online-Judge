#include <algorithm>
#include <complex>
#include <iostream>

int main() {
    std::string N;
    int B;

    std::cin >> N >> B;

    std::ranges::reverse(N);
    int decimal = 0;
    int index = -1;
    int power = 1;
    for (const char & digit: N) {
        ++index;
        if (index > 0) {
            power *= B;
        }
        decimal += (digit - (std::isdigit(digit) ? 48 : 55)) * power;
    }

    std::cout << decimal;

    return 0;
}