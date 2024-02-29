#include <stdio.h>
int hcf_of_two(int, int);
int main()
{
    printf("%d", hcf_of_two(4, 6));
    return 0;
}
int hcf_of_two(int n1, int n2) // 4 ,6
{
    // for (int i = n1 < n2 ? n1 : n2; i > 1; i--) // bigger number can not divide smaller number
    // {                                           // i = 24;                24>1;  i--
    //     if (n1 % i == 0 && n2 % i == 0)
    //     { // 4%4 == 0 && 6%4 == 0 false
    //         return i;
    //     }
    // }
    int min = n1 < n2 ? n1 : n2, chek;
    // while (i != 1)
    // {
    //     if (i == 1)
    //         return;
    //     if (n1 % i == 0 && n2 % i == 0)
    //     {
    //         printf("HCF of %d and %d is %d", 4, 6, i);
    //         return;
    //     }
    //     else
    //         i--;
    // }
    
}