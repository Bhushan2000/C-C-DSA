#include <stdio.h>
int main()
{
    int number;
    printf("Enter the even number:");
    scanf("%d", &number);
    switch (number % 2)
    {
    case 0: // number is even
        // convert to odd
        printf("Nearest odd number is %d ", number + 1);
        break;
    case 1: // number is odd
        // convert to even
        printf("Nearest even number is %d ", number - 1);
        break;
    }
    return 0;
}