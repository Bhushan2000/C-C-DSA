#include <stdio.h>
#include <string.h>
// Thursday, March 7, 2024 @ 05:25:33 PM
int main()
{
    // char str[] = "Malayalam";
    char str[] = "Hello";
    //  char str[] = "Level";
    //  char str[] = "Radar";
    // char str[] = "Noon";
    strlwr(str);
    // char str[] = "Hello";
    int size = sizeof(str), i = 0, j = size - 2 - i;
    // if ()
    //     printf("String is not palindrome");
    // else
    //     printf("String is palindrome");
    for (i = 0; i < size / 2; i++)
    {
        if (str[i] != str[j])
            break;
        else
        {
            if (i != j)
                j--;
        }
    }
    if (i == j + 1)
        printf("Palindrome string");
    else
        printf("Not a Palindrome string");
    return 0;
}