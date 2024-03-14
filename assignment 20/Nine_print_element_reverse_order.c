#include <stdio.h>
int main()
{
    int arr[] = {55, 5, 4, 6, 54, 3, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]) - 1;
    int i = size;
    while (i != -1)
        printf("%d ", arr[i--]);
    return 0;
}