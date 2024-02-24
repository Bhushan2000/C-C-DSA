#include <stdio.h>
int main()
{
    int choice, year, centuryornot;

    printf("Leap year or not ?\n");
    scanf("%d", &year);
    
    // My Approach
    // centuryornot = year % 100 == 0 ? 1 : 2;

    // switch (centuryornot)
    // {
    // case 1:
    //     // Century year
    //     printf("Century year:\n");
    //     if (year % 400 == 0)
    //         printf("Leap year!!");
    //     else
    //         printf("Not a Leap year!!");
    //     break;
    // case 2:
    //     // non century year
    //     printf("Not Century year:\n");
    //     if (year % 4 == 0)
    //         printf("Leap year!!");
    //     else
    //         printf("Not a Leap year!!");
    //     break;
    // }

    // another approach teacher

    switch (year % 100 == 0)
    {
    case 1: // century year
        switch (year % 400 == 0)
        {
        case 1:
            printf("Century year and Leap year also.");
            break;
        case 0:
            printf("Century year and Not Leap year also.");
            break;
        }
        break;

    case 0: // Not a century year
        switch (year % 4 == 0)
        {
        case 1:
            printf("Not a Century year and Leap year also.");
            break;
        case 0:
            printf("Not a Century year and Not Leap year also.");
            break;
        }
        break;
    }
    return 0;
}