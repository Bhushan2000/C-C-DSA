#include <stdio.h>
int main()
{
    int i, j;
    printf("Prime numbers under 100 is : ");
    for (i = 2; i <= 100 - 1; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            printf("%d ", i);
    }

    return 0;
}