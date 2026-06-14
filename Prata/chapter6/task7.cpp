#include <iostream>
#include <string>
#include <cctype>

bool isVowel(char ch);

int main()
{
    std::cout << "Enter words (q to quit):\n";
    std::string word;
    int othersCount {0};
    int vowelsCount {0};
    int consonantsCount {0};

    while (std::cin >> word && word != "q")
    {
        if (word.empty()) 
            continue;

        char first = word.at(0);
        
        if (std::isalpha(first)) {
            if (isVowel(first))
                ++vowelsCount;
            else
                ++consonantsCount;
        }
        else
            ++othersCount;
    }

    std::cout << vowelsCount << " words beginning with vowels\n";
    std::cout << consonantsCount << " words beginning with consonants\n";
    std::cout << othersCount << " others\n";
}

bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}
