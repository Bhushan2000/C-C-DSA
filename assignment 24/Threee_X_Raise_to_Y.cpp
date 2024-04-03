#include <iostream>
using namespace std;
void XRaiseY(int, int);
int main()
{
    int X, Y;
    cout << "Enter the value of X and Y:" << endl;
    cin >> X >> Y;
    XRaiseY(X, Y);
    return 0;
}
void XRaiseY(int x, int y)
{
    int raise = 1;
    while (y != 0)
    {
        raise = raise * x;
        y--;
    }
    cout << "X raise to Y " << raise;
}