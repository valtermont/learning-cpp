#include <iostream>
#include <string>

using std::string;

string version1(const string& s1, const string& s2);
const string& version2(string& s1, const string& s2);
const string& version3(string& s1, const string& s2);

int main()
{
    string input, copy, result;
    std::cout << "Enter a string: ";
    getline(std::cin, input);
    copy = input;

    // version1() test
    std::cout << "Your string as entered: " << input << '\n';
    result = version1(input, "***");
    std::cout << "Your string enhanced: " << result << '\n';

    // version2() test
    std::cout << "Your original string: " << input << '\n';
    result = version2(input, "###");
    std::cout << "Your string enhanced: " << result << '\n';

    std::cout << "Your original string: " << input << '\n';
    std::cout << "Resetting original string.\n";
    input = copy;
    result = version3(input, "@@@");
    std::cout << "Your string enhanced: " << result << '\n';
    std::cout << "Your original string: " << input << '\n';

    return 0;
}

string version1(const string& s1, const string& s2)
{
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}

const string& version2(string& s1, const string& s2)
{
    s1 = s2 + s1 + s2;
    return s1; // s1 will be changed!
}

const string& version3(string& s1, const string& s2)
{
    string temp;
    temp = s2 + s1 + s2;
    return temp; // not safe!!!
}