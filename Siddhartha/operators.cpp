#include <iostream>

class Date {
    int day, month, year;
public:
    Date(int inMonth, int inDay, int inYear)
        :month(inMonth), day(inDay), year(inYear) {};

    Date& operator ++() {
        ++day;
        return *this;
    }

    Date& operator --() {
        --day;
        return *this;
    }

    Date operator ++(int) {
        Date copy(day, month, year);
        ++day;
        return copy;
    }

    Date operator --(int) {
        Date copy(day, month, year);
        --day;
        return copy;
    }

    void DisplayDate();
};

void Date::DisplayDate() {
    std::cout << day << "." << month << "." << year << std::endl;
}

int main() {
    Date holiday(1, 7, 2025);
    holiday.DisplayDate();

    holiday++;
    std::cout << "Next day: ";
    holiday.DisplayDate();

    holiday--;
    std::cout << "Previous day: ";
    holiday.DisplayDate();
}