#include <stdio.h>
void input(int[], int);
void copy_array(int[], int);
int main()
{
    int size = 5, arr[] = {10, 55, 2, 88, 9};
    // intput(arr, size);
    copy_array(arr, size);
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
void copy_array(int a[], int size)
{
    int new_array[size];
    for (int i = 0; i < size; i++)
    { // copy array
        new_array[i] = a[i];
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", new_array[i]);
    }
}