#include <stdio.h>
int main()
{
    int number, i, j;
    printf("Enter the number:");
    scanf("%d", &number);
    // My Approach
    for (i = number + 1; i <= number + 2; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }

        if (i == j)
        {
            // next prime number
            printf("Next Prime number is %d", i);
            break;
        }
    }
    return 0;
}