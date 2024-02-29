#include <stdio.h>
void merged_arrays(int[], int[], int);
void sortArray(int[], int);
int main()
{
    int size = 5, arr1[] = {1, 2, 3, 4, 5}, arr2[] = {15, 60, 8, 70, 6};
    merged_arrays(arr1, arr2, size);
    return 0;
}
void merged_arrays(int arr1[], int arr2[], int size)
{
    int arr3[size * 2];
    for (int i = 0; i < size * 2; i++)
    {
        if (i < size)
        {
            arr3[i] = arr1[i];
        }
        else
        {
            arr3[i] = arr2[i - size];
        }
    }
    sortArray(arr3, size * 2);
}
void sortArray(int arr[], int size)
{
    int counter = 0, smallest, position, i, temp;
    while (counter != size)
    {
        smallest = arr[counter];
        for (i = counter; i < size; i++)
        {
            // select small
            if (arr[i] < smallest)
            {
                smallest = arr[i];
                position = i;
            }
        }
        // swap
        if (smallest != arr[counter])
        {
            temp = arr[counter];
            arr[counter] = arr[position];
            arr[position] = temp;
        }
        // // change counter
        if (i == size)
            counter++;
    }
    for (int i = size-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
