#include <iostream>

int main()
{
    int auks, bats, coots;

    auks = 19.99 + 11.99;
    bats = (int) 19.99 + (int) 11.99; // old C style;
    coots = int(19.99) + int(11.99); // old C++ style

    std::cout
        << "auks = " << auks
        << ", bats = " << bats
        << ", coots = " << coots
        << std::endl;
        
    char ch = 'Z';
    std::cout << "The code for " << ch << " is " << int(ch) << std::endl;
    std::cout << "Yes, the code is " << static_cast<int>(ch) << std::endl;
}