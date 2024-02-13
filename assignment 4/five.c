#include <stdio.h>
int main()
{
    // Method 1
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d\n", 2 * i - 1);
    // }

    // Method 2
    for (int i = 19; i >= 1; i -= 2)
    {
        printf("%d\n", i);
    }
    return 0;
}