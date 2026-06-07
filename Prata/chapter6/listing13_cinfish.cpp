#include <iostream>

const int fishMax {5};

int main()
{
    using namespace std;

    double fish[fishMax] {0.0};
    cout << "Please enter the weights of your fish.\n";
    cout << "You may enter up to " << fishMax
        << " fish <q to terminate>.\n";

    cout << "fish #1: ";
    int i = 0;
    while (i < fishMax && cin >> fish[i])
        if (++i < fishMax)
            cout << "fish #" << i+1 << ": ";

    double total {0.0};
    for (int j {0}; j < i; j++)
        total += fish[j];

    if (i == 0)
        cout << "No fish\n";
    else
        cout << total / i << " = average weight of " << i << " fish\n";
    
    cout << "Done!\n";
    return 0;
}