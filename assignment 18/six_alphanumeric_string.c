#include <stdio.h>
int main()
{
    char str[] = "yahoo@12";
    int a = 0;
    // string must contain at least one alphabet and one digit
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' ||
            str[i] >= '1' && str[i] <= '9')
        {
            a = 1;
        }
    }
    if (a)
        printf("Alphanumeric string");
    else
        printf("Not a Alphanumeric string");
    return 0;
}