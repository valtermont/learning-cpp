#include <iostream>

const int maxRounds {5};

int main()
{
    int golf[maxRounds] {0};

    std::cout << "Please enter your golf scores.\n";
    std::cout << "You must enter " << maxRounds << " rounds.\n";

    for (int i {0}; i < maxRounds; i++)
    {
        std::cout << "round #" << i+1 << ": ";
        while (!(std::cin >> golf[i]))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Please enter a number: ";
        }
    }

    double total {0.0};
    for (int i {0}; i < maxRounds; i++)
        total += golf[i];

    std::cout << total / maxRounds << " = average score " << maxRounds << " rounds\n";
}