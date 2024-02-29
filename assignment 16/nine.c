#include <stdio.h>
int main()
{
    int row = 3, column = 3, counter = 0;
    int arr[3][3] = {{0, 54, 5},
                     {78, 0, 0},
                     {15, 0, 0}};
    int array[3][3] = {{1, 0, 3},
                       {0, 0, 4},
                       {6, 0, 0}};
    int size = sizeof(arr) / 4;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (array[i][j] == 0)
            {
                counter++;
            }
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    if (counter > (size / 2))
        printf("Sparse Matrix");
    else
        printf("Not a sparse Matrix");
    return 0;
}
