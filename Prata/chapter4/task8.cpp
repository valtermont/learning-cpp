#include <iostream>
#include <string>

struct Pizza {
    std::string companyMaker;
    float diameter;
    float weight;
};

int main()
{
    Pizza * pizza = new Pizza;
    std::cout << "Enter pizza diameter: ";
    std::cin >> pizza->diameter;

    std::cout << "Enter pizza maker: ";
    getline(std::cin, pizza->companyMaker);
    
    std::cout << "Enter pizza weight: ";
    std::cin >> pizza->weight;

    std::cout << "Pizza registered success!\n";
    std::cout << "Maker: " << pizza->companyMaker << "\n";
    std::cout << "Diameter: " << pizza->diameter << " sm.\n";
    std::cout << "Weight: " << pizza->weight << " g.\n";

    delete pizza;
}