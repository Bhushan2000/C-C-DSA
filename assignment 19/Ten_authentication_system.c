#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char username_list[5][20] = {
        "xyz@gmail.com",
        "abc@gmail.com",
        "pqr@gmail.com",
        "pqr@hotmail.com",
    };
    char password_list[5][20] = {
        "123",
        "lkvlksaf",
        "dsfkd2@",
        "jdnvs31/.,",
    };
    char username[20];
    char password[20];
    int flag = 0;
    int choice;
    // while (1)
    // {
        printf("1.Authentication System:\n");
        // printf("2.exit:\n");
        // printf("Enter your choice:\n");

        printf("Enter the username:\n");
        gets(username);
        printf("Enter the password:\n");
        gets(password);
        // scanf("%d", &choice);
        //  switch (choice)
        //  {
        //  case 1:
        //      break;

        // case 2:
        //     exit(0);
        //     break;
        // }
    // }
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(username_list[i], username) == 0 &&
            strcmp(password_list[i], password) == 0)
            flag = 1;
    }
    if (flag)
        printf("Authentication Successful!!");
    else
        printf("Username or Password not found in the database");
    return 0;
}