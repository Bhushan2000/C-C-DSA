#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter rows ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        /* code */
        for (j = 1; j <= i; j++)
        {
            /* code */
            if (j == 1 || j == i || i == row)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}