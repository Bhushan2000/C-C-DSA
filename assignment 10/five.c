#include <stdio.h>
void printNoddnumbers(int);
int main()
{
    int number = 10;
    // printf("Enter the number:");
    // scanf("%d", &number);
    printNoddnumbers(number);
    return 0;
}

// iterative approach
// void printNoddnumbers(int n)
// {
//     for (int i = 1; i <= n * 2; i++)
//     {
//         if (i % 2 != 0)
//             printf("%d ", i);
//     }
// }

// recursive approach
void printNoddnumbers(int n)
{
    if (n > 0)
    {
        printNoddnumbers(n - 1);
        printf("%d ", n);
    }
}