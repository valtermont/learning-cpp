#include <iostream>

const int strsize {80};
const int membersize {5};

struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

const bop members[membersize] {
    {"Wimp Macho", "Tech Lead", "JINNY", 1},
    {"Raki Rhodes", "Senior Backend Developer", "HACKER", 2},
    {"Celia Laiter", "Senior React Developer", "I4CHUN", 2},
    {"Hoppy Hipman", "QA Engineer", "J3CKA", 0},
    {"Pat Hand", "Head Mobile Architect", "ARCHER", 1},
};

void printMenu();
void printByName();
void printByTitle();
void printByBopName();
void printByPreference();

int main()
{
    printMenu();

    std::cout << "Enter your choice: ";

    char ch;
    std::cin >> ch;

    while (ch != 'q' && ch != 'Q')
    {
        switch (ch)
        {
            case 'A':
            case 'a':
                printByName();
                break;
            case 'B':
            case 'b':
                printByTitle();
                break;
            case 'C':
            case 'c':
                printByBopName();
                break;
            case 'D':
            case 'd':
                printByPreference();
                break;
            
            default: 
                std::cout << "That's not a choice.\n";
        }

        printMenu();
        std::cout << "Next choice: ";
        std::cin >> ch;
    }

    std::cout << "Bye!\n";

    return 0;
}

void printMenu()
{
    std::cout << "Benevolent Order of Programmers Report\n"
        "a. display by name             b. display by title\n"
        "c. display by bopname          d. display by preference\n"
        "q. quit\n";
}

void printByName()
{
    for (int i{0}; i < membersize; ++i)
        std::cout << members[i].fullname << '\n';
}

void printByTitle()
{
    for (int i{0}; i < membersize; ++i)
        std::cout << members[i].title << '\n';
}

void printByBopName()
{
    for (int i{0}; i < membersize; ++i)
        std::cout << members[i].bopname << '\n';
}

void printByPreference()
{
    for (int i{0}; i < membersize; ++i)
        switch (members[i].preference)
        {
            case 0:
                std::cout << members[i].fullname << '\n';
                break;
            
            case 1:
                std::cout << members[i].title << '\n';
                break;
            
            case 2:
                std::cout << members[i].bopname << '\n';
                break;
        }
}
