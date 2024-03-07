#include <stdio.h>
// Thursday, March 7, 2024 @ 05:52:25 PM
int main()
{
    char str[] = "Hello I am a powerful being. I take care of myself.";
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == 32)
        {
            count++;
        }
    }
    // one added for last word because there our loop is terminated.
    printf("Count for words is %d", count + 1);
    return 0;
}