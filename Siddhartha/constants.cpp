#include <iostream>

constexpr double Pi = 3.141593; // compile time const
constexpr double GetPi() { return Pi; }

int main() {
    using namespace std;
    const double pi = 3.1415926; // runtime const
    cout << "Значение pi равно: " << pi << endl;

    cout << "constexpr GetPi() возвращает " << GetPi() << endl;

    #define PI 3.141593 // macros const (old style)
    cout << "define PI подставляет " << PI << endl;
}