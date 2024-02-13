#include <stdio.h>
int main()
{
    float cp, sp, profitpercent, losspercent;

    printf("Enter the cost price and selling price of a product :");
    scanf("%f %f", &cp, &sp);

    // My Approach

    profitpercent = sp - cp / cp * 100;
    losspercent = cp - sp / cp * 100;

    // if (profitpercent > 0)
    //     printf("Profit percentage is %.2lf\n", profitpercent);
    // else
    //     printf("loss percentage is %.2lf\n", losspercent);

    // Teacher approach
    if (cp < sp)
        printf("Profit percentage is %.2lf\n", profitpercent);
    else
        printf("loss percentage is %.2lf\n", losspercent);

    return 0;
}