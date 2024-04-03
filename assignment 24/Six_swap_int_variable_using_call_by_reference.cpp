#include <iostream>
using namespace std;
void swap(int &, int &);
int main()
{
    int a = 5, b = 6;
    cout << "Before swap " << a << " " << b << endl;
    swap(a, b);
    cout << "After swap " << a << " " << b;
    return 0;
}
void swap(int &x, int &y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}