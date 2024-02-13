#include <stdio.h>
int main()
{
    int no;
    printf("Enter the no :");
    scanf("%d", &no);
    if (no % 3 == 0 && no % 7 == 0)
        printf("Given number is divisible by 3 and 7");
    else if (no % 3 == 0)
        printf("Given number is divisible by 3\n");
    else if (no % 7 == 0)
        printf("Given number is divisible by 7\n");
    else
        printf("Given number is not divisible by 3 and 7");

    return 0;
}