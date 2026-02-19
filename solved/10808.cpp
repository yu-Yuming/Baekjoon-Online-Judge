#include <iostream>

int main() {
    int character[26] = {};
    std::string word;
    std::cin >> word;

    for (const char & letter: word) {
        character[letter - 'a'] += 1;
    }

    for (const int & count: character) {
        std::cout << count << " ";
    }

    return 0;
}