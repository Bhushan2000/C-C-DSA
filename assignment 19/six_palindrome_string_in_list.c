#include <stdio.h>
#include <string.h>
int main()
{
    char str[6][20] = {"malayalam", "look", "noon", "joy", "bliss","level"};
    int i, j, size;
    for (i = 0; i < 6; i++)
    {
        size = strlen(str[i]) - 1; // calculate the size 
        for (j = 0; j <= size / 2; j++) // run loop til mid of the string
            if (str[i][j] != str[i][size - j]) // if first letter is not same then brake the loop
                break;
        if (j > size / 2)
            printf("%s ", str[i]);
    }
    return 0;
}