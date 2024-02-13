#include <stdio.h>
int main()
{
    int no;
    printf("Enter the number : ");
    scanf("%d", &no);
    // even or odd without using % operator
    // Method 1
    if (no & 1)
        printf("Number is odd\n");
    else
        printf("Number is even\n");

    return 0;
}