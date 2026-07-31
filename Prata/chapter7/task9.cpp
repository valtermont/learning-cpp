#include <iostream>

const int SLEN = 30;

struct Student
{
    char fullName[SLEN];
    char hobby[SLEN];
    int oopLevel;
};

int getinfo(Student pa[], int n);
void display1(Student st);
void display2(const Student* ps);
void display3(const Student pa[], int n);

int main()
{
    std::cout << "Enter class size: ";
    int classSize;
    std::cin >> classSize;
    while (std::cin.get() != '\n')
        continue;
    
    Student* ptrStu = new Student[classSize];
    int entered = getinfo(ptrStu, classSize);

    for (int i{0}; i < entered; ++i)
    {
        display1(ptrStu[i]);
        display2(&ptrStu[i]);
    }

    display3(ptrStu, entered);
    delete[] ptrStu;
    std::cout << "Done\n";

    return 0;
}

int getinfo(Student pa[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        std::cout << "Enter student's full name (or leave empty to stop): ";
        std::cin.getline(pa[i].fullName, SLEN);
        
        if (pa[i].fullName[0] == '\0') {
            break;
        }
        
        std::cout << "Enter student's hobby: ";
        std::cin.getline(pa[i].hobby, SLEN);
        
        std::cout << "Enter student's OOP level (integer): ";
        std::cin >> pa[i].oopLevel;
        
        while (std::cin.get() != '\n')
            continue;
    }

    return i;
}

void display1(Student st)
{
    std::cout << "\n--- Display 1 (Passed by value) ---\n";
    std::cout << "Name: " << st.fullName << "\n";
    std::cout << "Hobby: " << st.hobby << "\n";
    std::cout << "OOP Level: " << st.oopLevel << "\n";
}

void display2(const Student* ps)
{
    std::cout << "\n--- Display 2 (Passed by pointer) ---\n";
    std::cout << "Name: " << ps->fullName << "\n";
    std::cout << "Hobby: " << ps->hobby << "\n";
    std::cout << "OOP Level: " << ps->oopLevel << "\n";
}

void display3(const Student pa[], int n)
{
    std::cout << "\n--- Display 3 (Array of structs) ---\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Student #" << (i + 1) << ":\n";
        std::cout << "  Name: " << pa[i].fullName << "\n";
        std::cout << "  Hobby: " << pa[i].hobby << "\n";
        std::cout << "  OOP Level: " << pa[i].oopLevel << "\n";
    }
}