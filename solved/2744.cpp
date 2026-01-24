#include <iostream>

int main() {
    std::string word;
    std::cin >> word;
    for (char & letter: word) {
        int converted = letter <= 'Z' ? tolower(letter) : toupper(letter);
        std::cout << static_cast<char>(converted);
    }
    return 0;
}