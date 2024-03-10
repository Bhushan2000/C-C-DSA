#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "I am a Powerful Being.";
    // printf("%s\n", str);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", (str[i] - 32));
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    // printf("After converted into lowercase is %s", strupr(str));
    return 0;
}