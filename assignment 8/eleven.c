#include <stdio.h>
int main()
{
    int i, j, row = 5, character;
    // printf("Enter rows ");
    // scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        character = 'A';
        for (j = 1; j <= row * 2; j++)
        {
            if (j <= row - i || j >= row + i)
                printf(" ");
            else
            {
                printf("%c", character);
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