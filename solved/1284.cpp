#include <iostream>

int main() {
    int number;
    while (std::cin >> number and number != 0) {
        int result = 1;
        while (number > 0) {
            int digit = number % 10;
            if (digit == 0) {
                result += 4;
            } else if (digit == 1) {
                result += 2;
            } else {
                result += 3;
            }

            number /= 10;
            result++;
        }

        std::cout << result << std::endl;
    }

    return 0;
}