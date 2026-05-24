#include <iostream>

int main()
{
    int quizscopes[10] {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    std::cout << "Doing it right:\n";
    int i;
    for (i = 0; quizscopes[i] == 20; i++)
        std::cout << "quiz " << i << " is a 20\n";
    
    std::cout << "Doing it dangerously wrong:\n"; 
    for (i = 0; quizscopes[i] = 20; i++) // will be segmentation fault
        std::cout << "quiz " << i << " is a 20\n";

    return 0;
}