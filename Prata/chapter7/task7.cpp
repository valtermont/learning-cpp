#include <iostream>

const int Max = 5;

double* fill_array(double* begin, int limit);
void show_array(const double* begin, const double* end);
void revalue(double r, double* begin, double* end);

int main()
{
    double properties[Max] = {};
    double* end = fill_array(properties, Max);
    show_array(properties, end);

    if (properties != end)
    {
        std::cout << "Enter revaluation factor: ";
        double factor;
        while (!(std::cin >> factor))
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; Please enter a number: ";
        }

        revalue(factor, properties, end);
        show_array(properties, end);
    }

    std::cout << "Done.\n";

    return 0;
}

double* fill_array(double* begin, int limit)
{
    double* pt = begin;
    for (int i = 0; i < limit; ++i, ++pt)
    {
        double temp;
        std::cout << "Enter value #" << i+1 << ": ";
        std::cin >> temp;
        if (!std::cin)
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; input process terminated.\n";

            break;
        }
        else if (temp < 0)
            break;
        *pt = temp;
    }

    return pt;
}

void show_array(const double* begin, const double* end)
{
    for (auto pt = begin; pt != end; pt++)
        std::cout << "Property #" << (pt - begin)+1 << ": $" << *pt << '\n';
}

void revalue(double r, double* begin, double* end)
{
    for (auto pt = begin; pt != end; pt++)
        *(pt) *= r;
}