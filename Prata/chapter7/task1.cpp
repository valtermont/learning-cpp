#include <iostream>

double harmonic(double, double);

int main()
{
    double x, y;
    std::cout << "Enter two digits or 0 for exit: ";
    while (std::cin >> x >> y && x != 0 && y != 0)
    {
        std::cout << "Harmonic mean = " << harmonic(x, y) << '\n';
        std::cout << "Enter next two digits or 0 for exit: ";
    }
    std::cout << "Bye!\n";

    return 0;
}

double harmonic(double x, double y)
{
    return 2.0 * x * y / (x + y);
}