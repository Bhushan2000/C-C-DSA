#include <stdio.h>
#include <string.h>
void palindrome_new_approach();
void palindrome_new();
// Thursday, March 7, 2024 @ 05:25:33 PM
// Monday, March 11, 2024 @ 10:37:24 PM
int main()
{
    // char str[] = "Malayalam";
    char str[] = "Hello";
    // char str[] = "Level";
    // char str[] = "Radar";
    // char str[] = "Noon";
    strlwr(str);
    // char str[] = "Hello";
    int size = sizeof(str), i = 0, j = size - 2 - i;
    // My approach
    // for (i = 0; i < size / 2; i++)
    // {
    //     if (str[i] != str[j])
    //         break;
    //     else
    //     {
    //         if (i != j)
    //             j--;
    //     }
    // }
    // if (i == j + 1)
    //     printf("Palindrome string");
    // else
    //     printf("Not a Palindrome string");

    palindrome_new();
    return 0;
}
// My approach
void palindrome_new_approach()
{
    // char str[] = "noon";
    char str[] = "malayalam";
    int i = 0, j = sizeof(str) - 2;
    for (i = 0; i < sizeof(str) / 2; i++)
    {
        if (str[i] != str[j])
            break;
        else if (str[i] == str[j])
            if (i == j)
                break;
        j--;
    }
    if (i == j)
        printf("Palindrome string");
    else
        printf("Not a Palindrome string");
}
// approach by teacher
void palindrome_new()
{
    char str[] = "noon";
    // char str[] = "malayalam";
    int i = 0, j = sizeof(str) - 2;
    while (i <= j)
    {
        if (str[i] != str[j])
            break;
        else
        {
            i++;
            j--;
        }
    }
    if (i > j)
        printf("Palindrome string");
    else
        printf("Not a Palindrome string");
}