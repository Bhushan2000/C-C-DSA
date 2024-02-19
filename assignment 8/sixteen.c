#include <stdio.h>
int main()
{
    int row;
    printf("Enter rows: ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row * 2 - 1; j++)
        {
            if (i == row || j == row - 1 + i || j == row + 1 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}