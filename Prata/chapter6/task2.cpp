#include <iostream>

const int SIZE {10};

int main()
{
    double donates[SIZE] {0.0};

    std::cout << "Please enter the donates.\n";
    std::cout << "You may enter up to " << SIZE
        << " donate <q to terminate>.\n";

    std::cout << "donate #1: ";
    int donatesCount = 0;
    double donatesSum = 0.0;
    while (donatesCount < SIZE && std::cin >> donates[donatesCount])
    {
        donatesSum += donates[donatesCount];
        ++donatesCount;
        if (donatesCount < SIZE)
        {
            std::cout << "donate #" << donatesCount+1 << ": ";
        }
    }

    if (donatesCount == 0)
    {
        std::cout << "You haven't entered any donations.\n";
    }
    else
    {
        double average = donatesSum / donatesCount;
        int moreAverageCount = 0;
        for (int i {0}; i < donatesCount; i++)
            if (donates[i] > average)
                ++moreAverageCount;
        
        std::cout << std::fixed;
        std::cout.precision(2);
        std::cout << "Average: $" << average << '\n';
        std::cout << "More than average count: " << moreAverageCount << '\n';
    }
}