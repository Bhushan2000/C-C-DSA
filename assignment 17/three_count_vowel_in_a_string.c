#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Are you Ready?";
    char vowel[] = "aeiou";
    int count = 0;
    strlwr(str);
    for (int i = 0; str[i]; i++)
    {
        for (int j = 0; str[i] != ' ' && vowel[j]; j++)
        {
            /* code */
            if (str[i] == vowel[j])
            {
                count++;
                break;
            }
        }
    }
    printf("count for vowels in string is %d", count);
    return 0;
}