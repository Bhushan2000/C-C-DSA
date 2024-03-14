#include <stdio.h>
#include <string.h>
int swap_strings(char *[], char *[]);
int main()
{
    char s1[] = "abc";
    char s2[] = "pqr";
    swap_strings(s1, s2);
    printf("%s %s", s1, s2);
    return 0;
}
int swap_strings(char *s7[], char *s8[])
{
    char temp[10];
    strcpy(temp, s7);
    strcpy(s7, s8);
    strcpy(s8, temp);
}