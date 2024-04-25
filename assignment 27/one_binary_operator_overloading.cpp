#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b; // Instance memeber variable

public:
    Complex()
    {
        cout << "Default Constructor called" << endl;
        a = 0;
        b = 0;
    }
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    // member functions
    // operator+ overloaded
    Complex operator+(Complex c)
    {
        cout << "Operator + called" << endl;
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
    // operator- overloaded
    Complex operator-(Complex c)
    {
        cout << "Operator - called" << endl;
        Complex temp;
        temp.a = a - c.a;
        temp.b = b - c.b;
        return temp;
    }
    // operator* overloaded
    Complex operator*(Complex c)
    {
        cout << "Operator * called" << endl;
        Complex temp;
        temp.a = a * c.a;
        temp.b = b * c.b;
        return temp;
    }
    int operator==(Complex c)
    {
        cout << "Operator == called" << endl;
        if (a == c.a && b == c.b)
            return 1;
        return 0;
    }
    void showData()
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    Complex c, c1, c2;
    c1.setData(10, 20);
    c2.setData(50, 30);
    c1.showData();
    c2.showData();
    // plus operator
    c = c1 + c2;
    c.showData();
    // minus operator
    c = c1 - c2;
    c.showData();
    // multiplication operator
    c = c1 * c2;
    c.showData();
    // compareason operator
    c1.setData(11, 20);
    c2.setData(11, 20);
    if (c1 == c2)
        cout << "Equal";
    else
        cout << "Not Equal";
    return 0;
}