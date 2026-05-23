#include <iostream>

int main()
{
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5};

    std::cout << "Total yams = ";
    std::cout << yams[0] + yams[1] + yams[2] << std::endl;
    std::cout << "The package with " << yams[1] << " yams costs ";
    std::cout << yamcosts[1] << " cents per yam." << std::endl;

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
    std::cout << "The total yam expense is " << total << " cents." << std::endl;

    std::cout << std::endl << "Size of yams array = " << sizeof yams << " bytes." << std::endl;
    std::cout << "Size of one element = " << sizeof yams[0] << " bytes." << std::endl;

    return 0;
}