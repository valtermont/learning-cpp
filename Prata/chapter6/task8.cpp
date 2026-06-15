#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main()
{
    std::ifstream inFile;
    std::cout << "Enter name of data file: ";
    std::string filename;
    std::getline(std::cin, filename);

    inFile.open(filename);
    if (!inFile.is_open())
    {
        std::cout << "Could not open the file " << filename << '\n';
        std::cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    char ch;
    int count {0};
    while (inFile.get(ch))
        ++count;

    if (inFile.eof())
        std::cout << "Count symbols: " << count << ".\n";
    else if (inFile.fail())
        std::cout << "Input terminated by data mismatch.\n";
    else
        std::cout << "Input terminated for unknown reason.\n";

    inFile.close();
}