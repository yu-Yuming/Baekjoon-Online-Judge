#include <iostream>
#include <map>

int main() {
    std::string word;
    std::cin >> word;

    std::map<char, std::map<char, int>> croatian = {
        {'c', {{'=', 2}, {'-', 2}}},
        {'d', {{'z', 3}, {'-', 2}}},
        {'l', {{'j', 2}}},
        {'n', {{'j', 2}}},
        {'s', {{'=', 2}}},
        {'z', {{'=', 2}}}
    };

    int num = 0;
    for (int i = 0; i < word.length(); ) {
        num++;
        if (croatian.contains(word[i])) {
            if (croatian[word[i]].contains(word[i + 1])) {
                if (croatian[word[i]][word[i + 1]] == 2) {
                    i += 1;
                } else if (word[i + 2] == '=') {
                    i += 2;
                }
            }
        }

        i += 1;
    }

    std::cout << num;
    
    return 0;
}
