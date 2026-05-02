#include <iostream>

int main() {
    char sayHello[] = {'H','e','l','l','o',' ','w','o','r','l','d','!','\0'};
    std::cout << sayHello << std::endl;
    std::cout << "Size: " << sizeof(sayHello) << std::endl;
    sayHello[5] = '\0';
    std::cout << sayHello << std::endl;
    std::cout << "Size: " << sizeof(sayHello) << std::endl;

    return 0;
}