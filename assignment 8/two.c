#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // column
    {
        for (j = 1; j <= 5; j++) // row
        {
            if (j < 6 - i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}