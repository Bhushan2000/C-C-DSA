#include <stdio.h>
int main()
{
    int no;
    printf("Enter the number : ");
    scanf("%d", &no);
    if (no % 2 == 0)
        printf("Number is Even");
    else
        printf("Number is odd");
    return 0;
}