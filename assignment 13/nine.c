#include <stdio.h>
int count_digits_number(int);
int main()
{
    printf("%d", count_digits_number(123));
    return 0;
}
int count_digits_number(int n)
{
    int count;
    if (n == 1)
        return 1;
    count = n + count_digits_number(n / 10);
    return count;
}