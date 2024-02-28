#include <stdio.h>
void input(int[], int);
int main()
{
    int size = 10, arr[size], sumE = 0, sumO = 0;
    input(arr, size);
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            sumE = sumE + arr[i];
        else
            sumO = sumO + arr[i];
    }
    printf("sum of even numbers %d and odd numbers %d", sumO, sumE);
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
