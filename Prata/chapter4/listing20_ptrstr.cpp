#include <iostream>
#include <cstring>

int main()
{
    char animal[20] {"bear"};
    const char * bird = "wren";
    char * ps;

    std::cout << animal << " and " << bird << std::endl;

    std::cout << "Enter a kind of animal: ";
    std::cin >> animal;

    // std::cout << ps,
    //  std::cin >> ps - недопустимы, так как на указатель ps не выделена память

    ps = animal;
    std::cout << ps << "!" << std::endl;
    std::cout << "Before using strcpy():" << std::endl;
    std::cout << animal << " at " << (int *) animal << std::endl;
    std::cout << ps << " at " << (int *) ps << std::endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);

    std::cout << "After using strcpy():" << std::endl;
    std::cout << animal << " at " << (int *) animal << std::endl;
    std::cout << ps << " at " << (int *) ps << std::endl;

    delete [] ps;
}