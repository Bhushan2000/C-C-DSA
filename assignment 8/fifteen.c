#include <stdio.h>
int main()
{
    int i, j, row = 5;
    for (i = 1; i <= row; i++)
    {
        /* code */
        for (j = 1; j <= row; j++)
        {
            /* code */
            if (i == 5 || j == row + 1 - i || j == row)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}