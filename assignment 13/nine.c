#include <stdio.h>
int count_digits_number(int);
int main()
{
    printf("Number of digits : %d", count_digits_number(123456));
    return 0;
}
int count_digits_number(int n)
{
    int count;
    if (n == 0)
        return 0;
    return count_digits_number(n / 10) + n / n;
}