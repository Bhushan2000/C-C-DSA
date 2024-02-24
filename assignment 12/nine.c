#include <stdio.h>
void octalofdecimal(int);
int main()
{
    int number = 127;
    // printf("Enter the number:");
    // scanf("%d", &number);
    octalofdecimal(number);
    return 0;
}
void octalofdecimal(int n)
{
    if (n != 0)
    {
        octalofdecimal(n / 8);
        printf("%d", n % 8);
    }
}
