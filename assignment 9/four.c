#include <stdio.h>
#include <stdlib.h>
void input(int, int, int);
int main()
{
    char choice;
    int side1, side2, side3, max;
    while (1)
    {
        /* code */
        printf("\n a.Check isoscales triangle");
        // 3,4,5 // 8,15,17 =>right angle triangle
        // 7,8,10 =>not right angle triangle
        printf("\n b.Check Right angle triangle");
        // 10 10 10 =>Equilateral triangle
        printf("\n c.Check Equilateral triangle");
        printf("\n d.Exit\n");

        // used to clear the buffer
        // and accept the next input
        fflush(stdin);
        printf("\n Enter your choice:");
        scanf("%c", &choice);
        if (choice != 'd')
        {
            printf("Enter three sides of the triangle:");
            scanf("%d %d %d", &side1, &side2, &side3);
        }
        switch (choice)
        {
        case 'a':
            if (side1 == side2 || side1 == side3 || side2 == side3)
                printf("isoscales triangle\n");
            else
                printf("Not a isoscales triangle\n");
            break;

        case 'b':
            if (side1 * side1 == side2 * side2 + side3 * side3 ||
                side2 * side2 == side1 * side1 + side3 * side3 ||
                side3 * side3 == side1 * side1 + side2 * side2)
                printf("Right angle triangle\n");
            else
                printf("Not a Right angle triangle\n");
            break;

        case 'c':
            if ((side1 == side2) && (side2 == side3))
                printf("Equilateral triangle\n");
            else
                printf("Not a Equilateral triangle\n");
            break;

        case 'd':
            exit(0);
        }
    }
    return 0;
}