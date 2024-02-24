#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d, root1, root2;
    printf("Enter the values of quadratic equations:");
    scanf("%d %d %d", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    switch (d > 0)
    {
    case 0:
        switch (d < 0)
        {
        case 0:
            root1 = (-(b) + sqrt(d)) / (2 * a);
            root2 = (-(b)-sqrt(d)) / (2 * a);
            printf("Roots are %d i and %d i", root1, root2);
            break;
        case 1:
            root1 = -(b) / (2 * a);
            printf("Roots is %d", root1);
            break;
        }
        break;
    case 1:
        root1 = (-(b) + sqrt(d)) / (2 * a);
        root2 = (-(b)-sqrt(d)) / (2 * a);
        printf("Roots are %d and %d", root1, root2);
        break;
    }
    return 0;
}