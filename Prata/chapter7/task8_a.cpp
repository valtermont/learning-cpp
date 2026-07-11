#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
const char* Snames[] {"Spring", "Summer", "Fall", "Winter"};

void fill(double* pa);
void show(const double* da);

int main()
{
    double expenses[Seasons] {};
    fill(expenses);
    show(expenses);

    return 0;
}

void fill(double* pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa[i];
    }
}

void show(const double* da)
{
    double total {0.0};

    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da[i] << '\n';
        total += da[i];
    }

    std::cout << "Total Expenses $" << total << '\n';
}