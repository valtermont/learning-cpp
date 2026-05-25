#include <iostream>

int main()
{
    const int ArSize = 101;

    long double factorials[ArSize];

    factorials[1] = factorials[0] = 1;

    for (int i = 1; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];

    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << "\n";
}