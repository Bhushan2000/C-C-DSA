#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *p = NULL;
    int max, min, n, no;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    // input
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number");
        scanf("%d", &no);
        *(p + i) = no;
    }
    min = *p;
    max = *p;
    // find min max
    for (int i = 0; i < n - 1; i++)
    {
        if (*(p + i) > *(p + (i + 1)))
        {
            if (*(p + i) > max)
                max = *(p + i);
            if (*(p + (i + 1)) < min)
                min = *(p + (i + 1));
        }
    }
    printf("Max=> %d Min=> %d", max, min);
    return 0;
}