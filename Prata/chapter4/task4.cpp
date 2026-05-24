#include <iostream>
#include <string>

int main()
{
    std::string name, lastName;

    std::cout << "Enter your first name: ";
    getline(std::cin, name);

    std::cout << "Enter your last name: ";
    getline(std::cin, lastName);

    std::string fullName;
    fullName = lastName + ", " + name;

    std::cout << "Here's the information in a single string: " << fullName << "\n";
}
