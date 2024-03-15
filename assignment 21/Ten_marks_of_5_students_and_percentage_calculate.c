#include <stdio.h>
#include <string.h>
struct Student
{
    int roll_no;
    char name[20];
    float chem_marks;
    float phy_marks;
    float math_marks;
};
struct Student input();
float calculate_percentage(struct Student);
int main()
{
    struct Student s[5];
    for (int i = 0; i < 5; i++)
        s[i] = input();
    for (int i = 0; i < 5; i++)
        printf("Name =>%s Percentage=> %.2f\n", s[i].name, calculate_percentage(s[i]));
    return 0;
}
struct Student input()
{
    struct Student m;
    printf("Enter the roll_no:");
    scanf("%d", &m.roll_no);
    printf("Enter the name of the student");
    fflush(stdin);
    fgets(m.name, 20, stdin);
    m.name[strlen(m.name) - 1] = '\0';
    printf("Enter the chemistry marks:");
    scanf("%f", &m.chem_marks);
    printf("Enter the physics marks:");
    scanf("%f", &m.phy_marks);
    printf("Enter the maths marks:");
    scanf("%f", &m.math_marks);
    return m;
}
float calculate_percentage(struct Student m)
{
    return ((m.chem_marks + m.math_marks + m.phy_marks) / 300) * 100;
}