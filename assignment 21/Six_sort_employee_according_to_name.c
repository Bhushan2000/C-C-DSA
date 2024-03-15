#include <stdio.h>
#include <string.h>
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
        {4, "Akhilesh", 45000},
        {5, "Rishi", 50000},
        {6, "Raghav", 40000},
        {7, "Kartik", 50000},
        {8, "Bhushan", 70000},
        {9, "Juhi", 15000},
    };
    struct Employee temp;
    for (int i = 0; i < 10 - 1; i++) // n-1 times
    {
        for (int j = 0; j < 10 - 1 - i; j++) // n-1 times
        {
            if (strcmp(e[j].name, e[j + 1].name) > 0)
            {
                // swapping the positon of s
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
        printf("%d %s %.2f\n", e[i].id, e[i].name, e[i].salary);
    return 0;
}
