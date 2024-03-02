#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello";
    int i;
    for (i = 0; str[i]; i++)
        ;
    printf("%d", i);
    return 0;
}