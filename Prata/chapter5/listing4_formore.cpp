#include <iostream>

int main()
{
    const int ArSize = 16;

    long long factorials[ArSize];

    factorials[1] = factorials[0] = 1LL;

    for (int i = 1; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];

    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << "\n";
}