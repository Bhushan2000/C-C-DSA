#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        printf("%d\n", i * i * i);
    }
    return 0;
}