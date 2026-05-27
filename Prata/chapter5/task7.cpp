#include <iostream>
#include <string>

int main()
{
    struct Car
    {
        std::string maker;
        int year;
    };
    
    int count {0};
    std::cout << "How many cars add to catalog?: ";
    (std::cin >> count).get();

    Car* cars = new Car[count];
    for (int i = 0; i < count; i++)
    {
        std::cout << "Enter maker: ";
        getline(std::cin, cars[i].maker);

        std::cout << "Enter year: ";
        (std::cin >> cars[i].year).get();
    }

    std::cout << "Your collection:\n";
    for (int i = 0; i < count; i++)
    {
        std::cout << cars[i].year << " " << cars[i].maker << "\n";
    }

    delete[] cars;
}