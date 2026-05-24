#include <iostream>

int main()
{
    const int ArSize = 20;

    char name[ArSize];
    std::cout << "Your first name, please: ";
    std::cin.getline(name, ArSize);

    std::cout << "Here is your name, verticalized and ACIIized:\n";
    int i = 0;
    while (name[i] != '\0')
    {
        std::cout << name[i] << ": " << int(name[i]) << "\n";
        i++;
    }

    return 0;
}