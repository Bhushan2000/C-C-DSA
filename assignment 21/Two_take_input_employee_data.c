#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
struct Employee input();
int main()
{
    struct Employee b2;
    b2 = input();
    printf("%d %s %.2f", b2.id, b2.name, b2.salary);
    return 0;
}
struct Employee input()
{
    struct Employee b1;
    printf("Enter the id of Employee:");
    scanf("%d", &b1.id);
    printf("Enter the name of Employee:");
    fflush(stdin);
    fgets(b1.name, 20, stdin);
    b1.name[strlen(b1.name) - 1] = '\0';// remove newline character from the string
    printf("Enter the salary of Employee:");
    scanf("%f", &b1.salary);
    return b1;
}