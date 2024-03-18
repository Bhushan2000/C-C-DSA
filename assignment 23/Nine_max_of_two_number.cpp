#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of the a and b" << endl;
    cin >> a >> b;
    cout << "Maximum between two variables is " << (a > b ? a : b);
    return 0;
}