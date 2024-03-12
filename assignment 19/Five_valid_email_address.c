#include <stdio.h>
#include <string.h>
int main()
{
    char str[6][30] = {
        "abc@gmail.com",
        "xyz@gmail.com",
        "def@gmail.com",
        "yahoo@gmail.com",
        "abc@hotmail.com",
        "abcgmail.com",
    };
    for (int i = 0; i < 6; i++)
    {
        if (strchr(str[i], '@') == 0) // means '@' not exist in the string
        {
            printf("%s", str[i]);
        }
    }

    return 0;
}