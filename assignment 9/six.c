#include <stdio.h>
int main()
{
    int choice, year, centuryornot;

    printf("Leap year or not ?\n");
    scanf("%d", &year);
    centuryornot = year % 400 == 0 ? 1 : 2;

    switch (centuryornot)
    {
    case 1:
        // Century year
        printf("Century year:\n");
        if (year % 400 == 0)
            printf("Leap year!!");
        else
            printf("Not a Leap year!!");
        break;
    case 2:
        // non century year
        printf("Not Century year:\n");
        if (year % 4 == 0)
            printf("Leap year!!");
        else
            printf("Not a Leap year!!");
        break;
    }
    return 0;
}