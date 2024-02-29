#include <stdio.h>
int main()
{
    int row = 3, column = 3, row1scounter1, temp, i, j, result;
    int arr[3][3] = {{1, 75, 5}, {1, 1, 5}, {15, 85, 5}};
    printf("Row with max number of 1's :\n");
    for (i = 0; i < row; i++)
    {
        row1scounter1 = 0;
        for (j = 0; j < column; j++)
        {
            if (arr[i][j] == 1)
            {
                row1scounter1++;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        temp = row1scounter1;
    }
    if (i > 0)
    {
        if (temp > row1scounter1)
            result = temp;
        else
            result = row1scounter1;
    }
    printf("Row counter: %d ", result);
    return 0;
}
