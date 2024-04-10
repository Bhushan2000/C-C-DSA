#include <iostream>
using namespace std;
void fibonacci(int);
int fibonacci_new_approach(int);
int main()
{
    int no;
    cout << "Enter the no you want to check present in the fibonacci series or not?" << endl;
    cin >> no;
    // cout << fibonacci(no);

    // new approach
    int flag = 0, sum;

    for (int i = 1;; i++)
    {
        sum = fibonacci_new_approach(i);
        cout << sum << " ";
        if (no == sum)
        {
            flag = 1;
            break;
        }
        else if (sum > no)
            break;
    }
    cout << endl;
    if (flag)
        cout << "Number found in fibonacci series";
    else
        cout << "Number not found in fibonacci series";

    return 0;
}
void fibonacci(int no)
{
    int a = -1, b = 1, sum = 0, flag = 0;
    cout << "Fibonacci series: ";
    while (sum < no)
    {
        sum = a + b;
        if (sum == no)
            flag = 1;
        a = b;
        b = sum;
        cout << " " << sum;
    }
    cout << endl;
    if (flag)
        cout << no << " found in fibonacci series ";
    else
        cout << no << " not found in fibonacci series ";
}
// new approach
int fibonacci_new_approach(int n)
{
    int f1 = 1, f2 = 1, temp;
    if (n <= 2)
        return 1;
    for (int i = 3; i <= n; i++)
    {
        temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }
    return f2;
}