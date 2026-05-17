#include <iostream>

int main()
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    std::cout << "Enter your name:" << std::endl;
    std::cin >> name;  // problems with multiple word name!!!
    std::cout << "Enter your favorite dessert:" << std::endl;
    std::cin >> dessert;

    std::cout << "I have some delicious " << dessert << " for you, " << name << "." << std::endl;

    return 0;
}