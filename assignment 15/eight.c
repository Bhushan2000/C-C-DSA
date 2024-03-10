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
    int temp[20] = {}; // initialize the array with zeros and place the arr[i] values on the required indexes in the temp[i]
    for (int i = 0; i < size; i++)
    {
        temp[arr[i]]++;
    }

    for (int i = 0; i < sizeof(temp) / 4; i++)
    {
        if (temp[i] != 0)
        {
            printf("%d ", i);
        }
    }
}