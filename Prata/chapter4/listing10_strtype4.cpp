#include <iostream>
#include <string>
#include <cstring>

int main()
{
    char charr[20];
    std::string str;

    std::cout << "Length of string in charr before input: " << strlen(charr) << std::endl;
    std::cout << "Length of string in str vefore input: " << str.size() << std::endl;

    std::cout << "Enter a line of text:" << std::endl;
    std::cin.getline(charr, 20);
    std::cout << "You entered: " << charr << std::endl;

    std::cout << "Enter another line of text:" << std::endl;
    getline(std::cin, str);
    std::cout << "You entered: " << str << std::endl;

    std::cout << "Length of string in charr after input: " << strlen(charr) << std::endl;
    std::cout << "Length of string in str after input: " << str.size() << std::endl;
}