#include <iostream>
using namespace std;
float area(float);
int area(int, int);
float area(float, float);
int main()
{
    // circle
    // rectangle
    // triangle
    int radius, length, width, base, height;
    // cout << "Enter the radius of the circle ";
    // cin >> radius;
    // cout << "Area of circle " << area(radius) << endl;
    // cout << "Enter the length and width of the rectangle ";
    // cin >> length >> width;
    // cout << "Area of rectangle " << area(length, width) << endl;
    cout << "Enter the base and height of the triangle ";
    cin >> base >> height;
    cout << "Area of triangle " << area(base, height) << endl;
    return 0;
}
float area(float radius)
{
    // area of circle
    return 3.14 * radius*radius;
}
int area(int length, int width)
{
    // area of rectangle
    return (length * width);
}
float area(float base, float height)
{
    // area of triangle
    return (0.5 * base * height);
}
