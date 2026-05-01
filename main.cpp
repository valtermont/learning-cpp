#include <iostream>
#include <map>

int fib(int n) {
    return n <= 1 ? n : fib(n-2) + fib(n-1); 
}

int fib2(int n) {
 static std::map<int, int> table{};
 table[n] = n<=1 ? n : table[n-2] + table[n-1];
 return table[n];
}

void run1()
{
    std::cout << "How many Fibonacci numbers? ";
    int n = 0;
    std::cin >> n;
    for (int i = 1; i < n; ++i)
        fib2(i);
    std::cout << "fib(" << n << ")=" << fib2(n) << "\n";
}

void run2()
{
    struct Data{ Data(int v) : value{v} {} int value; };

    Data const * data = new Data(5);
    // data->value = 7; - ERROR! The value Data is protected.
    data = new Data(6);

    Data * const mehr = new Data(8);
    mehr->value = 9;
    // mehr = new Data(10); - ERROR! The pointer or reference is protected.

    (void)data; (void)mehr;
}

void run3()
{
    int value = 953;
    std::cout << "Divisors of " << value << " are:\n";
    for (int divider = 1; divider <= value; divider = divider + 1)
    {
        if (value % divider == 0)
            std::cout << divider << ", ";
    }
    std::cout << "\n";
}

void calculateDevisors(int n)
{
    using namespace std;
    cout << "Divisors of " << n << " are:\n";
    if (n == 0) {
        cout << "0\n";
        return;
    }
    for (int divider = 1; divider <= n; divider = divider + 1)
        if (n % divider == 0)
            cout << divider << ", ";
    cout << "\n";
}

int main(int argc, const char* argv[])
{
    int value = 0;
    if (argc <= 1)
    {
        std::cout << "Enter a number: ";
        std::cin >> value;
        if (!std::cin)
            return 1;
    }
    else 
    {
        value = std::stoi(argv[1]);
    }
    calculateDevisors(value);

    return 0;
}