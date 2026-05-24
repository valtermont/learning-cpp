#include <iostream>
#include <string>

struct CandyBar {
    std::string name;
    float weight;
    int countCal;
};

int main()
{
    CandyBar snack {
        "Mocha Munch",
        2.3,
        350
    };

    std::cout << "Name: " << snack.name << "\n";
    std::cout << "Weight: " << snack.weight << " gram\n";
    std::cout << "Calories: " << snack.countCal << "\n";
}