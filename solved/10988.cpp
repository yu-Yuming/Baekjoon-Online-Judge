#include <algorithm>
#include <iostream>

int main() {
    std::string word;
    std::cin >> word;
    std::string copy = word;
    std::ranges::reverse(word);
    std::cout << (copy == word);
    return 0;
}