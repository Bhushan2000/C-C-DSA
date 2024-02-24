#include <stdio.h>
void odd_natural_number(int);
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    odd_natural_number(number);
    return 0;
}
void odd_natural_number(int n)
{
    if (n > 0)
    {
        odd_natural_number(n - 1);
        printf("%d ", n * 2 - 1);
    }
}
