#include <stdio.h>
int main()
{
    int x = 5;
    int *ptr = NULL; // it by default address to 0
    ptr = &x;
    printf("%d\n", &x);
    printf("%d\n", ptr);
    printf("%d\n", *&x);
    return 0;
}