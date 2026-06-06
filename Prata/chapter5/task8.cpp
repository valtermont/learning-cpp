#include <iostream>
#include <cstring>

int main()
{
    int countWords {0};
    char word[120] {""};
    const char stopWord [] {"done"};

    std::cout << "Enter words (to complete, enter the word done):\n";
    while (strcmp(word, stopWord) != 0)
    {
        std::cin >> word;
        ++countWords;
    }
    --countWords;

    std::cout << "You entered " << countWords << " words.\n";
}