#include <stdio.h>
int main()
{
    int row = 9;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i <= row / 2 + 1)
            { //
                if (j < row / 2 + 2 - i || j > row / 2 + i)
                    printf(" ");
                else
                    printf("*");
            }
            else
            {
                // from i=6 to onward
                if (j < i - row / 2 || j > row - i + row / 2 + 1)
                    printf(" ");
                else
                    printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}