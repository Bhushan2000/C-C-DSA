#include <stdio.h>
int main()
{
    int row, value;
    printf("Enter rows: ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        value = 1;
        for (int j = 1; j <= row * 2 - 1; j++)
        {
            if (j < i || j > row * 2 - i)
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