#include <stdio.h>
void input(int[], int);
void second_largest(int[], int);
void second_largest_new_approach(int[], int);
int main()
{
    // int arr[] = {10, 55, 2, 988, 6};
    // int arr2[] = {8, 6, 7, 9, 3, 4, 2};
    int arr2[] = {2, 4, 8, 7, 2};

    int size = sizeof(arr2) / 4;
    // input(arr, size);
    second_largest(arr2, size);
    second_largest_new_approach(arr2, size);
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
void second_largest(int arr[], int size)
{ // {10, 55, 2, 988, 6}
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    printf("Second largest element of the array is %d\n", arr[1]);
}
// Another method added for second largest
// void second_largest_new_approach(int arr[], int size)
// {
//     int largest, s_largest;
//     for (int i = 0; i < size; i++)
//     {
//         /* code */
//         if (arr[i] > arr[i + 1])
//         {
//             /* code */
//             if (arr[i] > largest)
//             {
//                 /* code */
//                 largest = arr[i];
//                 s_largest = arr[i + 1];
//             }
//         }
//         else
//         {
//             if (arr[i + 1] > largest)
//             {
//                 /* code */
//                 largest = arr[i + 1];
//                 s_largest = arr[i];
//             }
//         }
//     }
//     printf("second largest : %d ", s_largest);
// }

// another approach
void second_largest_new_approach(int arr[], int size)
{
    //{8, 6, 7, 9, 3, 4, 2};
    int largest = arr[0], s_largest = 0;
    for (int i = 1; i < size; i++)
    {
        /* code */
        if (arr[i] > largest)
        {
            s_largest = largest;
            largest = arr[i];
        }

        if (arr[i] > s_largest)
        {
            s_largest = arr[i];
        }
    }
    printf("second largest : %d ", s_largest);
}