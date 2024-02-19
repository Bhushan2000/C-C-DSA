#include <stdio.h>
int main()
{
    int row = 13, col = 19, counter = 0;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i > 3)
            {
                // for below part
                if (j > i - 4 && j < col + 1 - counter)
                {
                    if (j == 7 && i == 4)
                    {
                        printf("MYSIRG");
                    }
                    else
                    {
                        if (j > 6 && j < row && i == 4)
                        {
                        }
                        else
                        {
                            printf("*");
                        }
                    }
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                // for upper part
                if (j > 3 - i && j < 7 + i || j > row - i && j < col - 2 + i)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
        if (i > 3)
            counter++;
    }
    return 0;
}