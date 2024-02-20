#include <stdio.h>
int main()
{
    int number;
    printf("Enter the week day in number");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("Sunday is fun day!!");
        break;
    case 2:
        printf("Monday is good!!");
        break;
    case 3:
        printf("Tuesday is best!!");
        break;
    case 4:
        printf("Wednesday is Awesome!!");
        break;
    case 5:
        printf("Thursday is God day!!");
        break;
    case 6:
        printf("Friday is Outstanding day!!");
        break;
    case 7:
        printf("Saturday is Half Day!!");
        break;
    default:
        printf("Please enter valid day number of the week between 1 to 7!!");
        break;
    }

    return 0;
}