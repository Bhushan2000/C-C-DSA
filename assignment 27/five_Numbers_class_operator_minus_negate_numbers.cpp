#include <iostream>
using namespace std;
class Numbers
{
private:
    int x, y, z;

public:
    // overlaod unary - to negate the numbers;
    // default constructor to initialize the values
    Numbers()
    {
        x = 1;
        y = 1;
        z = 1;
    }
    // Paramatrized constructor
    Numbers(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    int getInt()
    {
        return x;
    }
    void input()
    {
        cout << "Enter three Numbers" << endl;
        cout << "..................." << endl;
        cout << "First number : ";
        cin >> x;
        cout << "Second number : ";
        cin >> y;
        cout << "Third number : ";
        cin >> z;
    }
    void display()
    {
        cout << "x=" << x << " y=" << y << " z=" << z << endl;
    }
    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};
int main()
{
    Numbers n;
    // error: no match for 'operator-' (operand type is 'Numbers')
    n.input();
    cout << "Numbers before Negation " << endl;
    n.display();
    -n;
    cout << "Numbers after Negation " << endl;
    n.display();
}