#include <stdio.h>
void even_natural_number(int);
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    even_natural_number(number);
    return 0;
}
void even_natural_number(int n)
{
    if (n > 0)
    {
        even_natural_number(n - 1);
        printf("%d ", n * 2);
    }
}
