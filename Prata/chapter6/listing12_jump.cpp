#include <iostream>

const int ArSize = 80;

int main()
{
    char line[ArSize];
    int spaces = 0;

    std::cout << "Enter a line of text:\n";
    std::cin.getline(line, ArSize);

    std::cout << "Complete line:\n" << line << '\n';
    std::cout << "Line through first period:\n";

    for (int i = 0; line[i] != '\0'; i++)
    {
        std::cout << line[i];
        if (line[i] == '.')
            break;
        if (line[i] != ' ')
            continue;
        spaces++;
    }

    std::cout << "\n" << spaces << " spaces\n";
    std::cout << "Done.\n";
}