#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    printf("Before swap perform a = %d and b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap perform a = %d and b = %d\n", a, b);
    return 0;
}