#include <iostream>
using namespace std;
class Area
{
private:
    float radius;
    int length, width, side;

public:
    void setLengthWidth(int l, int w)
    {
        length = l;
        width = w;
    }
    void setSide(int s)
    {
        side = s;
    }
    void setRadius(float r)
    {
        radius = r;
    }

    // circle
    float area(float radius)
    {
        // area of circle
        return 3.14 * radius * radius;
    }
    // rectangle
    int area(int length, int width)
    {
        // area of rectangle
        return length * width;
    }
    // square
    int area(int side)
    {
        // area of square
        return side * side;
    }
    void print()
    {
        cout << "Area of the circle is " << area(radius) << endl;
        cout << "Area of the rectangle is " << area(length, width) << endl;
        cout << "Area of the square is " << area(side) << endl;
    }
};
float area(float);
int area(int, int);
float area(float, float);
int main()
{
    // circle
    // rectangle
    // square a^2

    Area a;
    a.setRadius(4);
    a.setLengthWidth(3, 2);
    a.setSide(5);
    a.print();
    return 0;
}
