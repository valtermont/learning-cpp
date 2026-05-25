#include <iostream>

int main()
{
    char ch;
    int count = 0;

    std::cin.get(ch);

    while (std::cin.fail() == false)
    {
        std::cout << ch;
        ++count;
        std::cin.get(ch);
    }

    std::cout << "\n" << count << " characters read\n";
    
    return 0;
}