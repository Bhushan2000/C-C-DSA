#include <stdio.h>
#include <string.h>
void reverse_string_word_by_word();
void new_approach();
void swap(char[], int, int);
int main()
{
    new_approach();
    return 0;
}
void reverse_string_word_by_word()
{
    char str[] = "MySirG Education Services";
    char temp[26] = {}, counter = 0;
    // output: “Services Education Mysirg”
    int i, j;
    for (i = 0; str[i]; i++)
    {
        if (str[i] == 32)
        {
            for (j = i - 1; j > -1 && str[j] != 32; j--)
            {
                temp[counter] = str[j];
                counter++;
            }
            temp[counter] = 32;
            counter++;
        }
        else if (i == sizeof(str) - 2)
        {
            for (j = i; str[j] != 32; j--)
            {
                temp[counter] = str[j];
                counter++;
            }
        }
    }
    printf("%s", strrev(temp));
}
// by teacher
void new_approach()
{
    char str[] = "MySirG Education Services";
    int i = 0, flag = 0, start = 0, end = 0;
    while (str[i] != '\0') // run until '\0' not found
    {
        while (str[i] != ' ') // run until ' ' not find
        {
            if (str[i] == '\0')  // check null character or not for last word
            {
                flag = 1;
                break;
            }
            end++;
            i++;
        }
        swap(str, start, end - 1);
        if (flag == 1)
            break;
        start = end++;
        i++;
    }
    swap(str, 0, i - 1);
    printf("%s", str);
}
void swap(char str[], int i, int j)
{
    char temp;
    while (i <= j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}