#include <stdio.h>
void input(int[], int);
int second_largest(int[], int);
int main()
{
    int size = 10, arr[] = {10, 55, 2, 988, 63, 4, 55, 6, 89, 66};
    // input(arr, size);
    printf("Second largest element of the array is %d", second_largest(arr, size));
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
int second_largest(int a[], int size)
{
    int greatest = a[0], second_large = a[0];
    for (int i = 0; i < size; i++)
    {
        greatest = a[i] > greatest ? a[i] : greatest;
        second_large = a[i] > second_large ? a[i] : second_large;
    }
    return second_large;
}