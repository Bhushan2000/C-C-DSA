#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void new_approach();
int main()
{
    // (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
    //  word1 = “the”, word2 = “fox”, OUTPUT : 1 )
    char str[5][20] = {"the", "quick", "brown", "fox", "quick"};
    char word1[10] = "the";
    char word2[10] = "fox";
    int flag, count = -1;

    for (int i = 0; i < 5; i++)
    {
        if (flag == 0)
        {
            count++;
        }
        if (strcmp(str[i], word1) == 0)
            flag = 0;

        if (strcmp(str[i], word2) == 0)
        {
            flag = 1;
            break;
        }
    }
    // printf("count for the word : %d", flag);
    new_approach();
    return 0;
}
void new_approach()
{
    char str[5][20] = {"my", "name", "name", "is", "prateek"};
    char word1[10] = "name";
    char word2[10] = "prateek";
    int startposition = -1, endpostion = -1, min_difference;
    for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++)
    {
        if (strcmp(str[i], word1) == 0)
            startposition = i;
        else if (strcmp(str[i], word2) == 0)
        {
            endpostion = i;
        }
    }
    min_difference = abs(endpostion - startposition) - 1;
    // it return always postive value like mod | w2-w1 | in maths
    printf("Minimum distance between two words is %d", min_difference);
    // printf("Minimum distance between two words is %d", (endpostion - startposition) - 1);
    //  -1 because we start the indexing from zero not from one
}