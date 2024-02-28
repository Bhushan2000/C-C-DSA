#include <stdio.h>
int greatest_number(int[], int);
int main()
{
    int size = 5, arr[] = {10, 5555, 4, 1, 444};
    printf("greatest number from the given array is %d", greatest_number(arr, size));
    return 0;
}
int greatest_number(int a[], int size)
{
    int greatest = a[0];
    for (int i = 0; i < size; i++)
    {
        greatest = a[i] > greatest ? a[i] : greatest;
    }
    return greatest;
}