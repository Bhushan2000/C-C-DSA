#include <stdio.h>
int no_of_arrangements(int, int); // for permutations
int factorial(int);
int main()
{
    int n = 8, r = 3;
    printf("No of Possible arrangements %d ", no_of_arrangements(n, r));
    return 0;
}
int no_of_arrangements(int n, int r)
{
    // formula nPr = n!/(n-r)!
    int result;
    result = factorial(n) / factorial(n - r);
    return result;
}
int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}