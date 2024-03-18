#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 7;
    cout << "Swapping of two numbers without third variable" << endl;
    cout << "Before Swapping " << a << " & " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swapping " << a << " & " << b << endl;
    return 0;
}