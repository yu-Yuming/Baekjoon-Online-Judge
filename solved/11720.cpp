#include <iostream>
#include <string>

int main() {
    int N;
    std::string S;
    std::cin >> N >> S;

    int sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += static_cast<int>(S[i]) - 48;
    }
    std::cout << sum;

    return 0;
}