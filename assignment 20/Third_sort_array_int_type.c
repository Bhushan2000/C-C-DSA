#include <stdio.h>
void sort(int *, int);
void sort_new_approach(int *, int);
int main()
{
    int arr[5] = {5, 3, 8, 4, 6};
    sort_new_approach(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}
// My Approach
void sort(int *ptr, int size)
{
    int temp;
    int round = size;
    // bubble sort
    while (round != 1)
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j <= i + 1; j++)
            {
                if (ptr[i] > ptr[j])
                {
                    // swap
                    temp = *(ptr + i);
                    *(ptr + i) = *(ptr + j);
                    *(ptr + j) = temp;
                }
            }
        }
        round--;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", i[ptr]);
    }
}
// new approach
void sort_new_approach(int *ptr, int size)
{
    int temp;
    for (int i = 1; i < size; i++) // first element automatically sort so loop start from 1
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                // swap
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + (j + 1));
                *(ptr + (j + 1)) = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", i[ptr]);
    }
}