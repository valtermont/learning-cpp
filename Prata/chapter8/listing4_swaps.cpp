#include <iostream>

void swapr(int& a, int& b);
void swapp(int* p, int* q);
void swapv(int a, int b);

int main()
{
    int wallet1 {300};
    int wallet2 {350};

    std::cout << "wallet 1 = $" << wallet1
        << ", wallet 2 = $" << wallet2 << '\n';

    std::cout << "Using references for swap contents:\n";
    swapr(wallet1, wallet2);
    std::cout << "wallet 1 = $" << wallet1
        << ", wallet 2 = $" << wallet2 << '\n';

    std::cout << "Using pointers for swap contents:\n";
    swapp(&wallet1, &wallet2);
    std::cout << "wallet 1 = $" << wallet1
        << ", wallet 2 = $" << wallet2 << '\n';

    std::cout << "Trying to use passing by value:\n";
    swapv(wallet1, wallet2);
    std::cout << "wallet 1 = $" << wallet1
        << ", wallet 2 = $" << wallet2 << '\n';

    return 0;
}

void swapr(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapp(int* p, int* q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void swapv(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}