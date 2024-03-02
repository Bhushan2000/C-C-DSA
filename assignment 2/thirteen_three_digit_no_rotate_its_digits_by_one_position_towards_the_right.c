#include <stdio.h>
int main()
{
    int number,x;
    printf("Enter the three digit number : ");
    scanf("%d", &number);
    // Teacher approach
    x = number % 10 * 100 + number / 10;
    printf("After rotate its digits by one position towards the right %d", x);
    return 0;
}