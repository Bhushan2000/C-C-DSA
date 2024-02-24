#include <stdio.h>
void reverseofnumber(int);
int main()
{
    int number = 4165;
    // printf("Enter the number:");
    // scanf("%d", &number);
    reverseofnumber(number);
    return 0;
}
void reverseofnumber(int n)
{
    int x;
    if (n != 0)
    {
        x = n % 10;
        n = n / 10;
        printf("%d", x);
        reverseofnumber(n);
    }
}
