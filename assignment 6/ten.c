#include <stdio.h>
int main()
{
    int no, y = 0, r;
    printf("Enter the number");
    scanf("%d", &no);

    while (no != 0)
    {
        /* code */
        r = no % 10;
        y = y * 10 + r;
        no = no / 10;
    }
    printf("Reverse of the number is %d", y);

    return 0;
}