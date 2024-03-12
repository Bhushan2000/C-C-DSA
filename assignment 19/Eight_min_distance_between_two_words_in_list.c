#include <stdio.h>
#include <string.h>
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
    printf("count for the word : %d", flag);
    return 0;
}