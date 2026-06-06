#include <iostream>
#include <climits>

bool is_int(double);

int main()
{
    double num;

    std::cout << "Yo, dude! Enter an integer value: ";
    std::cin >> num;

    while (!is_int(num))
    {
        std::cout << "Out of range -- please, try again: ";
        std::cin >> num;
    }

    int val = int(num);
    std::cout << "You've entered the integer " << val << "\nBye\n";

    return 0;
}

bool is_int(double x)
{
    return (x <= INT_MAX && x >= INT_MIN);
}