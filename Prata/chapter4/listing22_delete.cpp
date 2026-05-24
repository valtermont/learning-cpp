#include <iostream>
#include <cstring>

char * getname(void);

int main()
{
    char * name;
    name = getname();
    std::cout << name << " at " << (int *) name << std::endl;
    delete [] name;

    name = getname();
    std::cout << name << " at " << (int *) name << std::endl;
    delete [] name;
}

char * getname()
{
    char temp[80];
    std::cout << "Enter last name: ";
    std::cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);

    return pn;
}