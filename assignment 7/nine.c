#include <stdio.h>
int main()
{   // Armstrong number also know as narcissistic number, plenary number, or pluperfect digital invariant

    int number, temp, r, x = 0;
    printf("Enter the number:");
    scanf("%d", &number);
    
    // My Approach
    temp = number;
    while (temp != 0)
    {
        r = temp % 10;
        x += r * r * r;
        temp = temp / 10;
    }
    if (x == number)
        printf("%d is Armstrong!!", number);
    else
        printf("%d is not an Armstrong number", number);
    return 0;
}