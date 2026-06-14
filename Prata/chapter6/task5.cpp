#include <iostream>

int main()
{
    const double TAX_LEVEL_1 = 1000.0; // налог с полных 10к (между 5к и 15к)
    const double TAX_LEVEL_2 = 3000.0; // налог с полных 20к (между 15к и 35к)

    std::cout << "Enter your income: ";

    double income;
    while (std::cin >> income && income >= 0) {
       
        // 0-5000 - 0%
        // 5000-15000 - +10%
        // 15000-35000 - +15%
        // > 35000 - +20%

        double tax {0.0};
        if (income <= 5000) {
            tax = 0.0;
        } else if (income <= 15000) {
            tax = (income - 5000) * 0.1;
        } else if (income <= 35000) {
            tax = (income - 15000) * 0.15 + TAX_LEVEL_1;
        } else {
            tax = (income - 35000) * 0.2 + TAX_LEVEL_2 + TAX_LEVEL_1;
        }

        std::cout << "Your tax: " << tax << '\n';
        std::cout << "Enter your income: ";
    }

    std::cout << "Bye\n";
}