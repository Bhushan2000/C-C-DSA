#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "I am a Powerful Being.";
    int count = 0;
    // printf("After reversed is %s\n", strrev(str));
    //  check the condition for reverse the string using for loop

    for (int i = 0; str[i]; i++)
        count++;
    char strcopy[count];
    int i = 0, j = count - 1, temp;
    // for (int j = 0; j < count - 1; j++)
    // {
    //     for (int k = count - 1 - j; k >= k+1-j; k--)
    //     {
    //         strcopy[j] = str[k];
    //     }
    // }
    while (i <= j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    // reverse string using swapping tc O(n/2)

    printf("%s ", str);
    return 0;
}