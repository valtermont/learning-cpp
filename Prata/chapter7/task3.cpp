#include <iostream>

struct Box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void print(Box);
void calcVolume(Box*);

int main()
{
    Box box {"Bosh", 0.5, 0.7, 0.4};
    calcVolume(&box);
    print(box);
}

void print(Box box)
{
    std::cout << "Maker: " << box.maker << '\n'
        << " Height: " << box.height
        << ", Width: " << box.width
        << ", Length: " << box.length << '\n'
        << " Volume: " << box.volume << '\n';
}

void calcVolume(Box* box)
{
    box->volume = box->height * box->width * box->length;
}