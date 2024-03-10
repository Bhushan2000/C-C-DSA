#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "MySirG Education Services";
    char temp[26] = {}, counter = 0;
    // “Services Education Mysirg”
    int i, j;
    for (i = 0; str[i]; i++)
    {
        if (str[i] == 32)
        {
            for (j = i - 1; j > -1 && str[j] != 32; j--)
            {
                temp[counter] = str[j];
                counter++;
            }
            temp[counter] = 32;
            counter++;
        }
        else if (i == sizeof(str) - 2)
        {
            for (j = i; str[j] != 32; j--)
            {
                temp[counter] = str[j];
                counter++;
            }
        }
    }
    printf("%s", strrev(temp));
    return 0;
}