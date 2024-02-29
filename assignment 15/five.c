#include <stdio.h>
int first_occurance(int[], int);
int main()
{
    int arr[] = {1, 1, 2, 3, 3}, size = 5;
    if (first_occurance(arr, size))
        printf("Adjacent duplicate is : %d", first_occurance(arr, size));
    else
        printf("No Adjacent duplicate found");
    return 0;
}
//  first occurrence of adjacent duplicate values in the array.
int first_occurance(int arr[], int size)
{
    int counter = 0, value = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            value = arr[i];
        }
    }
    return value;
}