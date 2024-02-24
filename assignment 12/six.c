#include <stdio.h>
void even_natural_number_reverse(int);
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    even_natural_number_reverse(number);
    return 0;
}
void even_natural_number_reverse(int n)
{
    if (n > 0)
    {
        printf("%d ", n * 2);
        even_natural_number_reverse(n - 1);
    }
}
