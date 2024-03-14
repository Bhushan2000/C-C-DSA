#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Heeloo";
    char *ptr = NULL;
    ptr = str;
    int length = strlen(str) - 1;
    int i = length;
    while (i != -1)
        printf("%c ", *(ptr + i--));
    return 0;
}