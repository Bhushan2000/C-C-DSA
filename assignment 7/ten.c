#include <stdio.h>
int main()
{
    int no, rem, x;
    for (int i = 1; i <= 1000; i++)
    { // My Approach
        no = i;
        rem = 0;
        x = 0;
        while (no != 0)
        {
            /* code */
            rem = no % 10;
            x += rem * rem * rem;
            no = no / 10;
        }
        if (x == i)
            printf("%d ", i);
        // }

        // teacher approach
        // no = i;
        // x = 0;
        // while (no != 0)
        // {
        //     /* code */
        //     rem = no % 10;
        //     x += rem * rem * rem;
        //     no = no / 10;
        // }
        // if (x == i)
        //     printf("%d ", x);
    }

    return 0;
}