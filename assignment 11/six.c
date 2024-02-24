// Write a function to print all Prime numbers between two given numbers. (TSRN)
#include <stdio.h>
int main()
{
    int start_number = 2, end_number = 100, i, j;
    // printf("Enter the number:");
    // scanf("%d", &number);

    for (i = start_number; i <= end_number; i++)
    {
        for (j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            printf("%d ", i);
    }
    return 0;
}