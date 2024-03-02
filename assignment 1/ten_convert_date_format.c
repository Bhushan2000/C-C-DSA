#include <stdio.h>
int main()
{   int day,month,year;
    printf("Enter the day month & year:\t");
    scanf("%d %d %d",&day,&month,&year);
    printf("Day - %d, Month - %d, Year - %d", day, month, year);
    // output format (Day – 27 ,Month – 07 , Year – 2022)
    return 0;
}