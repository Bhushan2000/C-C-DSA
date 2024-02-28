#include <stdio.h>
int smallest_number(int[], int);
int main()
{
    int size = 5, arr[] = {10, 5555, 4, 1, 444};
    printf("smallest number from the given array is %d", smallest_number(arr, size));
    return 0;
}
int smallest_number(int a[], int size)
{
    int smallest = a[0];
    for (int i = 0; i < size; i++)
    {
        smallest = a[i] < smallest ? a[i] : smallest;
    }
    return smallest;
}