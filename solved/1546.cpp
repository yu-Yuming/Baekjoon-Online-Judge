#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<double> scores(N);
    double maxScore = -1;
    for (int i = 0; i < N; ++i) {
        std::cin >> scores[i];
        maxScore = std::max(maxScore, scores[i]);
    }

    double sum = 0;
    for (const double & score: scores) {
        sum += score / maxScore * 100;
    }

    double mean = sum / N;
    std::cout << mean << std::endl;

    return 0;
}