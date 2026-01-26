#include <iostream>
#include <map>

int main() {
    std::string word;
    std::cin >> word;
    std::map<char, int> letters;
    int maximumValue = 0;
    char maximumLetter = ' ';
    for (const char & letter: word) {
        char CapLetter = toupper(letter);

        if (!letters.contains(CapLetter)) {
            letters[CapLetter] = 1;
        } else {
            letters[CapLetter]++;
        }

        if (letters[CapLetter] > maximumValue) {
            maximumValue = letters[CapLetter];
            maximumLetter = CapLetter;
        } else if (letters[CapLetter] == maximumValue) {
            maximumLetter = '?';
        }
    }
    std::cout << maximumLetter;

    return 0;
}
