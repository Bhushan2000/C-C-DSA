#include <stdio.h>
int first_occurance(int[], int);
int adjacent_duplicate(int[], int);
int main()
{
    // int arr[] = {1, 1, 2, 3, 3},
    int arr[] = {6, 10, 10, 4, 9, 9, 4, 6, 10}, size = sizeof(arr) / 4;
    // Input: arr[] = {10, 5, 3, 4, 3, 5, 6}
    // Output: 5
    if (adjacent_duplicate(arr, size))
        printf("Adjacent duplicate is : %d", adjacent_duplicate(arr, size));
    else
        printf("No Adjacent duplicate found");
     return 0;
}
//  first occurrence of adjacent duplicate values in the array.
// My first approach
int first_occurance(int arr[], int size)
{ // {10, 5, 3, 4, 3, 5, 6}
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
// correct way
int adjacent_duplicate(int arr[], int size)
{ 
    int duplicate_value = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j <= i + 1; j++)
        {
            if (arr[i] == arr[j])
            {
                 duplicate_value =  arr[i];
                 break;
            }
        }
        // first occurance of duplicate only we needed.
        if (duplicate_value!=0)
        {
            break;
        }
        
    }
    return duplicate_value;
}