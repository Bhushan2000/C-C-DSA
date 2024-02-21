#include <stdio.h>
int printNnumbers(int);
int main()
{
    int number = 3;
    printf("Enter the number:");
    scanf("%d", &number);
    printf("Even or odd %d", printNnumbers(number));
    return 0;
}
int printNnumbers(int n)
{
    int result = n % 2 ? 0 : 1;
    return result;
}