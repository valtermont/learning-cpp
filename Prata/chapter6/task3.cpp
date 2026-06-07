#include <iostream>

int main()
{
    std::cout << "Please, enter one of the following choices:\n";
    std::cout << "c) carnivore      p) pianist\n";
    std::cout << "t) tree           g) game\n";

    char ch;
    std::cin >> ch;
    
    while (
        ch != 'c' && ch != 'C' && ch != 'p' && ch != 'P' &&
        ch != 't' && ch != 'T' && ch != 'g' && ch != 'G'
    ) 
    {
        std::cout << "Please enter a c, p, t, or g: ";
        std::cin >> ch;
    }
    
    switch (ch)
    {
        case 'C': 
        case 'c': std::cout << "A tiger is a carnivore.\n"; break;
        case 'P':
        case 'p': std::cout << "Chopin was a famous pianist.\n"; break;
        case 'T':
        case 't': std::cout << "A maple is a tree.\n"; break;
        case 'G':    
        case 'g': std::cout << "Chess is a strategic game.\n"; break;
    };
}