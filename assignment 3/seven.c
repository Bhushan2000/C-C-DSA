#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the values for quadratic equation a,b,c : ");
    scanf("%d%d%d", &a, &b, &c);
    d = b * b - 4 * a * c;

    printf("Roots of quadratic equation :\n");
    if (d > 0)
        printf("Roots are real and distinct");
    else if (d < 0)
        printf("Roots are immaginary");
    else
        printf("Roots are real and equal");

    return 0;
}