#include <stdio.h>
int main()
{
    int number = 10, a = 0, b = 1, c;
    printf("Enter the number:");
    scanf("%d", &number);
    // My Approach
    printf("%d %d ", a, b);
    for (int i = 3; i <= number; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }

    return 0;
}