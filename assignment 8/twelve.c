#include <stdio.h>
int main()
{
    int row, character;
    printf("Enter rows: ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        character = 'A';
        for (int j = 1; j <= row * 2 - 1; j++)
        {
            if (j < i || j > row * 2 - i)
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