#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d", &year);

    // My approach
    // if (year % 400 == 0)
    //     printf("Given year is a leap year");
    // else
    //     printf("Given year is not a leap year");

    // teacher approach
    // first check century year or not
    if (year % 400 == 0)
        // century year
        printf("leap year");
    else
        // not a century year
        if (year % 4 == 0)
            printf("leap year");
        else
            printf("Not a leap year");

    return 0;
}