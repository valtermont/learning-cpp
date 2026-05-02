#include <iostream>
#include <bitset> // need import for cout binary formatted number

int main() {
    std::cout << "Введите число (0-255): ";
    unsigned short inputNum = 0;
    
    std::cin >> inputNum;
    std::bitset<8> inputBits(inputNum);
    std::cout << inputNum << " в бинарном виде равно " << inputBits << std::endl;
    std::cout << "-------" << std::endl;
    
    std::bitset<8> BitwiseNOT = (~inputNum);
    std::cout << "Побитовое HE ~" << std::endl;
    std::cout << "~" << inputBits << " = " << BitwiseNOT << std::endl;
    std::cout << "-------" << std::endl;

    std::cout << "Логическое И (&) с 00001111" << std::endl;
    std::bitset<8> BitwiseAND = (0x0F & inputNum); // 0x0F == 00001111
    std::cout << "00001111 & " << inputBits << " = " << BitwiseAND << std::endl;
    std::cout << "-------" << std::endl;

    std::cout << "Логическое ИЛИ (|) c 00001111" << std::endl;
    std::bitset<8> BitwiseOR = (0x0F | inputNum);
    std::cout << "00001111 | " << inputBits << " = " << BitwiseOR << std::endl;
    std::cout << "-------" << std::endl;

    std::cout << "Логическое XOR (^) c 00001111" << std::endl;
    std::bitset<8> BitwiseXOR = (0x0F ^ inputNum);
    std::cout << "00001111 ^ " << inputBits << " = " << BitwiseXOR << std::endl;
    std::cout << "-------" << std::endl;

    std::cout << "Сдвиг вправо >>" << std::endl;
    std::bitset<8> BitwiseShiftRight = inputNum >> 1;
    std::cout << inputBits << " >> 1 = " << BitwiseShiftRight << std::endl;
    std::cout << "-------" << std::endl;

    std::cout << "Сдвиг влево <<" << std::endl;
    std::bitset<8> BitwiseShiftLeft = inputNum << 1;
    std::cout << inputBits << " << 1 = " << BitwiseShiftLeft << std::endl;
    std::cout << "-------" << std::endl;
}