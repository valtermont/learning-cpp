#include <iostream>

int main()
{
    int rats = 101;
    int& rodents = rats;
    std::cout << "rats = " << rats;
    std::cout << ", rodents = " << rodents << '\n';
    rodents++;
    std::cout << "rats = " << rats;
    std::cout << ", rodents = " << rodents << '\n';

    std::cout << "rats address = " << &rats;
    std::cout << ", rodents address = " << &rodents << '\n';

    return 0;
}