#include <stdio.h>
void input(int[], int);
void second_smallest(int[], int);
int main()
{
    int size = 5, arr[] = {10, 55, 2, 988, 6};
    // input(arr, size);
    second_smallest(arr, size);
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
void second_smallest(int arr[], int size)
{ // {10, 55, 2, 988, 6}
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    printf("Second smallest element of the array is %d", arr[size - 2]);
}