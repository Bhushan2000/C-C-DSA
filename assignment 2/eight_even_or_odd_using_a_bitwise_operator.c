#include <stdio.h>
int main()
{
    // given no is even or odd using bitwise operator
    int no;
    printf("Enter the number");
    scanf("%d", &no);
    no & 1 ? printf("odd number") : printf("Even number");

    return 0;
}