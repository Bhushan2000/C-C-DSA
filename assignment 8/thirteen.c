#include <stdio.h>
int main()
{
    int row, i, j;
    int character;
    printf("Enter rows ");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        character = 'A';
        for (j = 1; j <= row * 2 - 1; j++)
        {
            // apply condition here
            if (j <= row + 1 - i || j >= row - 1 + i)
            {
                printf("%c", character);
                // printf("*");
                if (j >= row)
                    --character;
                else
                    ++character;
            }
            else
            {
                printf(" ");
                if (j >= row)
                    --character;
                else
                    ++character;
            }
        }
        printf("\n");
    }
    return 0;
}