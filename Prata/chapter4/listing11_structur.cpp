#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable guest = {
        "Glorious Gloria",
        1.88,
        29.99
    };

    inflatable pal = {
        "Audacious Arthur",
        3.12,
        32.99
    };

    std::cout << "Expand your guest list with " << guest.name;
    std::cout << " and " << pal.name << "!" << std::endl;

    std::cout << "You have both for $" << guest.price + pal.price << "!" << std::endl;
}