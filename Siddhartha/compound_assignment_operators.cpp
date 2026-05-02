#include <iostream>

int main() {
    std::cout << "Введите число: ";
    int value = 0;
    std::cin >> value;

    value += 8;
    std::cout << "После += 8, value = " << value << std::endl;

    value -= 2;
    std::cout << "После -= 2, value = " << value << std::endl;

    value /= 4;
    std::cout << "После /= 4, value = " << value << std::endl;

    value *= 4;
    std::cout << "После *= 4, value = " << value << std::endl;

    value %= 1000;
    std::cout << "После %= 1000, value = " << value << std::endl;

    value <<= 1;
    std::cout << "После <<= 1, value = " << value << std::endl;

    value >>= 2;
    std::cout << "После >>= 2, value = " << value << std::endl;
    
    value |= 0x55;
    std::cout << "После |= 0x55, value = " << value << std::endl;

    value ^= 0x55;
    std::cout << "После ^= 0x55, value = " << value << std::endl;

    value &= 0x0F;
    std::cout << "После &= 0x0F, value = " << value << std::endl;
}