#include <stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5, passing_marks = 33;
    printf("Enter the marks for five subjects :");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    if (sub1 >= passing_marks &&
        sub2 >= passing_marks &&
        sub3 >= passing_marks &&
        sub4 >= passing_marks &&
        sub5 >= passing_marks)
        printf("candidate passed!");
    else
        printf("candidate failed");
    return 0;
}