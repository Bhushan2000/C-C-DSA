#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3};
    int *ptr = NULL, i = 0, sum = 0;
    ptr = arr;
    while (i < sizeof(arr) / sizeof(arr[0]))
        sum += *(ptr + i++);
    printf("Sum of the elements is : %d", sum);
    return 0;
}