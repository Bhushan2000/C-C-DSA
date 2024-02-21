#include <stdio.h>
void printNnumbers(int);
int main()
{
    int number = 3;
    printf("Enter the number:");
    scanf("%d", &number);
    printNnumbers(number);
    return 0;
}
void printNnumbers(int n)
{
    if (n > 0)
    {
        printNnumbers(n - 1);
        printf("%d ", n);
    }
}