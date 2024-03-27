#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// int *memory_leak();
int main()
{
    // printf("Memory leak : %d", *memory_leak()); // we lost memory address memory leak

    // right way
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    ptr = NULL;
    // this is memory leak 
    // DMA variable is present in memory but we unable to access it.
    // "Dangling pointer" means we try to access that memory location that is deleted.
    return 0;
}
// int *memory_leak()
// {
//     int *ptr = NULL;
//     ptr = (int *)malloc(sizeof(int));
//     *ptr = 5;
//     free(ptr);
//     return ptr;
// }