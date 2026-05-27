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

    int bookCounts[monthsCount][3];
    int bookSumByYears[3] {0};

    int bookSum = 0;

    for (int j = 0; j < 3; j++) {
        std::cout << j+1 << " year.\n";
        for (int i = 0; i < 12; i++) {
            std::cout << "How much books was sell in " << months[i] << "? Enter the value: ";
            std::cin >> bookCounts[i][j];
            bookSumByYears[j] += bookCounts[i][j];
            bookSum += bookCounts[i][j];
        }
        std::cout << "You sold " << bookSumByYears[j] << " books in " << j+1 << " year.\n\n";
    }

    std::cout << "\nSummary, you sold " << bookSum << " books.\n";
}