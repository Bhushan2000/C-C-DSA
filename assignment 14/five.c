#include <stdio.h>
void input(int[], int);
int smallest(int[], int);
int main()
{
    int size = 10, arr[] = {10, 2222, 333, 44, 5, 766, 1000, 80, 9, 100};
    input(arr, size);
    printf("smallest among all numbers is %d", smallest(arr, size));
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
int smallest(int arr[], int size)
{
    int smallest = arr[0];
    for (int i = 0; i < size; i++)
    {
        smallest = arr[i] > smallest ? smallest : arr[i];
    }
    return smallest;
}