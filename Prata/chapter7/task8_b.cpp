#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
const char* Snames[] {"Spring", "Summer", "Fall", "Winter"};

struct expenses
{
    double items[Seasons];
};

void fill(expenses* pa);
void show(expenses da);

int main()
{
    expenses exp;
    fill(&exp);
    show(exp);

    return 0;
}

void fill(expenses* pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa->items[i];
    }
}

void show(expenses da)
{
    double total {0.0};

    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da.items[i] << '\n';
        total += da.items[i];
    }

    std::cout << "Total Expenses $" << total << '\n';
}