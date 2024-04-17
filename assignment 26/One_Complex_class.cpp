#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b; // Instance member variable
    // real // imaginary
public:
    // Instace member function
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "real= " << a << "imag= " << b;
    }
    Complex add(Complex c)
    {
        // real and imaginary
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};
int main()
{
    Complex x, x2, x3;
    x.setData(5, 10);
    x2.setData(10, 50);
    x3 = x.add(x2);
    x3.showData();
    return 0;
}