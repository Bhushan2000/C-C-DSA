#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter rows: ");
    scanf("%d", &row);
    for (i = 1; i <= row * 2 - 1; i++) // row
    {
        for (j = 1; j <= row * 2 - 1; j++) // column
        {
            if (j < i || j > row * 2 - i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}