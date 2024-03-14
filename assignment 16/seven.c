#include <stdio.h>
int main()
{
    int row = 3, column = 3;
    int arr[3][3] = {{22, 54, 5}, {78, 85, 5}, {15, 85, 5}};
    printf("Lower triangular Matrix:\n");
    // My Approach
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // new approach learn by teacher
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i > j) // main condition
                arr[i][j] = 0;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
