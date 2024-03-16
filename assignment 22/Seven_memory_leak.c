#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *memory_leak();
int main()
{
    printf("%d", *memory_leak()); // we lost memory address memory leak
    return 0;
}
int *memory_leak()
{
    int *ptr = NULL;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 5;
    free(ptr);
    return ptr;
}