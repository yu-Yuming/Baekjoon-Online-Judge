#include <iostream>
#include <vector>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    int mul = A * B * C;
    std::vector<int> digits(10, 0);

    while (mul > 0) {
        digits[mul % 10]++;
        mul /= 10;
    }

    for (const int & digit: digits) {
        std::cout << digit << std::endl;
    }

    return 0;
}
