#include <stdio.h>
int main()
{ //[2D array] [row of 2D array] [column of 2D array] // each braces represent row and the number inside it represents it as columns of array
    int array2D = 3, row = 3, column = 3;
    int arr[3][3] =
        {
            {22, 54, 5}, {78, 85, 5}, {15, 85, 5}
        };
    printf("Given Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("After transpose matrix is \n");

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
