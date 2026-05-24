#include <iostream>

int main()
{
    int n;
    std::cout << "Enter numers in the range 1-10 to find ";
    std::cout << "my favorite number\n";

    do
    {
        std::cin >> n;
    } while (n != 7);
    
    std::cout << "Yes, 7 is my favorite.\n";

    return 0;
}