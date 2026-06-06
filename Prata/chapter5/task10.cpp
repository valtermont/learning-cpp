#include <iostream>

int main()
{
    std::cout << "Enter the number of lines: ";

    int number;
    std::cin >> number;

    for (int i = 0; i < number; ++i)
    {
        for (int j = 1; j < number-i; ++j)
            std::cout << '.';
         
        for (int j = 0; j <= i; ++j)
            std::cout << '*';

        std::cout << '\n';
    }
}