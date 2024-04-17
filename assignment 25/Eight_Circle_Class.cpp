#include <iostream>
using namespace std;
class Circle
{
private:
    double radius;

public:
    void set(double x)
    {
        radius = x;
    }

private:
    double area()
    {
        return 3.14 * radius * radius;
    }

public:
    void print()
    {
        cout << "Area of circle " << area();
    }
};
int main()
{
    Circle r;
    r.set(8);
    r.print();
    return 0;
}