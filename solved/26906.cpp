#include <iostream>
#include <map>

int main() {
    int T;
    std::cin >> T;

    std::map<std::string, std::string> translateTable;
    for (int i = 0; i < T; ++i) {
        std::string letter, binary;
        std::cin >> letter >> binary;
        translateTable[binary] = letter;
    }

    std::string runes;
    std::cin >> runes;
    for (int i = 0; i < runes.length(); i += 4) {
        const std::string current = runes.substr(i, 4);
        if (translateTable.contains(current)) {
            std::cout << translateTable[current];
        } else {
            std::cout << "?";
        }
    }

    return 0;
}
