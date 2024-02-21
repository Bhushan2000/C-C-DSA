#include <stdio.h>
void print_n_natural_numbers(int);
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    print_n_natural_numbers(number);
    return 0;
}
void print_n_natural_numbers(int n)
{
    if (n > 0)
    {
        print_n_natural_numbers(n - 1);
        printf("%d ", n);
    }
}