#include <stdio.h>
int main()
{
    int row = 3, column = 3, sum = 0;
    int arr[3][3] =
        {
            {22, 54, 5}, {78, 85, 5}, {15, 85, 5}};

    printf("Given Matrix:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = column - i - 1; j < column - i; j++)
        {
            sum += arr[i][j];
        }
        printf("\n");
    }
    printf("Sum of right diagnonal is %d", sum);
    return 0;
}
