#include <iostream>

int main()
{
    std::cout << "Enter 2 integer numbers: ";

    int a, b;
    std::cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b; ++i)
        sum += i;
        
    std::cout << "Sum all numbers between " << a << " and " << b << " = " << sum << "\n"; 
}