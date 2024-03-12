#include <stdio.h>
int main()
{
    char str1[5][20];
    // read
    printf("Enter strings:");
    for (int i = 0; i < 5; i++)
        fgets(str1[i], 20, stdin);
    // display
    printf("Output strings:\n");
    for (int i = 0; i < 5; i++)
        printf("%s", str1[i]);
    return 0;
}