#include <stdio.h>
void fibonacci(int);
int main()
{
    int number = 5;
    // printf("Enter the number:");
    // scanf("%d", &number);
    fibonacci(number);
    return 0;
}
void fibonacci(int number)
{
    int count = 0, a = -1, b = 1,c;
    while (number != count)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
        count++;
    }
}