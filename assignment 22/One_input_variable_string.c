#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *string_input();
void newApproach();
int main()
{
    char *t;
    // t = string_input();
    // for (int i = 0; *(t + i); i++)
    //     printf("%c", *(t + i));
    // free(t);
    newApproach();
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
// right approach
void newApproach()
{
    char *ptr, c;
    int j = 1, i = 0;
    ptr = (char *)malloc(sizeof(char));  // allocate one byte memory
    printf("Enter the String:");
    while (c != '\n')
    {
        c = getc(stdin); // accept one character at a time
        j++;
        ptr = (char *)realloc(ptr, j * sizeof(char));
        ptr[i] = c;
        i++;
    }
    ptr[i] = '\0';
    printf("Resultant string is %s", ptr);
}