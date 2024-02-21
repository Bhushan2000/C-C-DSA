#include <stdio.h>
int LCM_of_two_number(int, int);
int main()
{
    int number1 = 6, number2 = 12;
    printf("LCM of %d and %d is %d ", number1, number2, LCM_of_two_number(number1, number2));
    return 0;
}
int LCM_of_two_number(int number1, int number2)
{
    int i;
    for (i = 1; i <= number1 * number2; i++)
    {
        if (i % number1 == 0 && i % number2 == 0)
        {
            break;
        }
    }
    return i;
}
