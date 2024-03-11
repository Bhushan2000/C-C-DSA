#include <stdio.h>
int main()
{
    char str[] = "yahoo@1";
    int Alphabet = 0, number = 0;
    // string must contain at least one alphabet and one digit
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            Alphabet++;
        }
        if (str[i] >= '1' && str[i] <= '9')
        {
            number++;
        }
    }
    if (Alphabet > 0 && number > 0)
        printf("Alphanumeric string");
    else
        printf("Not a Alphanumeric string");
    return 0;
}