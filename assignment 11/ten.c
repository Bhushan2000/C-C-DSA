#include <stdio.h>
int factorial(int);
int main()
{
    int sum = 0, number = 5;
    sum = sum + (factorial(number) / number);
    printf("Sum of series is %d ", sum);
    return 0;
}
int factorial(int n)
{
    int fact = 1;
    while (n != 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}