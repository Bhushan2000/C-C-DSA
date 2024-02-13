#include <stdio.h>
int main()
{
    int no;
    printf("Enter the number : ");
    scanf("%d", &no);
    if (no > 0)
        printf("Number is postivie");
    else
        printf("Number is non-postivie");
    return 0;
}