#include <stdio.h>
int combination(int, int);
int factorial(int);
void printPascal(int);
int main()
{
    printPascal(7);
    return 0;
}
int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int factorial(int n)
{
    // using recursion it stuck the output
    // if (n == 1)
    // {
    //     return 1;
    // }
    // return n * factorial(n - 1);

    int fact = 1;
    while (n >= 1)
    {
        fact = fact * n;
        n--;
    }
    return fact;
}

void printPascal(int lines)
{
    int i, j, k, r;
    for (i = 1; i <= lines; i++)
    {
        k = 1;
        r = 0;
        for (j = 1; j <= lines * 2 - 1; j++)
        {
            if (j < lines + 1 - i || j > lines - 1 + i)
            {
                printf(" ");
            }
            else
            {
                if (j >= lines + 1 - i && j <= lines - 1 + i && k)
                { // takes 2 character space for print
                    printf("%2d", combination(i - 1, r));
                    k = 0;
                    r++;
                }
                else
                {
                    printf(" ");
                    k = 1;
                }
            }
        }
        printf("\n");
    }
}