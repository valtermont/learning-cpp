#include <iostream>
#include <string>
#include <cstring>

int main()
{
    char charr1[20];
    char charr2[20] = "jaguar";

    std::string str1;
    std::string str2 = "panther";

    // присваивание
    str1 = str2;
    strcpy(charr1, charr2);

    // добавление символьных массивов
    str1 += " paste";
    strcat(charr1, " juice");

    // length
    int len1 = str1.size();
    int len2 = strlen(charr1);
    std::cout << "The string " << str1 << " contains " << len1 << " characters." << std::endl;
    std::cout << "The C-string " << charr1 << " containes " << len2 << " characters." << std::endl;
}