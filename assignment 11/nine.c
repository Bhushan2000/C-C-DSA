#include <stdio.h>
#include <math.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    printf("Square of the number %d is %.2lf", number, pow(number, 2));
    return 0;
}