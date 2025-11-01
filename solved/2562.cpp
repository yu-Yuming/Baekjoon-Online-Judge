#include <iostream>
#include <vector>

int main() {
    std::vector<int> Numbers;

    int MaxNumber = 0; // Natural Number
    int MaxIndex = -1;
    for (int i = 0; i < 9; ++i) {
        int N;
        std::cin >> N;
        Numbers.push_back(N);

        MaxIndex = N > MaxNumber ? i : MaxIndex;
        MaxNumber = std::max(MaxNumber, N);
    }

    std::cout << MaxNumber << std::endl;
    std::cout << MaxIndex + 1 << std::endl;

    return 0;
}