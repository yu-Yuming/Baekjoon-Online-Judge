#include <algorithm>
#include <iostream>
#include <string>

char convert(const int N, const int B) {
    const int digit = N % B;
    return digit < 10 ? digit + '0' : digit - 10 + 'A';
}

int main() {
    int N, B;
    std::cin >> N >> B;

    std::string converted;
    while (N > 0) {
        converted += convert(N, B);
        N /= B;
    }
    std::ranges::reverse(converted);

    std::cout << converted;

    return 0;
}
