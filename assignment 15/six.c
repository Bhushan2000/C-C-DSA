#include <stdio.h>
void input();
void output(int[], int);
int main()
{
    // int size = 5, arr[] = {45, 6, 8, 65, 66};
    input();
    return 0;
}
void input()
{
    int size;
    printf("How many numbers you want to entered:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the numbers:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    output(arr, size);
}
void output(int arr[], int size)
{
    printf("Reverse Order:");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}