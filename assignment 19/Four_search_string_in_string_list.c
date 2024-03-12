#include <stdio.h>
#include <string.h>
int main()
{
    char str[4][20] = {"Hello", "How", "Are", "You"};
    char string[20];
    int i, j, flag = 0;
    printf("Enter your string : ");
    gets(string);
    for (i = 0; i < 4; i++)
    {
        if (strcmp(str[i], string) == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("String found!!");
    else
        printf("String not found!!");
    return 0;
}