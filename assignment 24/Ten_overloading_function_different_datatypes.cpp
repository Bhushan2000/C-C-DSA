#include <iostream>
using namespace std;
int add(int, int);
float add(float, float);
int main()
{
    int a, b;
    float x, y;
    cout << "Enter two number in int form ";
    cin >> a >> b;
    cout << "Addition is " << add(a, b) << endl;
    cout << "Enter two number in float form ";
    cin >> x >> y;
    cout << "Addition is " << add(x, y) << endl;
    return 0;
}
int add(int a, int b)
{
    return a + b;
}
float add(float a, float b)
{
    return a + b;
}