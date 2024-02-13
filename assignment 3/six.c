#include <stdio.h>
int main()
{
    int no1, no2;
    printf("Enter two numbers : ");
    scanf("%d %d", &no1, &no2);

    if (no1 > no2)
        printf("%d is greater than %d", no1, no2);
    else if (no1 < no2)
        printf("%d is smaller than %d", no1, no2);
    else
        printf("Both numbers are same %d", no1);

    return 0;
}