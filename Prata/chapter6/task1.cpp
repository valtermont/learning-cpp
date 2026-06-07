#include <iostream>
#include <cctype>

int main()
{
    char ch;

    std::cin.get(ch);
    while (ch != '@')
    {
        if (std::isupper(ch))
            ch = std::tolower(ch);
        else if (std::islower(ch))
            ch = std::toupper(ch);
        
        if (!std::isdigit(ch))
            std::cout << ch;
        std::cin.get(ch);
    }

    std::cout << "\nDone!\n";
}