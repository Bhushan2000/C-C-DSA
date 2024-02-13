#include <stdio.h>
int main()
{

    int a, b, c;
    printf("Enter three numbers :");
    scanf("%d %d %d", &a, &b, &c);

    // My Approach (15 times checking)
    printf("My Approach:\n");
    if (a > b && a > c)
        printf("Greatest among three is %d\n", a);
    else if (b > c && b > a)
        printf("Greatest among three is %d\n", b);
    else if (c > a && c > b)
        printf("Greatest among three is %d\n", c);
    else if (a == b && c < a)
        printf("Greatest among three is %d\n", a);
    else if (b == c && b > a)
        printf("Greatest among three is %d\n", b);
    else
        printf("Greatest among three is %d\n", a);

    // Teacher approach (3 times checking)
    printf("Teacher Approach:\n");

    printf("Greatest among three is %d", a > b   ? a > c ? a : c
                                         : b > c ? b
                                                 : c);
    return 0;
}