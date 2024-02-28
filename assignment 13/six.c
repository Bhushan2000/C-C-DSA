#include <stdio.h>
int factorial(int);
// Time-Complexity : O(n)
// Space-Complexity : O(1)
int main()
{
    printf("Factorial of the number: %d", factorial(5));
    return 0;
}
int factorial(int n)
{
    int fact = 1;
    if (n == 1)
        return 1;
    return n * factorial(n - 1); 
    // 5*fact4 (24) = 120
    // 4*fact3 (6) = 24
    // 3*fact2 (2) = 6 
    // 2*fact1 (1) = 2
    // 1*fact0 (1) = 1
}