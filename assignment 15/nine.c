#include <stdio.h>
void merged_arrays(int[], int[], int);
void sortArray(int[], int);
void sortArray_new_approach(int[], int[], int);
int main()
{
    int size = 5, arr1[] = {1, 3, 5, 7, 9}, arr2[] = {2, 6, 8, 11, 12};
    // merged_arrays(arr1, arr2, size);
    sortArray_new_approach(arr1, arr2, size);
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
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
// another approach added by teacher
void sortArray_new_approach(int arr1[], int arr2[], int size)
{
    int newArray[size * 2], i = 0, j = 0, k = 0;
    for (k = 0; k < size * 2; k++)
    {
        // when array is empty either one then we just copy remain array
        // tip it also for j
        if (i >= size)
        {
            /* code */
            while (k < 10)
            {
                /* code */
                newArray[k] = arr2[j];
                j++;
                k++;
                if (k == 10)
                    break;
            }
        }
        else if (arr1[i] < arr2[j])
        {
            newArray[k] = arr1[i];
            i++;
        }
        else
        {
            newArray[k] = arr2[j];
            j++;
        }
    }
    for (i = 0; i < size * 2; i++)
    {
        printf("%d ", newArray[i]);
    }
}