#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imag;

public:
    void setData(int r, int i)
    {
        real = r;
        imag = i;
    }
    friend Complex operator+(Complex, Complex);
    void showData()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main()
{
    Complex c1, c2, c3;
    c1.setData(10, 20);
    c2.setData(50, 90);
    // friend function
    c3 = c1 + c2;
    c1.showData();
    c2.showData();
    c3.showData();
    return 0;
}