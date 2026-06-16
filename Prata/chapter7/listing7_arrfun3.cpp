#include <iostream>

const int Max = 5;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main()
{
    double properties[Max];
    int size = fill_array(properties, Max);
    show_array(properties, size);

    if (size > 0)
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

        revalue(factor, properties, size);
        show_array(properties, size);
    }

    std::cout << "Done.\n";

    return 0;
}

int fill_array(double ar[], int limit)
{
    int i;
    for (i = 0; i < limit; ++i)
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
        ar[i] = temp;
    }

    return i;
}

void show_array(const double ar[], int n)
{
    for (int i{0}; i < n; ++i)
        std::cout << "Property #" << i+1 << ": $" << ar[i] << '\n';
}

void revalue(double r, double ar[], int n)
{
    for (int i{0}; i < n; ++i)
        ar[i] *= r;
}