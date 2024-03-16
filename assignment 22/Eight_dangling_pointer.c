#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fun();
int main()
{
    // dangling pointer
    fun();
    return 0;
}
void fun()
{
    int *p = NULL;
    p = (int *)malloc(sizeof(int));
    *p = 5;
    printf("%d\n", *p); // malloc variable data
    free(p); // p becomes dangling pointer
    printf("%d", *p); // illegal memory access
}