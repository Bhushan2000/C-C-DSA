#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void new_approch_using_3d_matrix();
int main()
{
    char username_list[4][20] = {
        "xyz@gmail.com",
        "abc@gmail.com",
        "pqr@gmail.com",
        "pqr@hotmail.com",
    };
    char password_list[4][20] = {
        "123",
        "lkvlksaf",
        "dsfkd2@",
        "jdnvs31/.,",
    };
    char username[20];
    char password[20];
    int flag = 0;
    int choice;
    // My Approach
    // while (1)
    // {
    // printf("1.Authentication System:\n");
    // printf("2.exit:\n");
    // printf("Enter your choice:\n");

    // printf("Enter the username:\n");
    // gets(username);
    // printf("Enter the password:\n");
    // gets(password);
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
    // for (int i = 0; i < 5; i++)
    // {
    //     if (strcmp(username_list[i], username) == 0 &&
    //         strcmp(password_list[i], password) == 0)
    //         flag = 1;
    // }
    // if (flag)
    //     printf("Authentication Successful!!");
    // else
    //     printf("Username or Password not found in the database");

    new_approch_using_3d_matrix();
    return 0;
}

// apprach learn from teacher
void new_approch_using_3d_matrix()
{
    // create 3D array
    char arr[3][2][20] = {
        {"Hello", "123"},
        {"Ganesh", "562"},
        {"Yash", "123"}};
    
    int i, j, k, flag = 0;
    char username[20];
    char password[20];

    printf("Enter the Username : ");
    fflush(stdin);
    fgets(username, 20, stdin);
    username[strlen(username) - 1] = '\0';

    printf("Enter the Password : ");
    fflush(stdin);
    fgets(password, 20, stdin);
    password[strlen(password) - 1] = '\0';

    // no of user // no. of details(username,password) // max size of each details
    // input into the arr
    for (i = 0; i < 3; i++)
        if (strcmp(username, arr[i][0]) == 0 && strcmp(password, arr[i][1]) == 0)
            flag = 1;
    if (flag)
        printf("Login Successful!!");
    else
        printf("Username or Password not matched!!");
}