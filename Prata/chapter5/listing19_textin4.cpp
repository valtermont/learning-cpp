#include <iostream>

int main()
{
    int ch;
    int count = 0;

    while ((ch = std::cin.get()) != EOF)
    {
        std::cout.put(char(ch));
        ++count;
    }

    std::cout << "\n" << count << " characters read\n";
    
    return 0;
}