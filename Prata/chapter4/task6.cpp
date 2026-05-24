#include <iostream>
#include <string>

struct CandyBar {
    std::string name;
    float weight;
    int countCal;
};

int main()
{
    CandyBar candyBars[3] {
        {"Snikers", 25, 800},
        {"Lion", 75.5, 1200},
        {"Baunti",50.45, 700}
    };

    std::cout << "Name: " << candyBars[0].name << "\n";
    std::cout << "Weight: " << candyBars[0].weight << " gram\n";
    std::cout << "Calories: " << candyBars[0].countCal << "\n";

    std::cout << "Name: " << candyBars[1].name << "\n";
    std::cout << "Weight: " << candyBars[1].weight << " gram\n";
    std::cout << "Calories: " << candyBars[1].countCal << "\n";

    std::cout << "Name: " << candyBars[2].name << "\n";
    std::cout << "Weight: " << candyBars[2].weight << " gram\n";
    std::cout << "Calories: " << candyBars[2].countCal << "\n";
}