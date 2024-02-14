#include <stdio.h>
int main()
{
    int no1, no2, i;
    printf("Enter the number");
    scanf("%d%d", &no1, &no2);
    
    // LCM of two numbers

    for (i = 1; i <= no1 * no2; i++)
    {
        if (i % no1 == 0 && i % no2 == 0)
            break;
    }

    printf("LCM is %d", i);

    return 0;
}