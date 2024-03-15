#include <stdio.h>
struct Time
{
    int sec;
    int min;
    int hr;
};
struct Time input();
int main()
{
    struct Time t[2], difference;
    int i;
    for (i = 0; i < 2; i++)
    {
        t[i] = input();
    }
    {
        t[i] = input();
    }
    difference.sec = t[0].sec - t[1].sec;
    difference.min = t[0].min - t[1].min;
    difference.hr = t[0].hr - t[1].hr;

    printf("Hr: %d Min: %d Sec: %d", difference.hr, difference.min, difference.sec);

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
