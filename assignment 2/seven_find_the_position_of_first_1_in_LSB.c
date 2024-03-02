#include <stdio.h>
int main()
{
    int no = 18, position = 0, binary = 0, rem = 0;
    // printf("Enter the no:");
    // scanf("%d", &no);
    //  enter your code here.
    while (no != 1)
    {
        rem = no % 2;
        no = no / 2;
    }
    printf("Position of the first 1 in LSB is %d", rem);
    return 0;
}