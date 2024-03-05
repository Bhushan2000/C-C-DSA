#include <stdio.h>
#include <math.h>
void armstrong();
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
    printf("\n");
    armstrong();
    return 0;
}
// teacher approach
void armstrong()
{
    int n = 1000, a, b, count = 0, rem, sum = 0;
    a = n;
    while (a)
    {
        b = a;
        while (b)
        {
            b = b / 10;
            count++;
        }
        b = a;
        while (b)
        {
            rem = b % 10;
            sum = sum + pow(rem, count);
            b = b / 10;
        }
        if (sum == a)
            printf("%d ", sum);

        sum = 0;
        rem = 0;
        count = 0;
        a--;
    }
}