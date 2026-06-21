#include <iostream>

long double probability(unsigned numbers, unsigned picks, unsigned mega);

int main()
{
    double total, meganumbers, choices;

    std::cout << "Enter the total number of choices on the game card,\n"
        " the total number of meganumbers and\n"
        " the number of picks allowed:\n";

    while(std::cin >> total >> meganumbers >> choices && choices <= total)
    {
        std::cout << "You have one chance in ";
        std::cout << probability(total, choices, meganumbers);
        std::cout << " of winning.\n";
        std::cout << "Next numbers (q to quit): ";
    }

    std::cout << "Bye!\n";

    return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned mega)
{
    long double result {1.0};
    long double n;
    unsigned p;
    for (n = numbers, p=picks; p > 0; n--, p--)
        result = result * n / p;

    return result * mega;
}