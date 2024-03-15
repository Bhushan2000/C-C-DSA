#include <stdio.h>
struct Student
{
    int roll_no;
    char name[20];
    float marks;
};
int main()
{
    struct Student e[10] = {
        {0, "Mahesh", 95},
        {1, "Kartik", 50},
        {2, "Piyush", 50},
        {3, "Kyara", 98},
        {4, "Kartik", 45},
        {5, "Rishi", 50},
        {6, "Raghav", 40},
        {7, "Kartik", 50},
        {8, "Rudresh", 70},
        {9, "Juhi", 85},
    };
    for (int i = 0; i < 10; i++)
        printf("%d %s %.2f\n", e[i].roll_no, e[i].name, e[i].marks);
    return 0;
}
