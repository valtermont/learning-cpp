#include <iostream>

int main()
{
    const int Cities = 5;
    const int Years = 4;

    const char* cities[Cities] = {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };

    int maxtemps[Years][Cities] = {
        {96, 100, 87, 101, 105},
        {96, 98, 91, 107, 104},
        {97, 101, 93, 108, 107},
        {98, 103, 95, 109, 108}
    };

    std::cout << "Maximum temperatures for 2008 - 2011\n\n";

    for (int city = 0; city < Cities; ++city)
    {
        std::cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
            std::cout << maxtemps[year][city] << "\t";
        std::cout << "\n";
    }

    return 0;
}