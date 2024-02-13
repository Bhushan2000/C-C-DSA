#include <stdio.h>
int main()
{
    int no, count = 0, temp;
    printf("Enter the number:");
    scanf("%d", &no);
    while (no != 0)
    {
        temp = no / 10;
        count++;
        no = temp;
    }
    if (count == 3)
        printf("Given number is a three-digit number");
    else
        printf("Given number is not a three-digit number");

    return 0;
}