#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *ptr = NULL;
    int n, sum = 0, i = 0, no;
    printf("How many numbers you want to enter:");
    scanf("%d", &n);
    ptr = (int *)malloc(sizeof(int) * n); // allocate memory for that amount of size
    // input
    while (i != n)
    {
        printf("Enter the number:");
        scanf("%d", &no);
        *(ptr + i) = no;
        sum += *(ptr + i++);
    }
    printf("Total sum is : %d", sum);
    free(ptr);
    return 0;
}