#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
} b1;
int main()
{
    struct Employee b1;
    b1.id = 1;
    strcpy(b1.name, "Heelo");
    b1.salary = 35.5f;
    printf("%d %s %.2f", b1.id, b1.name, b1.salary);
    return 0;
}