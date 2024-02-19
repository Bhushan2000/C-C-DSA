#include <stdio.h>
int main()
{
    int row = 5, value;
    printf("Enter rows: ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        value = 1;
        for (int j = 1; j <= row * 2; j++)
        {
            if (j < row + 1 - i || j > row - 1 + i)
                printf(" ");
            else
            {
                printf("%d", value);
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