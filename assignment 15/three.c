#include <stdio.h>
void sort_array(int[], int);
int main()
{
    int size = 16, arr[] = {10, 5555, 1, 5555, 4, 10, 444, 2, 4, 1, 444, 2, 454, 1, 656, 99999};
    // printf("smallest number from the given array is %d", );
    sort_array(arr, size);
    return 0;
}
// My Approach
void sort_array(int a[], int size)
{
    // arr[] = {10, 5555, 4, 1, 444}, // given array
    // arr[] = {1, 5555 ,4, 10, 444}, small 1
    // arr[] = {1, 4,5555,10, 444}, small 4
    // arr[] = {1, 4,10, 5555,444}, small 10
    // arr[] = 1, 4, 10, 444, 5555}; // small 444

    int counter = 0, smallest, position, i, temp;

    //{10, 5555, 4, 1, 444,2};

    while (counter != size)
    {
        smallest = a[counter];

        for (i = counter; i < size; i++)
        {
            // select small
            if (a[i] < smallest)
            {
                smallest = a[i];
                position = i;
            }
        }

        // swap
        if (smallest != a[counter])
        {
            temp = a[counter];
            a[counter] = a[position];
            a[position] = temp;
        }

        // // change counter
        if (i == size)
            counter++;
    }
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}