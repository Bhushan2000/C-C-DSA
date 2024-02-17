#include <stdio.h>
int main()
{
    int number, a = -1, b = 1, c;
    printf("Enter the number:");
    scanf("%d", &number);

    for (int i = 1; i <= number + 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        if (number == c)
            break;
    }
    if (number == c)
        printf("%d is present in fibonacci series\n", number);
    else
        printf("%d is not present in fibonacci series\n", number);

    return 0;
}