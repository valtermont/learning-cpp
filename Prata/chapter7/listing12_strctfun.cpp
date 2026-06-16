#include <iostream>
#include <cmath>

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
    rect rplace;
    polar pplace;

    std::cout << "Enter the x and y values: ";
    while (std::cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);

        std::cout << "Next two numbers (q to quit): ";
    }

    std::cout << "Done.\n";
}

polar rect_to_polar(rect xypos)
{
    polar answer;
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);

    return answer;
}

void show_polar(polar dapos)
{
    std::cout << "distance = " << dapos.distance;
    std::cout << ", angle = " << dapos.angle * 180 / M_PI << " degrees\n";
}