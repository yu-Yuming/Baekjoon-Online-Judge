#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> Array(N);
    for (int i = 0; i < N; ++i) {
        Array[i] = i + 1;
    }

    for (int OperationCount = 0; OperationCount < M; ++OperationCount) {
        int i, j;
        std::cin >> i >> j;
        std::reverse(Array.begin() + i - 1, Array.begin() + j);
    }

    for (const int & Element: Array) {
        std::cout << Element << " ";
    }

    return 0;
}