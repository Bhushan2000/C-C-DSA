#include <stdio.h>
void binaryofdecimal(int);
int main()
{
    int number = 100;
    // printf("Enter the number:");
    // scanf("%d", &number);
    binaryofdecimal(number);
    return 0;
}
void binaryofdecimal(int n)
{
    if (n != 0)
    {
        binaryofdecimal(n / 2);
        printf("%d", n % 2);
    }
}
