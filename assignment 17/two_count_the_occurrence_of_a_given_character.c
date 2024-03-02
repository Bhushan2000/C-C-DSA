#include <stdio.h>
int main()
{
    // input string
    char str[20];
    char a;
    int counter = 0;
    printf("Enter the string:");
    fgets(str, 20, stdin);
    printf("Enter the character:");
    scanf("%c", &a);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == a)
        {
            counter++;
        }
    }
    printf("Count of the character %c in string %s is %d",a,str,counter);
    return 0;
}