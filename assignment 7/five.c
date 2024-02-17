#include <stdio.h>
int main()
{
    // My Approach
    int number1 = 12, number2 = 15;
    int count = 0;
    // printf("Enter the number:");
    // scanf("%d%d", &number1, &number2);
    // for (int i = 1; i <= number1 * number2; i++)
    // {
    //     if (number1 % i == 0 && number2 % i == 0)
    //         count++;
    // }
    // count == 1 ? printf("%d and %d are Co-prime Numbers", number1, number2) : printf("%d and %d are Not a co-prime number", number1, number2);


    // Teacher Approach
    int min, i;
    min = number1 > number2 ? number2 : number1;
    for (i = 2; i <= min; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
            break;
    }
    if (i == min + 1)
        printf("%d and %d are Co-prime Numbers", number1, number2);
    else
        printf("%d and %d are Not Co-prime Numbers", number1, number2);
    return 0;
}