#include <stdio.h>
int main()
{
    int no;
    printf("Enter the number : ");
    scanf("%d", &no);
    if (no % 5 == 0)
        printf("Number is divisible by 5");
    else
        printf("Number is not divisible by 5");
    return 0;
}