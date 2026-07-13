#include <iostream>

int main()
{
    int rats = 101;
    int& rodents = rats;
    std::cout << "rats = " << rats;
    std::cout << ", rodents = " << rodents << '\n';

    std::cout << "rats address = " << &rats;
    std::cout << ", rodents address = " << &rodents << '\n';

    int bunnies = 50;
    rodents = bunnies;
    std::cout << "bunnies = " << bunnies;
    std::cout << ", rats = " << rats;
    std::cout << ", rodents = " << rodents << '\n'; 

    std::cout << "bunnies address = " << &bunnies;
    std::cout << ", rodents address = " << &rodents << '\n';
}