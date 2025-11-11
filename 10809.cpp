#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string S;
    std::cin >> S;

    std::vector<int> alpha(26, -1);
    for (int i = 0; i < S.length(); ++i) {
        if (alpha[S[i] - 'a'] == -1) {
            alpha[S[i] - 'a'] = i;
        }
    }

    for (const int & element: alpha) {
        std::cout << element << " ";
    }

    return 0;
}