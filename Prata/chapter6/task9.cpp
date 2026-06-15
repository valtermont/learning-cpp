#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

struct patron {
    std::string name;
    double sum;
};

int main()
{
    std::ifstream inFile;
    std::string filename {"patrons.txt"};

    inFile.open(filename);
    if (!inFile.is_open())
    {
        std::cout << "Could not open the file " << filename << '\n';
        std::cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    int count;
    (inFile >> count).get();
    
    patron * members = new patron[count];
    
    for (int i{0}; i < count; ++i)
    {
        std::getline(inFile, members[i].name);
        (inFile >> members[i].sum).get();
    }

    inFile.close();

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