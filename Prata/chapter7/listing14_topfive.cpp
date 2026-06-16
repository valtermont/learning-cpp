#include <iostream>
#include <string>

const int SIZE = 5;

void display(const std::string sl[], int n);

int main()
{
    std::string list[SIZE];

    std::cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
    for (int i{0}; i < SIZE; ++i)
    {
        std::cout << i + 1 << ": ";
        getline(std::cin, list[i]);
    }

    std::cout << "Your list:\n";
    display(list, SIZE);

    return 0;
}

void display(const std::string sl[], int n)
{
    for (int i{0}; i < n; ++i)
        std::cout << i + 1 << ": " << sl[i] << '\n';
}