#include <iostream>
using namespace std;
int add(int, int, int = 0); // default argument
int main()
{
    int a, b, c;
    cout << "Adding two numbers" << endl;
    cin >> a >> b;
    cout << "Adding three numbers" << endl;
    cin >> a >> b >> c;
    cout << "Addition of two numbers is " << add(a, b) << endl;
    cout << "Addition of three numbers is " << add(a, b, c) << endl;
    return 0;
}
int add(int a, int b, int c) //c is default argument
{
    return a + b + c;
}