#include <stdio.h>
struct Time
{
    int sec;
    int min;
    int hr;
};
struct Time input();
void newApproach();
void difference_timing(struct Time, struct Time, struct Time *);
int main()
{
    // struct Time t[2], difference;
    // int i;
    // for (i = 0; i < 2; i++)
    // {
    //     t[i] = input();
    // }
    // difference.sec = t[0].sec - t[1].sec;
    // difference.min = t[0].min - t[1].min;
    // difference.hr = t[0].hr - t[1].hr;

    // printf("Hr: %d Min: %d Sec: %d", difference.hr, difference.min, difference.sec);

    newApproach();

    return 0;
}
struct Time input()
{
    struct Time t;
    printf("Enter the secs:");
    scanf("%d", &t.sec);
    printf("Enter the mins:");
    scanf("%d", &t.min);
    printf("Enter the hrs:");
    scanf("%d", &t.hr);
    return t;
}
// new approach
void newApproach()
{
    struct Time start_time, end_time, difference;
    printf("Enter the start time:");
    printf("Enter the Hr Min and Sec :");
    scanf("%d %d %d", &start_time.hr, &start_time.min, &start_time.sec);
    printf("Enter the end time:");
    printf("Enter the Hr Min and Sec :");
    scanf("%d %d %d", &end_time.hr, &end_time.min, &end_time.sec);
    difference_timing(start_time, end_time, &difference);
    printf("Time difference: %d:%d:%d & ", start_time.hr, start_time.min, start_time.sec);
    printf("%d:%d:%d", end_time.hr, end_time.min, end_time.sec);
    printf(" = %d:%d:%d", difference.hr, difference.min, difference.sec);
}
void difference_timing(struct Time start, struct Time stop, struct Time *diff)
{
    if (stop.sec > start.sec)
    {
        --start.min;
        start.sec += 60;
    }
    diff->sec = start.sec - stop.sec;
    if (stop.min > start.min)
    {
        --start.hr;
        start.min += 60;
    }

    diff->min = start.min - stop.min;

    diff->hr = start.hr - stop.hr;
}
// start time 10:15:40
// end time    5:30:50
// ....................
// diff time   4:44:50