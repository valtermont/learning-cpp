#include <iostream>

int main()
{
    int x;
    std::cout << "The expression x = 100 has the value ";
    std::cout << (x = 100) << "\n";
    std::cout << "Now x = " << x << "\n";
    std::cout << "The expression x < 3 has the value ";
    std::cout << (x < 3) << "\n";
    std::cout << "The expression x > 3 has the value ";
    std::cout << (x > 3) << "\n";
    
    std::cout.setf(std::ios_base::boolalpha);
    std::cout << "The expression x < 3 has the value ";
    std::cout << (x < 3) << "\n";
    std::cout << "The expression x > 3 has the value ";
    std::cout << (x > 3) << "\n";

    return 0;
}