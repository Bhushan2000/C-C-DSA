#include <stdio.h>
#include <string.h>
int main()
{
    // char str[10][10] = {"Nagpur", "Bihar", "Yawatmal", "Pune", "Latur", "Patna", "Savner", "Goa", "Thane", "Delhi"};
    int i, j, temp[20];
    char str[3][20];
    printf("Enter the strings:\n");
    for (int i = 0; i < 3; i++)
        fgets(str[i], 20, stdin);

    // bubble sort
    for (i = 0; i < 2; i++)
    {
        for (j = 1; j < 3; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                // swap
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
        printf("%s", str[i]);
    return 0;
}