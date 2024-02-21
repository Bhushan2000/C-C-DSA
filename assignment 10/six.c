#include <stdio.h>
int factorial(int);
int main()
{
    long int number = 5;
    printf("factorial of a number : %d ", factorial(number));
     
    return 0;
}
// tip : Don't declare variable in recursion function it reinitializes everytime when we call recursive function

int factorial(int n)
{
    if (n == 0) // base case
        return 1;
    return factorial(n - 1) * n; // recursive case
}

