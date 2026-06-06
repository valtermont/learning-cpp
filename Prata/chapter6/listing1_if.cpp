#include <iostream>

int main()
{
    char ch;
    int space {0};
    int total {0};

    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == ' ')
            ++space;
        ++total;
        std::cin.get(ch);
    }

    std::cout << space << " spaces, " << total << " characters total in sentence\n";
    
    return 0;
}