#include <iostream>

int main()
{
    const int NameLength = 30;
    
    char name[NameLength];
    std::cout << "What is your first name? ";
    std::cin.getline(name, NameLength);

    char lastName[NameLength];
    std::cout << "What is your last name? ";
    std::cin.getline(lastName, NameLength);

    char grade;
    std::cout << "What letter grade do you deserve? ";
    std::cin >> grade;

    unsigned int age;
    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "Name: " << lastName << ", " << name << std::endl;
    std::cout << "Grade: " << char(grade + 1) << std::endl;
    std::cout << "Age: " << age << std::endl;
}