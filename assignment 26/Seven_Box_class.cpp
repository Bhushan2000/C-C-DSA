#include <iostream>
using namespace std;
class Box
{
private:
    int length, breadth, height, volume;

public:
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    void setBox(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    int calculate_volume()
    {
        volume = length * breadth * height;
        return volume;
    }
    int getVolume()
    {
        return volume;
    }
};

int main()
{
    Box b(5, 5, 5);
    b.calculate_volume();
    cout << b.getVolume();
    return 0;
}