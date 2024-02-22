#include <stdio.h>
int HCF_of_two_number(int, int);
int hcf(int, int);
int main()
{
    int number1 = 4, number2 = 6;
    printf("HCF of %d and %d is %d ", number1, number2, hcf(number1, number2)); // ans 15
    return 0;
}
// My Approach
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
// Teacher Approach
int hcf(int n1, int n2)
{
    int H;
    for (H = n1 < n2 ? n1 : n2; H >= 1; H--)
    {
        if (n1 % H == 0 && n2 % H == 0)
        {
            break;
        }
    }
    return H;
}