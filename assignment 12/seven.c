#include <stdio.h>
void square_natural_numbers(int);
int main()
{
    int number = 5;
    // printf("Enter the number:");
    // scanf("%d", &number);
    square_natural_numbers(number);
    return 0;
}
void square_natural_numbers(int n)
{
    if (n > 0)
    {
        square_natural_numbers(n - 1);
        printf("%d ", n*n);
    }
}
