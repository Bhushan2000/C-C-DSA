#include <stdio.h>
int main()
{
    // total number of alphabets, digits and special characters in a string
    char str[] = "String@123";
    char string[20];
    printf("Before copy %s\n", string);
    for (int i = 0; str[i]; i++)
    {
        string[i] = str[i];
    }
    printf("After copied %s", string);
    return 0;
}