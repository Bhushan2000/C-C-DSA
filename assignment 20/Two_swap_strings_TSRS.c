#include <stdio.h>
#include <string.h>
// void swap_strings(char [], char []);
void swap_strings_new(char **, char **);
int main()
{
    // My Approach
    // char s1[] = "abc";
    // char s2[] = "pqr";
    // swap_strings(s1, s2);

    // New Approach
    char *s1[20], *s2[20]; // pointer hold the base address of the array
    printf("Enter two strings:");
    gets(s1);
    gets(s2);
    swap_strings_new(&s1, &s2); // call by reference
    printf("%s %s", s1, s2);
    return 0;
}
// My Approach
// void swap_strings(char s7[], char s8[])
// {
//     char temp[10];
//     strcpy(temp, s7);
//     strcpy(s7, s8);
//     strcpy(s8, temp);
// }
// New Approach
void swap_strings_new(char **string1, char **string2) // receive address in two level pointer
{
    char *temp;
    temp = *string1;
    *string1 = *string2;
    *string2 = temp;
}