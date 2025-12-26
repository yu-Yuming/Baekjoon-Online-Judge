#include <iostream>

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    int count = 0;
    char lastCharacter = '.';
    for (const char & character: sentence) {
        if (character != ' ') {
            if (lastCharacter == ' ' || lastCharacter == '.') {
                count += 1;
            }
        }
        lastCharacter = character;
    }
    std::cout << count;

    return 0;
}