#include <stdio.h>
int main()
{
    char str[] = "Malyalam@123";
    int frequency = 0;
    for (int i = 0; str[i]; i++)
    {
        frequency = 0;
        for (int j = 0; str[j]; j++)
        {
            if (str[i] == str[j + 1])
            {
                frequency++;
            }
        }
        printf("\n");
        printf("frequency of %c is %d", str[i], frequency);
    }
    return 0;
}