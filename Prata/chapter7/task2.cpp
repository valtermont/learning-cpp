#include <iostream>

int getGolfResults(int rounds[], int maxCount);
void printGolfResults(int* begin, int* end);
double average(int* begin, int* end);

int main()
{
    const int maxRounds {10};

    int golf[maxRounds] {0};
    int count = getGolfResults(golf, maxRounds);
    printGolfResults(golf, golf + count);
    std::cout << average(golf, golf + count) << " = average score " << maxRounds << " rounds\n";
}

int getGolfResults(int rounds[], int maxCount)
{
    int countEntered {0};

    std::cout << "Please enter your golf scores.\n";
    std::cout << "You can enter " << maxCount << " rounds or press 'q' for stop.\n";

    for (int i {0}; i < maxCount; i++)
    {
        std::cout << "round #" << i+1 << ": ";
        if (!(std::cin >> rounds[i])) {
            break;
        }
        ++countEntered;
    }

    return countEntered;
}

void printGolfResults(int* begin, int* end)
{
    std::cout << "---- RESULTS: ----\n";
    std::cout << " Round:     Score:\n";
    int* p = begin;
    while(p != end)
    {
        std::cout << "   " << p-begin + 1 << "          " << *p << '\n';
        p++;
    }
    std::cout << "------------------\n";
}

double average(int* begin, int* end)
{
    int* p = begin;
    double total {0.0};
    while (p != end) {
        total += *p;
        p++;
    }

    return total / (end - begin);
}