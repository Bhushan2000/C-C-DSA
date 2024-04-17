#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void set(int x, int y)
    {
        length = x;
        breadth = y;
    }

private:
    int area()
    {
        return length * breadth;
    }

public:
    void print()
    {
        cout << "Area of rectangle " << area();
    }
};
int main()
{
    Rectangle r;
    r.set(8, 8);
    r.print();
    return 0;
}