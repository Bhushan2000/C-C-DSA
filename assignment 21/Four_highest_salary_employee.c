#include <stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    int max_salary = 0;
    struct Employee e[10] = {
        {0, "Mahesh", 95000},
        {1, "Kartik", 50000},
        {2, "Piyush", 50000},
        {3, "Kyara", 98000},
        {4, "Kartik", 45000},
        {5, "Rishi", 50000},
        {6, "Raghav", 40000},
        {7, "Kartik", 50000},
        {8, "Rudresh", 70000},
        {9, "Juhi", 15000},
    };
    for (int i = 0; i < 10; i++)
        if (e[i].salary > max_salary)
            max_salary = e[i].salary;
    printf("Max salary : %d ", max_salary);
    return 0;
}
