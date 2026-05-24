#include <iostream>
#include <cstring>

int main()
{
    const int NameLength = 30;
    char name[NameLength];
    char lastName[NameLength];


    std::cout << "Enter your first name: ";
    std::cin.getline(name, NameLength);

    std::cout << "Enter your last name: ";
    std::cin.getline(lastName, NameLength);

    char fullName[NameLength + NameLength + 2];
    strcpy(fullName, lastName);
    strcat(fullName, ", ");
    strcat(fullName, name);

    std::cout << "Here's the information in a single string: " << fullName << "\n";
}