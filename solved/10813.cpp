#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> Arr(N);
    int InitValue = 0;
    for (int & Element: Arr) {
        InitValue++;
        Element = InitValue;
    }

    for (int OperationIndex = 0; OperationIndex < M; ++OperationIndex) {
        int i, j;
        std::cin >> i >> j;
        std::swap(Arr[i - 1], Arr[j - 1]);
    }

    for (const int & Element: Arr) {
        std::cout << Element << " ";
    }

    return 0;
}