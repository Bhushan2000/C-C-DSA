#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "I am a Powerful Being.";
    printf("%s\n", str);
    printf("After reversed is %s\n", strrev(str));
    // check the condition for reverse the string using for loop
    // for (int i = 0; str[i]; i++)
    // {
    //     printf("%c",str[i]);
    // }
    
    return 0;
}