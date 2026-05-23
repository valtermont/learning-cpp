#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable bouquet {
        "sunflowers",
        0.20,
        12.49
    };

    inflatable choice;

    std::cout << "bouquet: " << bouquet.name << " for $" << bouquet.price << std::endl;
    choice = bouquet;
    std::cout << "choice: " << choice.name << " for $" << choice.price << std::endl;
}