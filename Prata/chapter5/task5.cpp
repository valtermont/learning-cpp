#include <iostream>

int main()
{
    const int monthsCount = 12;
    const char* months[monthsCount] {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    int bookCounts[monthsCount] {0};
    int bookSum = 0;

    for (int i = 0; i < 12; i++) {
        std::cout << "How much books was sell in " << months[i] << "? Enter the value: ";
        std::cin >> bookCounts[i];
        bookSum += bookCounts[i];
    }

    std::cout << "You sold " << bookSum << " books last year.\n";
}