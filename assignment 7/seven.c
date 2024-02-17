#include <stdio.h>
int main()
{
    int no1, no2, i, j;
    printf("Enter the two numbers:");
    scanf("%d%d", &no1, &no2);
    for (i = no1 + 1; i <= no2 - 1; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            printf("%d ", i);
    }

    return 0;
}