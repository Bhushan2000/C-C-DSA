#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n, *ptr = NULL;
    int no, sum = 0;
    printf("How many data values you want to enter:");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the values:");
        scanf("%d", &no);
        *(ptr + i) = no;
        sum += *(ptr + i);
    }
    printf("Average is %d", sum / 3);
    free(ptr);
    return 0;
}