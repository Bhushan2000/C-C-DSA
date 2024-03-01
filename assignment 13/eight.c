#include <stdio.h>
int n_terms_fibonacci(int);
int main()
{
    int number = 10;
    for (int i = 0; i < number; i++)
        printf("%d ", n_terms_fibonacci(i));
    return 0;
}
int n_terms_fibonacci(int n)
{
    // My Approach
    // int a, b, c;
    // if (n <= 1)
    //     return 1;
    // a = n;
    // b = n_terms_fibonacci(n - 1);
    // c = a + b;
    // a = b;
    // b = c;
    // printf("%d ", c);

    // Teacher approach
    if (n == 0 || n == 1)
        return n;
    return n_terms_fibonacci(n - 1) + n_terms_fibonacci(n - 2);
}