#include <stdio.h>
int nextPrime(int);
int main()
{
    int number = 3;
    printf("Next prime is %d", nextPrime(number));
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
        return i;
}