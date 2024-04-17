#include <iostream>
using namespace std;
class Complex
{
private:
    int a;
    int b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1, c2;
    c1.set(25, 60);
    c1.print();
    c2.print();
    return 0;
}