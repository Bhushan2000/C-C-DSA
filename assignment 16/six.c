#include <stdio.h>
int main()
{
    int row = 3, column = 3, sumRow = 0, sumColumn = 0;

    int arr[3][3] =
        {
            {22, 54, 5}, {78, 85, 5}, {15, 85, 5}};

    printf("Given Matrix:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sumColumn += arr[j][i];
            sumRow += arr[i][j];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Sum of rows %d and column is %d", sumRow, sumColumn);
    return 0;
}
