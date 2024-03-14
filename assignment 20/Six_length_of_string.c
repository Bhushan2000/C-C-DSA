#include <stdio.h>
int main()
{
    //*tip // the type of the pointer should be exactly the same as of the address that you stored in it.
    char str[] = "Hello";
    int i;
    char *ptr = NULL;
    ptr = str;
    for (i = 0; *(ptr + i) != '\0'; i++)
        ;
    printf("length of the string: %d", i);
    return 0;
}