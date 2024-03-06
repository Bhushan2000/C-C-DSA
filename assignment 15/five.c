#include <stdio.h>
int first_occurance(int[], int);
int main()
{
    // int arr[] = {1, 1, 2, 3, 3},
    int arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10}, size = sizeof(arr) / 4;
    // Input: arr[] = {10, 5, 3, 4, 3, 5, 6}
    // Output: 5
    if (first_occurance(arr, size))
        printf("Adjacent duplicate is : %d", first_occurance(arr, size));
    else
        printf("No Adjacent duplicate found");
    return 0;
}
//  first occurrence of adjacent duplicate values in the array.
int first_occurance(int arr[], int size)
{   // {10, 5, 3, 4, 3, 5, 6}
    int value = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                value = arr[i];
                break;
            }
        }
        if (value != 0)
            break;
    }
    return value;
}