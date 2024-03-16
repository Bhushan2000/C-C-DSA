#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int bytes, *pt;
    char *st;
    printf("Enter the memory in bytes : ");
    scanf("%d", &bytes);
    if (bytes == 0)
        printf("memory allocation is failed.");
    else if (bytes % 4 == 0 || bytes % 8 == 0)
    {
        pt = (int *)malloc(sizeof(int));
        printf("Ready to allocate memory to int,float,double type of data");
    }
    else
    {
        st = (char *)malloc(sizeof(char));
        printf("Reday to allocate memory to char datatype.");
    }
    free(pt);
    free(st);
    return 0;
}