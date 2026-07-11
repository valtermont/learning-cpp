#include <iostream>
#include <utility>

int fillArray(double[], int);
void showArray(double[], int);
void reverseArray(double[], int);

int main()
{
    constexpr int SIZE = 10;
    double Arr[SIZE] = {0};

    int count = fillArray(Arr, SIZE);
    reverseArray(Arr+1, count-2);
    showArray(Arr, count);
}

int fillArray(double arr[], int count)
{
    int currentCount{0};
    double d;
    std::cout << "Enter a[" << currentCount << "] or press q for stop: ";
    while (std::cin >> d) {
        arr[currentCount] = d;
        currentCount++;
        if (currentCount < count)
            std::cout << "Enter a[" << currentCount << "] or press q for stop: ";
        else
            break;
    }

    return currentCount;
}

void showArray(double arr[], int count)
{
    for (int i{0}; i < count; ++i)
    {
        std::cout << "a[" << i << "] = " << arr[i];
        std::cout << (i == count - 1 ? "\n" : ", ");
    }
}

void reverseArray(double arr[], int count)
{
    if (count <= 1) {
        return;
    }

    int n = count;
    for (int i = 0; i < n / 2; ++i) {
        std::swap(arr[i], arr[n - i - 1]);
    }
}