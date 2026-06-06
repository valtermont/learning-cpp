#include <iostream>
#include <string>

int main()
{
    int countWords {0};
    std::string word {""};
    const std::string stopWord {"done"};

    std::cout << "Enter words (to complete, enter the word done):\n";
    while (word != stopWord)
    {
        std::cin >> word;
        ++countWords;
    }
    --countWords;

    std::cout << "You entered " << countWords << " words.\n";
}