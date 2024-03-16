#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *string_input();
int main()
{
    char *t;
    t = string_input();
    for (int i = 0; *(t + i); i++)
        printf("%c", *(t + i));
    free(t);
    return 0;
}
char *string_input()
{
    char *st = NULL;
    st = (char *)malloc(30);
    printf("Enter the string ");
    fgets(st, 30, stdin);
    return st;
}
