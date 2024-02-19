#include <stdio.h>
int main()
{
    int row, i, j;
    printf("Enter rows ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row * 2; j++)
        {
            // apply condition here
            if (j <= row + 1 - i || j >= row + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}