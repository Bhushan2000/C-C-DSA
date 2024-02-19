#include <stdio.h>
int main()
{
    int row, i, j, value;
    printf("Enter rows ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        value = 1;
        for (j = 1; j <= row * 2 - 1; j++)
        {
            // apply condition here
            if (j <= row + 1 - i || j >= row - 1 + i)
            {
                printf("%d", value);
                // printf("*");
                if (j >= row)
                    --value;
                else
                    ++value;
            }
            else
            {
                printf(" ");
                if (j >= row)
                    --value;
                else
                    ++value;
            }
        }
        printf("\n");
    }
    return 0;
}