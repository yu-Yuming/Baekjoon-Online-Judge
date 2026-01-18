#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int A, B;
    std::cin >> A >> B;
    std::string strA = std::to_string(A);
    std::string strB = std::to_string(B);
    std::ranges::reverse(strA);
    std::ranges::reverse(strB);

    int digitA = -1, digitB = -1;
    while (A >= 0 && B >= 0 && digitA == digitB) {
        digitA = A % 10;
        digitB = B % 10;
        A /= 10;
        B /= 10;
    }
    
    if (digitA > digitB) {
        std::cout << strA;
    } else if (digitA < digitB) {
        std::cout << strB;
    }

    return 0;
}