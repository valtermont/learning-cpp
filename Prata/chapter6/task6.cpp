#include <iostream>
#include <string>

struct patron {
    std::string name;
    double sum;
};

int main()
{
    int count;
    std::cout << "Enter count of the patrons: ";
    (std::cin >> count).get();

    if (count <= 0) {
        std::cout << "No patrons to process. Bye!\n";
        return 0;
    }
    
    patron * members = new patron[count];
    
    for (int i{0}; i < count; ++i)
    {
        std::cout << "Enter the #" << i+1 << " patron's name: ";
        std::getline(std::cin, members[i].name);
        std::cout << "Enter the #" << i+1 << " patron's donate: ";
        (std::cin >> members[i].sum).get();
    }

    std::cout << "Grand Patrons:\n";
    bool hasGrandPatrons {false};
    for (int i{0}; i < count; ++i)
    {
        if (members[i].sum >= 10000)
        {
            hasGrandPatrons = true;
            std::cout << members[i].name << " - $" << members[i].sum << '\n';
        }
    }
    if (!hasGrandPatrons)
        std::cout << "none\n";
    

    std::cout << "Patrons:\n";
    bool hasPatrons {false};
    for (int i{0}; i < count; ++i)
    {
        if (members[i].sum < 10000)
        {
            hasPatrons = true;
            std::cout << members[i].name << " - $" << members[i].sum << '\n';
        }
    }
    if (!hasPatrons)
        std::cout << "none\n";

    delete[] members;
}