#include <iostream>

int main() {
    int maxValue = -1;
    int maxRow = -1;
    int maxCol = -1;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            int tempValue;
            std::cin >> tempValue;
            if (tempValue > maxValue) {
                maxValue = tempValue;
                maxRow = i;
                maxCol = j;
            }
        }
    }

    std::cout << maxValue << std::endl;
    std::cout << maxRow + 1 << " " << maxCol + 1;

    return 0;
}
