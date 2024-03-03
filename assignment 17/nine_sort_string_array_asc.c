#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "String@123";
    int smallest = str[0], temp, position, counter = 0, i;
    while (counter != strlen(str) - 1)
    {
        smallest = str[counter];
        for (i = 0; i < strlen(str) - 1; i++)
        { // select smallest
            if (smallest < str[i + 1])
            {
            }
            else
            {
                smallest = str[i + 1];
                position = i + 1;
            }
        }
        if (str[counter] > str[position])
        {
            // swap
            temp = str[position];
            str[position] = str[counter];
            str[counter] = temp;
        }
        // change counter
        if (i == strlen(str)-1)
            counter++;
    }
    printf("After Sort on String %s", str);
    return 0;
}