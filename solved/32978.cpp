#include <iostream>
#include <string>
#include <set>

int main() {
    int N;
    std::cin >> N;

    std::set<std::string> ingredients;

    for (int i = 0; i < N; ++i) {
        std::string ingredient;
        std::cin >> ingredient;
        ingredients.insert(ingredient);
    }

    for (int i = 0; i < N - 1; ++i) {
        std::string ingredient;
        std::cin >> ingredient;
        ingredients.erase(ingredient);
    }

    for (const auto & ingredient: ingredients) {
        std::cout << ingredient;
    }

    return 0;
}
