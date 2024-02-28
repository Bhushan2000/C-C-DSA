#include <stdio.h>
void duplicate_elements(int[], int);
int main()
{
    int arr[] = {1, 4, 8, 1, 1, 2, 5, 6, 2, 5}, size = 10;
    duplicate_elements(arr, size);
    return 0;
}
void duplicate_elements(int arr[], int size)
{ // { 1, 4, 4, 1, 1 }
    int counter = 0, i, duplicate = 0, duplicate_no;
    while (counter != size - 1)
    {
        for (i = counter; i < size; i++)
        {
            if (arr[counter] == arr[i + 1] && duplicate_no != counter)
            {
                duplicate_no = arr[counter];
                duplicate++;
                break;
            }
        }
        counter++;
    }
    printf("duplicate number in array: %d", duplicate);
}