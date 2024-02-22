#include <stdio.h>
void hcf(int, int);
int main()
{
    int a, b, small, large, remainder;
    printf("Enter the two number:");
    scanf("%d%d", &a, &b);
    hcf(a, b);
    // hcf by division method (My Approach)
    // check smaller and larger
    // if (a > b)
    // {
    //     small = b;
    //     large = a;
    // }
    // else
    // {
    //     small = a;
    //     large = b;
    // }

    // remainder = large % small;
    // if (remainder)
    // {
    //     // repeat this until remainder becomes zero
    //     while (remainder != 0)
    //     {
    //         large = small;
    //         small = remainder;
    //         remainder = large % small;
    //     }
    //     printf("HCF is %d", small);
    // }
    // else
    //     printf("HCF is %d", small);

    return 0;
}
// (Teacher Approach)
void hcf(int n1, int n2)
{
    int H;
    for (H = n1 < n2 ? n1 : n2; H >= 1; H--)
    {
        if (n1 % H == 0 && n2 % H == 0)
        {
            break;
        }
    }
    printf("HCF is %d", H);
}