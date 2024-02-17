#include <stdio.h>
int main()
{
    int term, a = -1, b = 1, c, i;
    printf("Enter the term in number you want to see :");
    scanf("%d", &term);
    for (i = 1; i <= term; i++)
    {
        c = a + b;
        a = b;
        b = c;
        if (term == i)
            printf("The %d term of the fibonacci series is %d ", term, c);
    }
    return 0;
}