#include <iostream>
using namespace std;
void fibonacci(int);
int main()
{
    int no;
    cout << "Enter the no you want to check present in the fibonacci series or not?" << endl;
    cin >> no;
    fibonacci(no);
    return 0;
}
void fibonacci(int no)
{
    int a = -1, b = 1, sum = 0, flag = 0;
    printf("Fibonacci series: \t");
    while (sum < no)
    {
        sum = a + b;
        if (sum == no)
            flag = 1;
        a = b;
        b = sum;
        printf("%d ", sum);
    }
    printf("\n");
    if (flag)
        printf("%d found in fibonacci series ", no);
    else
        printf("%d not found in fibonacci series ", no);
}