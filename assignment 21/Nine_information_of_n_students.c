#include <stdio.h>
#include <string.h>
struct Student
{
    int roll_no;
    char name[20];
    float marks;
};
struct Student input();
void display(struct Student);
int main()
{
    int n;
    printf("How many students you wnat to store: ");
    scanf("%d", &n);
    struct Student e[n];
    for (int i = 0; i < n; i++)
        e[i] = input();
    for (int i = 0; i < n; i++)
        display(e[i]);
    return 0;
}
struct Student input()
{
    struct Student s;
    printf("Enter the student roll_no:");
    scanf("%d", &s.roll_no);
    printf("Enter the student name:");
    fflush(stdin);
    fgets(s.name, 20, stdin);
    s.name[strlen(s.name) - 1] = '\0';
    printf("Enter the student marks:");
    scanf("%f", &s.marks);
    return s;
}
void display(struct Student s)
{
    printf("=>%d =>%s =>%.2f\n", s.roll_no, s.name, s.marks);
}