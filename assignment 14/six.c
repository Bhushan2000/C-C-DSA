#include <stdio.h>
void input(int[], int);
void sortarray(int[], int);
void sortArray_simple_way(int[], int);
int main()
{
    int size = 5, arr[] = {10, 2222, 333, 44, 5};
    //  int size = 10,   arr1[] = {10, 2222, 333, 44, 5, 766, 1000, 80, 9, 100};
    // input(arr, size);
    // sortarray(arr1, size);
    sortArray_simple_way(arr, size);
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
// myApproach first come in the mind
void sortarray(int a[], int size)
{
    int temp, i, arrysize = size;
    while (size != 1)
    {
        // Given array {10, 2222, 333, 44, 5}
        // size = 5 {10, 333, 44, 5,2222} // 1element sort
        // size = 4 {10, 44, 5, 333,2222} // two element sort
        // size = 3 {10, 5, 44, 333,2222} // three element sort
        for (i = 0; i < size - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        if (i == size - 1)
        {
            size--;
        }
    }
    for (int i = 0; i < arrysize; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nSize is %d", arrysize);
}

void sortArray_simple_way(int a[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
