#include <stdio.h>
int main()
{
    int no, i;
    printf("Enter the number");
    scanf("%d", &no);
    for (i = 2; i <= no - 1; i++)
    {
        if (no % i == 0)
        {
            break;
        }
    }

    if (no == i)
        // then only its a prime
        printf("Number is prime");
    else
        printf("Not prime!!");

    return 0;
}