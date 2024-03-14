#include <stdio.h>
int main()
{
    char str[] = "malayalam";
    int consonant = 0, vowels = 0;
    char *ptr = NULL;
    ptr = str;
    for (int i = 0; *(ptr + i) != '\0'; i++)
    {
        if (*(ptr + i) == 'a' ||
            *(ptr + i) == 'e' ||
            *(ptr + i) == 'i' ||
            *(ptr + i) == 'o' ||
            *(ptr + i) == 'u')
            vowels++;
        else if (*(ptr + i) >= 'a' && *(ptr + i) <= 'z' ||
                 *(ptr + i) >= 'A' && *(ptr + i) <= 'Z')
            consonant++;
    }
    printf("Vowels=>%d consonant=>%d", vowels, consonant);
    return 0;
}