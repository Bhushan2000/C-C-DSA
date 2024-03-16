#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *ptr1 = NULL, *ptr2 = NULL;
    ptr1 = malloc(sizeof(int));
    ptr2 = malloc(sizeof(int));
    *ptr1 = 5;
    *ptr2 = 7;
    printf("largest is : %d", *ptr1 > *ptr2 ? *ptr1 : *ptr2);
    free(ptr1);
    free(ptr2);
    return 0;
}