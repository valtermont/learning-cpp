#include <iostream>
#include <fstream>

int main()
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;
    
    std::ofstream outFile;
    outFile.open("carinfo.txt");

    std::cout << "Enter the make and model of automobile: ";
    std::cin.getline(automobile, 50);

    std::cout << "Enter the model year: ";
    std::cin >> year;

    std::cout << "Enter the original asking price: ";
    std::cin >> a_price;

    d_price = 0.913 * a_price;

    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout.setf(std::ios_base::showpoint);
    std::cout << "Make and model: " << automobile << '\n';
    std::cout << "Year: " << year << '\n';
    std::cout << "Was asking $" << a_price << '\n';
    std::cout << "Now askinkg $" << d_price << '\n';
    
    outFile << std::fixed;
    outFile.precision(2);
    outFile.setf(std::ios_base::showpoint);
    outFile << "Make and model: " << automobile << '\n';
    outFile << "Year: " << year << '\n';
    outFile << "Was asking $" << a_price << '\n';
    outFile << "Now askinkg $" << d_price << '\n';

    outFile.close();

    return 0;
}