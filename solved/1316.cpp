#include <iostream>
#include <set>

int main() {
    int N;
    std::cin >> N;
    int count = 0;
    for (int i = 0; i < N; ++i) {
        bool isGrouped = true;
        std::string word;
        std::set<char> duplicated;
        char currentLetter = ' ';

        std::cin >> word;
        for (const char &letter: word) {
            if (currentLetter != letter) {
                currentLetter = letter;

                if (bool isDuplicated = duplicated.contains(letter)) {
                    isGrouped = false;
                    break;
                }

                duplicated.insert(letter);
            }
        }

        if (isGrouped) {
            count++;
        }
    }

    std::cout << count;

    return 0;
}
