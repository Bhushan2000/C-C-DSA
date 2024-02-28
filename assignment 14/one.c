#include <stdio.h>
void input(int[], int);
void output(int[],int);
int main()
{
    int size = 10, arr[size], avg = 0;
    input(arr, size);
    output(arr, size);
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
void output(int arr[],int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = (sum + arr[i]);
    }
    printf("sum of numbers %d", sum);
}