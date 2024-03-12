#include <stdio.h>
#include <string.h>
int main()
{
    // char str[5][10] = {"Hello", "How", "are", "You", "Today"};
    char str[5][20];
    char vowel[] = "aeiou";
    int count = 0, i, j = 0, k;

    printf("Enter the 5 cities name : \n");
    for (i = 0; i < 5; i++)
    {
        fgets(str[i], 20, stdin); // fgets accept new line '\n' so output will print in new line
        // gets(str[i]);
    }

    for (i = 0; i < 5; i++) // pick up the string
    {
        for (k = 0; str[i][k] != '\0'; k++) // pick the individual character
        {
            for (j = 0; vowel[j] != '\0'; j++)
            {
                if (str[i][k] == vowel[j]) // check each character it is vowel or not
                {
                    count++;
                    break;
                }
            }
        }
        printf("In word \"%s\" vowel count is %d\n", str[i], count);
        count = 0;
    }
    return 0;
}
