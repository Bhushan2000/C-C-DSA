#include <stdio.h>
int main()
{
    int z = 5, y = 9;
    int *x = NULL;
    x = &z;
    printf("Max number between two %d", *x > y ? *x : y);
    return 0;
}