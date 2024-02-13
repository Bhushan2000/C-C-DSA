#include <stdio.h>
int main()
{
    int number, sum = 0;
    printf("Enter the number:");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)

        sum += i * i;
    printf("%d", sum);
    return 0;
}