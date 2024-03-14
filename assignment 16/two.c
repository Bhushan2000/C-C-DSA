#include <stdio.h>
int main()
{ //[2D array] [row of 2D array] [column of 2D array] // each braces represent row and the number inside it represents it as columns of array
    int array2D = 3, row = 3, column = 3;
    int i, j, k, sum = 0;
    // int arr[3][3] = {{22, 54, 5}, {78, 85, 5}, {15, 85, 5}},
    //     arr1[3][3] = {{22, 54, 5}, {78, 85, 5}, {15, 85, 5}},
    int arr[3][3] = {{12, 8, 4}, {3, 17, 14}, {9, 8, 10}},
        arr1[3][3] = {{5, 19, 3}, {6, 15, 9}, {7, 8, 16}},
        arr2[3][3];
    // My Approach
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < column; j++)
    //     {
    //         arr2[i][j] = arr[i][j] * arr1[i][j];
    //         printf("%d ", arr2[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // right_approach
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
                sum += arr[i][k] * arr1[k][j];
            arr2[i][j] = sum;
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
