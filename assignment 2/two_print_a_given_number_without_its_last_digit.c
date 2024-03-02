#include <stdio.h>
int main()
{
    int no;
    printf("Enter the number");
    scanf("%d", &no);
    printf("%d number without its last digit is %d", no, no / 10);
    return 0;
}