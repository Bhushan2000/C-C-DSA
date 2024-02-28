#include <stdio.h>
int sum_of_digits(int);
int main()
{
    printf("Sum of digits %d", sum_of_digits(123));
    return 0;
}
int sum_of_digits(int n)
{
    int sum;
    if (n == 1)
        return 1;
    return n % 10 + sum_of_digits(n / 10);
}