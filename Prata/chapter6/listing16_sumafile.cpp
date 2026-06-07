#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

int main()
{
    char filename[SIZE];

    std::ifstream inFile;
    std::cout << "Enter name of data file: ";
    std::cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        std::cout << "Could not open the file " << filename << '\n';
        std::cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    double value;
    double sum {0.0};
    int count {0};
    inFile >> value;

    while (inFile.good())
    {
        ++count;
        sum += value;
        inFile >> value;
    }

    if (inFile.eof())
        std::cout << "End of file reached.\n";
    else if (inFile.fail())
        std::cout << "Input terminated by data mismatch.\n";
    else
        std::cout << "Input terminated for unknown reason.\n";
    
    if (count == 0)
        std::cout << "No data processed.\n";
    else
    {
        std::cout << "Items read: " << count << '\n';
        std::cout << "Sum: " << sum << '\n';
        std::cout << "Average: " << sum / count << '\n';
    }

    inFile.close();

    return 0;
}