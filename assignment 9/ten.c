#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the values of quadratic equations:");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    switch (d > 0)
    {
    case 0:
        if (d < 0)
            printf("Roots are imaginary ");
        else
            printf("Roots are real and equal ");
        break;
    case 1:
        printf("Roots are real and distinct ");
        break;
    }
    return 0;
}