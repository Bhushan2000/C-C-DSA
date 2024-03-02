#include <stdio.h>
int main()
{
    char a = 'a';
    char str[] = "Hello";
    printf("%d", sizeof(str)); 
    // length of string 6 // 5 characters in string and one count for null character '\0'.
    return 0;
}
