#include <stdio.h>
void odd_natural_number_reverse(int);
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    odd_natural_number_reverse(number);
    return 0;
}
void odd_natural_number_reverse(int n)
{
    if (n > 0)
    {
        printf("%d ", n * 2 - 1);
        odd_natural_number_reverse(n - 1);
    }
}
