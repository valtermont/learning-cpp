#include <iostream>

int main()
{
    int a;
    int sum = 0;
    do {
        std::cout << "Sum: " << sum << "\n";
        std::cout << "Enter a number for accamulate it or 0 for finish: ";
        std::cin >> a;
        sum += a;
    } while (a != 0);

    return 0;
}