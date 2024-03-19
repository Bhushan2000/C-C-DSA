#include <stdio.h>
void new_approach_sum_for_each_row();
int main()
{
    int row = 3, column = 3, sumRow = 0, sumColumn = 0;

    int arr[3][3] = {{22, 54, 5}, {78, 85, 5}, {15, 85, 5}};

    // printf("Given Matrix:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sumColumn += arr[j][i];
            sumRow += arr[i][j];
            // printf("%d ", arr[i][j]);
        }
        // printf("\n");
    }
    // printf("Sum of rows %d and column is %d", sumRow, sumColumn);
    new_approach_sum_for_each_row();
    return 0;
}
void new_approach_sum_for_each_row()
{
    int row = 3, column = 3;
    int sumRow[3] = {0}, sumColumn[3] = {0};

    int arr[3][3] = {{22, 54, 5}, {78, 85, 5}, {15, 85, 5}};

    // calculate sum
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sumRow[i] += arr[i][j];
            sumColumn[i] += arr[j][i];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // display sum
    for (int i = 0; i < row; i++)
    {
        printf("sum of row %d is %d \n", i, sumRow[i]);
        printf("sum of col %d is %d \n", i, sumColumn[i]);
    }
}