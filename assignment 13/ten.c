#include <stdio.h>
int power_of_number(int, int);
int main()
{
    printf("%d", power_of_number(3, 4));
    return 0;
}
int power_of_number(int base, int exponent)
{
    if (exponent <= 1)
        return base;
    return base * power_of_number(base, exponent - 1);
}