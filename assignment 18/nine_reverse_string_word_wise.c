#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "MySirG Education Services";
    int size = sizeof(str);
    char str1[size], counter = 0;
    // “Services Education Mysirg”
    int i, j;
    for (i = size - 1; i != 0; i--)
    {
        if (str[i] == 32)
        {
            for (j = i + 1; str[j]; j++)
            {
                // printf("%c", str[j]);
                str1[counter] = str[j];
                counter++;
            }
            if (j != 0)
            {
                str1[counter] = 32;
                counter++;
            }
        }
    }

    // printf("%d", strlen(str1));
    printf("%s", str1);

    return 0;
}