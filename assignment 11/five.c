// Write a function to print first N prime numbers (TSRN)
#include <stdio.h>
void firstNprime(int);
int main()
{
    int count = 6;
    // printf("Enter the number:");
    // scanf("%d", &count);
    firstNprime(count);
    return 0;
}
void firstNprime(int count)
{
    int j, number = 2;

    while (count)
    {
        for (j = 2; j <= number - 1; j++)
        {
            if (number % j == 0)
                break;
        }
        if (number == j)
        {
            printf("%d ", j);
            count--;
        }
        number++;
    }
}