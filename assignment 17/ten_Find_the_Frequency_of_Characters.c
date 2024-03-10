#include <stdio.h>
int main()
{
    char str[] = "Malyalam@123";
    int frequency = 0;
    // My Approach
    //..............................
    // for (int i = 0; str[i]; i++)
    // {
    //     frequency = 0;
    //     for (int j = 0; str[j]; j++)
    //     {
    //         if (str[i] == str[j + 1])
    //         {
    //             frequency++;
    //         }
    //     }
    //     printf("\n");
    //     printf("frequency of %c is %d", str[i], frequency);
    // }
    // New approach by teacher
    // ...........................
    char freq[150] = {};
    // for (int i = 0; str[i]; i++)
    // {
    //     freq[str[i]]++;
    // }
    // or
    int i = 0;
    while (str[i] != 0)
    {
        freq[str[i++]]++;
    }
    for ( i = 0; i < sizeof(freq) / sizeof(freq[0]); i++)
    {
        if (freq[i] != 0)
            printf("%c => %d \n", i, freq[i]);
    }
    return 0;
}