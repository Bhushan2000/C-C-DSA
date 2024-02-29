#include <stdio.h>
int main()
{
    int row = 3, column = 3;
    int arr[3][3] =
        {
            {22, 54, 5}, {78, 85, 5}, {15, 85, 5}};
    printf("Upper triangular Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (j >= i)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}
