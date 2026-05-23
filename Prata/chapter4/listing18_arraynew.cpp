#include <iostream>

int main()
{
    double* p3 = new double[3];

    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    std::cout << "p3 address: " << p3 << std::endl;
    std::cout << "ps[0] is " << p3[0] << std::endl;
    std::cout << "ps[1] is " << p3[1] << std::endl;
    
    p3 = p3 + 1;
    std::cout << "p3 address: " << p3 << std::endl;
    std::cout << "Now ps[0] is " << p3[0] << std::endl;
    std::cout << "Now ps[1] is " << p3[1] << std::endl;
    
    p3 = p3 - 1;
    std::cout << "p3 address: " << p3 << std::endl;
    std::cout << "Now ps[1] is " << p3[1] << std::endl;

    delete [] p3;
}