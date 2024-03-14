#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
struct Employee input();
void display(struct Employee);
int main()
{
    struct Employee b;
    b = input();
    display(b);
    return 0;
}
struct Employee input()
{
    struct Employee b;
    printf("Enter the employee id:");
    scanf("%d", &b.id);
    printf("Enter the employee name:");
    fflush(stdin);
    fgets(b.name, 20, stdin);
    b.name[strlen(b.name) - 1] = '\0';
    printf("Enter the employee salary:");
    scanf("%f", &b.salary);

    return b;
}
void display(struct Employee b)
{
    printf("Employee id => %d name => %s salary => %.2f", b.id, b.name, b.salary);
}
