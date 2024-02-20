#include <stdio.h>
int main()
{
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Good");
        break;
    case 2:
        printf("Better");
        break;
    case 3:
        printf("Best");
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}