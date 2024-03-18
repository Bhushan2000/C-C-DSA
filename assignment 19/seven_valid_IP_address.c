#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    // x.x.x.x, where each x can be any value between 0 and 255.
    // 192.0.2.146 is a valid IPv4 address.
    char ip[] = "192.0.2.150";
    // int i, j = 0;
    // char value[3];
    // for (i = 0; str[i] != '\0'; i++)
    // {
    //     if (str[i] == '.')
    //     {
    //         j = 0;
    //         if (i == sizeof(str) - 2 || j == 0)
    //             printf("%s\n ", value);
    //         value[0] = '\0';
    //         value[1] = '\0';
    //         value[2] = '\0';
    //     }
    //     else
    //     {
    //         value[j] = str[i];
    //         j++;
    //     }
    // }
    char *a = NULL;
    int tokencount = 0;
    a = strtok(ip, "."); // tokenization
    while (a != NULL)
    {
        int x = atoi(a); // convert ascii to int
        if ((x >= 0) && (x <= 255))
        {
            tokencount++;
            printf("%d ", x);
        }
        a = strtok(NULL, ".");
    }
    printf("\nToken count is %d", tokencount);
    return 0;
}