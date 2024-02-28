#include <stdio.h>
void input(int[], int);
void reverse_order(int[], int);
void printArray(int[], int);
int main()
{
    int size = 10, arr[] = {10, 54, 52, 68, 2, 56, 24, 56, 10, 1};
    // input(arr, size);
    reverse_order(arr, size);
    return 0;
}
void input(int arr[], int size)
{
    printf("Enter the values:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void reverse_order(int a[], int size)
{
    int newSize = size, i, temp;
    while (size != 1)
    {
        for (i = 0; i < size - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        if (i == size - 1)
        {
            size--;
        }
    }
    printArray(a, newSize);
}
void printArray(int arr[], int size)
{ // given array {10, 54, 52, 68, 2, 56, 24, 56, 10, 1};
    for (int i = size-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}