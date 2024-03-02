#include <stdio.h>
int main()
{
    int no, digit;
    printf("Enter the no and a digit:");
    scanf("%d%d", &no, &digit);
    // My Previous Approach
    printf("Resultant number is %d%d", no, digit);
    // My updated Approach
    printf("\n");
    printf("Resultant number is %d", (no * 10) + digit);

    return 0;
}