#include <stdio.h>
int n_terms_fibonacci(int);
int main()
{
    printf("%d", n_terms_fibonacci(3));
    return 0;
}
int n_terms_fibonacci(int n)
{
    int a, b, c;
    if (n <= 1)
        return 1;
    a = n;
    b = n_terms_fibonacci(n - 1);
    c = a + b;
    a = b;
    b = c;
    printf("%d ", c);
}