#include <stdio.h>
void frequency_of_element(int[], int);
void frequency_of_element_new(int[], int);
int main()
{
    int arr1[] = {1, 2, 1, 4, 5, 5};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    // frequency_of_element(arr1, size);
    frequency_of_element_new(arr1, size);
    return 0;
}
// My Approach
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
// New Approach learn by teacher(Hashing or hashmap)
void frequency_of_element_new(int arr[], int size)
{
    int a[20] = {};
    int size_a = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < size; i++)
    {
        a[arr[i]]++; // jo students detail me nahi padhte unhe samz hi nahi aati ye line
    }
    printf("\n");
    for (int i = 0; i < size_a; i++)
    {
        if (a[i] != 0)
            printf("For %d frequency => %d \n", i, a[i]);
    }
}