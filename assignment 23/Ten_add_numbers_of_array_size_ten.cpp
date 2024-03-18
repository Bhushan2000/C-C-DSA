#include <iostream>
using namespace std;
int main()
{
    int a[10], sum = 0;
    cout << "Enter the array elements : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << "Sum is : " << sum;
    return 0;
}