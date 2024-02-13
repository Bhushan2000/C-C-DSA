#include <stdio.h>
int main()
{
    int no;
    printf("Enter the no :");
    scanf("%d", &no);

    if (no % 3 == 0 && no % 2 == 0)
        printf("Given number is divisible by 3 and divisible by 2");
    else
        printf("Given number is not divisible by 3 and divisible by 2");

    return 0;
}