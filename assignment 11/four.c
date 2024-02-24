#include <stdio.h>
int nextPrime(int);
int main()
{
    int number = 11;
    printf("Next prime is %d", nextPrime(number));
    return 0;
}
int nextPrime(int n)
{
    int i;
    while (1)
    {
        n++; // we increase number by one and check next prime or not
        for (i = 2; i <= n - 1; i++)
        {
            if (n % i == 0)
                break;
        }
        if (n == i)
            return n;
    }
}