#include <iostream>

double calculate(double, double, double (*pf)(double, double));
double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);

int main()
{
    double a, b;
    double (*pf[4])(double, double) {add, sub, mul, div};
    const char* names[4] {"Sum: ", "Sub: ", "Mul: ", "Div: "};

    std::cout << "Enter a and b (or type a letter to quit):\n";
    
    // Цикл будет работать, пока пользователь вводит числа
    while (std::cin >> a >> b) 
    {
        for (int i {0}; i < 4; ++i)
        {
            double (*fn)(double, double) = div;
            if (pf[i] == fn && b == 0)
                std::cout << "Error: Division by zero\n";
            else
                std::cout << " " << names[i] << calculate(a, b, pf[i]) << "\n";
        }
        
        std::cout << "Enter a and b (or type a letter to quit):\n";
    }
}

double calculate(double a, double b, double (*pf)(double, double))
{
    return pf(a, b);
}

double add(double a, double b)
{
    return a + b;
}

double sub(double a, double b)
{
    return a - b;
}

double mul(double a, double b)
{
    return a * b;
}

double div(double a, double b)
{
    return a / b;
}