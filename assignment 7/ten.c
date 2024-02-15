#include <stdio.h>
int main()
{
    int no, rem, x = 0;
    for (int i = 1; i <= 1000; i++)
    {
        /* code */
        if (i <= 9)
        {
            printf("%d ", i);
            continue;
        }
        else
        {
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
        }
    }

    return 0;
}