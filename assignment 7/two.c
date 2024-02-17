#include <stdio.h>
int main()
{
    // My Approach
    // int number, a = 0, b = 1, c;
    // printf("Enter the number:");
    // scanf("%d", &number);
    // printf("%d %d ", a, b);
    // for (int i = 3; i <= number; i++)
    // {
    //     c = a + b;
    //     a = b;
    //     b = c;
    //     printf("%d ", c);
    // }

    // Teacher Approach
    int number, a = -1, b = 1, c;
    printf("Enter the number:");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
    return 0;
}