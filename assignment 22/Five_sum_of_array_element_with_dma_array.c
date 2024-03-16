#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = NULL, n, no, sum = 0;
    printf("Enter the number you want to enter : ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i <= (n - 1) + sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (i <= n - 1)
        {
            // input DMA and sum of DMA variables:
            printf("Enter the number: ");
            scanf("%d", &no);
            *(ptr + i) = no;
            sum += *(ptr + i);
        }
        else
            // after sum of DMA variable read given array and added the sum of it to DMA variable sum
            sum += arr[i - n];
    }
    printf("Sum is : %d", sum);
    return 0;
}
