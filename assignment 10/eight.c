#include <stdio.h>
int no_of_combinations(int, int); // for combination
int factorial(int);
int main()
{
    int n = 5, r = 2;
    printf("No of Possible combinations are %d ", no_of_combinations(n, r));
    return 0;
}
// tip : Always use brackets when there is calculation like n!/(r!(n-r)!) 
// so that they calculate first and then other operator perform function on the operator.
int no_of_combinations(int n, int r)
{
    // formula nPr = n!/(n-r)!
    int result;
    result = factorial(n) / (factorial(r) * factorial(n - r));
    return result;
}
int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}