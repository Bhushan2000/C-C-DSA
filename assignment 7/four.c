#include <stdio.h>
int main()
{
    int a, b, small, large, remainder;
    printf("Enter the two number:");
    scanf("%d%d", &a, &b);

    // hcf by division method (My Approach)
    // check smaller and larger
    if (a > b)
    {
        small = b;
        large = a;
    }
    else
    {
        small = a;
        large = b;
    }

    remainder = large % small;
    if (remainder)
    {
        // repeat this until remainder becomes zero
        while (remainder != 0)
        {
            large = small;
            small = remainder;
            remainder = large % small;
        }
        printf("HCF is %d", small);
    }
    else
        printf("HCF is %d", small);

    return 0;
}