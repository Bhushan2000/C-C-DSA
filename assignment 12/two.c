#include <stdio.h>
void natural_numbers_reverse_order(int);
int main()
{
    int number = 5;
    // printf("Enter the number:");
    // scanf("%d", &number);
    natural_numbers_reverse_order(number);
    return 0;
}
void natural_numbers_reverse_order(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        natural_numbers_reverse_order(n - 1);
    }
}