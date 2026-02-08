#include <iomanip>
#include <iostream>
#include <map>

std::map<std::string, float> gradeAmp = {
    {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}
};

int main() {
    std::string name;
    float score;
    std::string grade;
    float sum = 0;
    int count = 0;
    for (int i = 0; i < 20; ++i) {
        std::cin >> name >> score >> grade;
        if (grade == "P") {
            continue;
        }

        count += score;
        sum += score * gradeAmp[grade];
    }

    std::cout << std::fixed << std::setprecision(5) << sum / count  << std::endl;

    return 0;
}
