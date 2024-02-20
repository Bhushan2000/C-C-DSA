#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number positive or negative:");
    scanf("%d", &number);
    switch (number > 0)
    {
    case 0: // negative
        printf("Negative of number is %d", number + number * -2);
        break;

    case 1: // positive
        printf("Positive of number is %d", number - number * 2);
        break;
    }
    return 0;
}