#include <stdio.h>
void frequency_of_element(int[], int);
int main()
{
    int size = 5, arr1[] = {1, 2, 1, 4, 5};
    frequency_of_element(arr1, size);
    return 0;
}
void frequency_of_element(int arr[], int size)
{
    int frequency = 0, element, counter = 0, i;
    while (counter != size)
    {
        element = arr[counter];
        for (i = counter; i < size; i++)
        {
            if (arr[i + 1] == element)
            {
                frequency++;
                element = arr[i + 1];
            }
        }
        if (i == size)
        {
            counter++;
        }
        printf("Frequency is %d for element %d\n", frequency, element);
    }
}