#include <iostream>

long long factorial(int);

int main()
{
    int a;
    std::cout << "Enter n: ";
    if (std::cin >> a) {
        if (a > 20) {
            std::cout << "Error: Value too large for unsigned long long!\n";
        } else if (a < 0) {
            std::cout << "Error: Value non positive int!\n";
        } else {
            std::cout << a << "! = " << factorial(a) << '\n';
        }
    }
    std::cout << "Bye!\n";
}

long long factorial(int n)
{
    if (n == 0) {
        return 1;
    }
    
    return n * factorial(n-1);
}

