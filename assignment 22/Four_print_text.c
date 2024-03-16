#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *pt = NULL;
    pt = (char *)malloc(sizeof(char) * 20);
    printf("Enter the text: ");
    fgets(pt, 20, stdin);
    for (int i = 0; *(pt + i); i++)
        printf("%c", *(pt + i));
    free(pt);
    return 0;
}