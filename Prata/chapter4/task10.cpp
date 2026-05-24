#include <iostream>
#include <array>

int main()
{
    std::array<int, 3> results;
    
    std::cout << "Enter 3 results of run:\n";
    std::cout << "First result (meters): ";
    std::cin >> results[0];

    std::cout << "Second result (meters): ";
    std::cin >> results[1];

    std::cout << "Third result (meters): ";
    std::cin >> results[2];

    std::cout << "Your results:\n";
    std::cout << "1. " << results[0] << " meters.\n";
    std::cout << "2. " << results[1] << " meters.\n";
    std::cout << "3. " << results[2] << " meters.\n";
    std::cout << "Average: " << (results[0] + results[1] + results[2]) / 3.0 << " meters.\n";
}