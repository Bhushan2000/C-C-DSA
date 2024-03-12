#include <stdio.h>
#include <string.h>
int factorial();
int main()
{
    char list[5][20] = {
        "xyz@gmail.com",
        "abc@gmail.com",
        "pqr@gmail.com",
        "pqr@hotmail.com",
    };
    char username[20];
    int flag = 0;
    printf("Enter the username:");
    gets(username);
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(list[i], username) == 0)
            flag = 1;
    }
    if (flag)
        printf("Username found and factorial of %d is %d ", 5, factorial());
    else
        printf("Username not found in the list");
    return 0;
}
int factorial()
{
    int fact = 1;
    for (int i = 1; i <= 5; i++)
        fact *= i;
    return fact;
}