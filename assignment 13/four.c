#include <stdio.h>
int sum_square_natural_number(int);
int main()
{
    printf("%d", sum_square_natural_number(3));
    return 0;
}
int sum_square_natural_number(int n)
{
    int sum;
    if (n == 0)
        return;
    sum = n * n + sum_square_natural_number(n - 1);
    return sum;
}