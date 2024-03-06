#include <stdio.h>
void unique_elements(int[], int);
int main()
{
    int arr[] = {1, 0, 2, 2, 4};
    int size = sizeof(arr) / 4;
    unique_elements(arr, size);
    return 0;
}
void unique_elements(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] != arr[j])
            {
                printf("%d ", arr[i]);
            }
        }
    }
}