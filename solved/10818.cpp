#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;

    std::cin >> N;
    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    auto MaxA = std::max_element(A.begin(), A.end());
    auto MinA = std::min_element(A.begin(), A.end());
    std::cout << *MinA << " " << *MaxA << std::endl;

    return 0;
}
