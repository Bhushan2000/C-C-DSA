#include <stdio.h>
int main()
{
    // total number of alphabets, digits and special characters in a string
    char str[] = "String@123";
    int countAlphabats = 0, countdigits = 0, countSpecialCharacter = 0;
    for (int i = 0; str[i]; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z'))
            countAlphabats++;
        if (str[i] >= '0' && str[i] <= '9')
            countdigits++;
        if ((str[i] >= '!' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@'))
            countSpecialCharacter++;
    }
    printf("countAlphabats = %d, countdigits = %d, countSpecialCharacter = %d", countAlphabats, countdigits, countSpecialCharacter);
    return 0;
}