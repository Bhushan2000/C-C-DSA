#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "I am a Powerful Being.";
    printf("%s\n", str);
    printf("After converted into lowercase is %s", strupr(str));
    return 0;
}