#include <stdio.h>
int main()
{
    int no;
    printf("Enter the no:");
    scanf("%d", &no);
    no /= 10;
    no *= 10;
    printf("Result is %d", no);

    return 0;
}