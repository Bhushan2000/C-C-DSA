#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        /* code */
        for (int j = 1; j <= 9; j++)
        {
            /* code */
            if (j < 6 - i || j > 4+i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}