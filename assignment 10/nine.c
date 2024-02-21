#include <stdio.h>
int checkdigitinnumber(int, int);
int main()
{
    int  digit = 1, number = 123;
    if (checkdigitinnumber(number, digit))
        printf("%d digit found in the number %d", digit, number);
    else
        printf("%d digit not found in the number %d", digit, number);
    return 0;
}
int checkdigitinnumber(int number, int digit)
{
    int remainder;
    while (number != 0)
    {
        remainder = number % 10;
        if (remainder == digit)
            return 1;
        else
            number = number / 10;
    }
    return 0;
}