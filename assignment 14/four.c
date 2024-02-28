#include <stdio.h>
void input(int[], int);
int greatest(int[], int);
int main()
{
    int size = 10, arr[] = {10, 2222, 333, 44, 5, 766, 1000, 80, 9, 100};
    // input(arr, size);
    printf("greatest among all numbers is %d", greatest(arr, size));
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
int greatest(int arr[], int size)
{
    int greatest = arr[0];
    for (int i = 0; i < size; i++)
    {
        greatest = arr[i] > greatest ? arr[i] : greatest;
    }
    return greatest;
}