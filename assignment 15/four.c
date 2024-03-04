#include <stdio.h>
void rotate_array_n_d_position(int[], int, int, int);
int main()
{
    int size = 5, arr[] = {32, 29, 40, 12, 70}, n = 2;
    // char d = 'l'; // left or Right
    char d = 'r'; // left or Right
    // resulting array after left rotation 2 times is [40, 12, 70, 32, 29]
    rotate_array_n_d_position(arr, size, n, d);
    return 0;
}
void rotate_array_n_d_position(int arr[], int size, int n, int d)
{
    // takes time 1:12 hr to think and implement it.
    int count = 0, temp;
    for (int i = 0; i < size; i++)
    {
        if (i > n && d == 'l')
        {
            temp = arr[count];
            while (count != size)
            {
                arr[count] = arr[count] + arr[count + 1];
                arr[count + 1] = arr[count] - arr[count + 1];
                arr[count] = arr[count] - arr[count + 1];
                count++;
            }
            if (count == size)
            {
                arr[size - 1] = temp;
                count = 0;
            }
        }
        else
        {
            count = size - 1;
            if (i > n && d == 'r')
            {
                temp = arr[count];
                while (count != 0)
                {
                    arr[count] = arr[count] + arr[count - 1];
                    arr[count - 1] = arr[count] - arr[count - 1];
                    arr[count] = arr[count] - arr[count - 1];
                    count--;
                }
                if (count == 0)
                {
                    arr[count] = temp;
                    count = size;
                }
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}