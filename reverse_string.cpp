#include <iostream>

void rev_str(char* str)
{
    for (int i = 0; i < strlen(str)/2; i++) {
        char temp = str[i];
        str[i] = str[strlen(str)-i-1];
        str[strlen(str)-i-1] = temp;
    }
}

void rev_str(const char* src, char* dest)
{
    for (int i = 0; i < strlen(src); i++) {
        dest[i] = src[strlen(src)-i-1];
    }
}

int main() {
    char s1[80], s2[80];

    strcpy(s1, "Hello!");
    
    rev_str(s1, s2);
    std::cout << "s1: " << s1 << ", s2: " << s2 << std::endl;

    rev_str(s1);
    std::cout << "s1: " << s1 << ", s2: " << s2 << std::endl;

    rev_str(s2, s1);
    std::cout << "s1: " << s1 << ", s2: " << s2 << std::endl;
}