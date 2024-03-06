#include <stdio.h>
void duplicate_elements(int[], int);
int main()
{
    int arr[] = {1, 2, 3, 4, 1, 4, 5}, size = sizeof(arr) / 4;
    duplicate_elements(arr, size);
    // duplicate means element occurance two times
    return 0;
}
void duplicate_elements(int arr[], int size)
{
    int i, j, count = 0;
    for (j = 0; j < size - 1; j++)
    {
        for (i = j + 1; i < size; i++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
    }
    printf("duplicate number in array: %d", count);
}