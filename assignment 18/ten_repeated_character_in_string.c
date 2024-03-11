#include <stdio.h>
int main()
{
    char str[50] = "Good Morning";
    int temp[150] = {};
    int i;
    for (i = 0; str[i]; i++)
    {
        temp[str[i]]++;
    }
    for (i = 0; i < 150; i++)
    {
        if (temp[i] > 1 && i != 32)
            printf("%c => is %d \n", i, temp[i]);
    }

    return 0;
}