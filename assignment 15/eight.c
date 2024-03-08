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
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < i + 1; j++)
        {
            if (temp[j] != arr[i])
            {
                temp[j] = arr[i];
            }
        }
    }
    for (int i = 0; i < sizeof(temp)/4; i++)
    {
        printf("%d ", temp[i]);
    }
}