#include <stdio.h>
int nextPrime(int);
int main()
{
    int result, number = 4;
    result = nextPrime(number);
    if (result)
        printf("%d is prime", number);
    else
        printf("%d is not prime", number);
    return 0;
}
int nextPrime(int n)
{
    int i;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i == n)
        return 1;
    else
        return 0;
}