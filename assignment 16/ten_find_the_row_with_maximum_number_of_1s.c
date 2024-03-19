#include <stdio.h>
int main()
{
    int row = 3, column = 3, rowscounter, row_no, temp = 0, i, j;
    int arr[3][3] = {{1, 75, 5}, {1, 1, 5}, {1, 1, 1}};
    printf("Row with max number of 1's :\n");
    for (i = 0; i < row; i++)
    {
        rowscounter = 0;
        for (j = 0; j < column; j++)
        {
            if (arr[i][j] == 1)
            {
                rowscounter++;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        if (temp < rowscounter)
        {
             temp = rowscounter;
             row_no = i+1;
        }
    }
    printf("Max no of 1's in row: %d ", temp);
    return 0;
}