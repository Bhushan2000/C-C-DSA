#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello";

    printf("%d", strcmp(str, "Hello"));
    // show output 0 means both the string are same
    return 0;
}