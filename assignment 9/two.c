#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, a, b;
    while (1)
    {

        printf("\n 1. Addition");
        printf("\n 2. Subtraction");
        printf("\n 3. Multiplication");
        printf("\n 4. Division");
        printf("\n 5. Exit");

        printf("\n Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter two numbers:");
            scanf("%d%d", &a, &b);
            printf("Addition is : %d", a + b);
            break;
        case 2:
            printf("Enter two numbers:");
            scanf("%d%d", &a, &b);
            printf("Subtraction is : %d", a - b);
            break;
        case 3:
            printf("Enter two numbers:");
            scanf("%d%d", &a, &b);
            printf("Multiplication is : %d", a * b);
            break;
        case 4:
            printf("Enter two numbers:");
            scanf("%d%d", &a, &b);
            printf("Division is : %d", a / b);
            break;
        case 5:
            exit(0);
            // break;
        default:
            printf("enter right choice");
            break;
        }
    }
    return 0;
}