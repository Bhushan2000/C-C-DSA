#include <stdio.h>
int main()
{
    int no;
    printf("Enter the number");
    scanf("%d", &no);

    if (no > 0)
    {
        printf("Number is positive!!");
    }
    else if (no < 0)
    {
        printf("Number is negative!!");
    }
    else
    {
        printf("Number is zero!!");
    }

    return 0;
}