#include <iostream>
#include <iomanip>

int main()
{
    int cleoSum, dafnaSum;
    cleoSum = dafnaSum = 10000;

    int year = 0;
    std::cout << "\nYear\tCleo\t\tDafna\n\n" << std::fixed << std::setprecision(2);
    while (cleoSum <= dafnaSum) {
        ++year;
        dafnaSum = dafnaSum + 1000;
        cleoSum = cleoSum + cleoSum * 5 / 100;
        std::cout << year << "\t$" << cleoSum / 100.0 << "\t\t$" << dafnaSum / 100.0 << "\n";
    }
    std::cout << "\n\nNeed " << year << " years\n";
}