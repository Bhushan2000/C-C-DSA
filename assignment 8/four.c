#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter rows: ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++) // row
    {
        for (j = 1; j <= row; j++) // col
        {
            if (j < i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}