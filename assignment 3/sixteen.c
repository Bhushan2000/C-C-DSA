#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character :");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
        printf("Given alphabet is in Lowercase");
    else if (ch >= 'A' && ch <= 'Z')
        printf("Given alphabet is in Uppercase");
    else if (ch >= '0' && ch <= '9')
        printf("Given alphabet is Number");
    else
        printf("Given alphabet is Special Character");

    return 0;
}