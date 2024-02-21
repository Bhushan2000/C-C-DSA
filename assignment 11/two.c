#include <stdio.h>
int HCF_of_two_number(int, int);
int main()
{
    int number1 = 60, number2 = 75;
    printf("HCF of %d and %d is %d ", number1, number2, HCF_of_two_number(number1, number2)); // ans 15
    return 0;
}
int HCF_of_two_number(int number1, int number2)
{
    int min, max, rem;
    if (number1 > number2)
    {
        max = number1;
        min = number2;
    }
    else
    {
        max = number2;
        min = number1;
    }
    rem = max % min;
    if (rem != 0)
    {
        max = min;
        min = rem;
        rem = max % min;
    }
    return min;
}