#include <iostream>

int main()
{
    std::cout << "The Amazing Accounto will sum and average ";
    std::cout << "five numbers for you.\n";
    std::cout << "Please enter five values:\n";

    double number;
    double sum = 0.0;

    for (int i = 1; i <= 5; i++)
    {
        std::cout << "Value " << i << ": ";
        std::cin >> number;
        sum += number;
    }

    std::cout << "Five exquisite choices indeed! ";
    std::cout << "They sum to " << sum << "\n";
    std::cout << "and average to " << sum / 5 << ".\n";
    std::cout << "The Amasing Accounto bids you adieu!\n";

    return 0;
}