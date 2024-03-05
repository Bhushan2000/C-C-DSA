#include <stdio.h>
int hcf_of_two(int, int);
int hcf(int,int);
int main()
{
    int a = 492, b = 248, result;
     printf("HCF is %d\n", hcf_of_two(36, 60));
    //printf("HCF is %d", hcf_of_two(10, 15));
    // printf("HCF is %d", hcf_of_two(35, 10));
    // printf("HCF is %d", hcf_of_two(31, 2));
    if (a > b)
        result = hcf(b, a % b);
    printf("HCF is %d", result);
    return 0;
}
int hcf_of_two(int n1, int n2) // 4 ,6
{
    // My Approach
    // for (int i = n1 < n2 ? n1 : n2; i > 1; i--) // bigger number can not divide smaller number
    // {                                           // i = 24;                24>1;  i--
    //     if (n1 % i == 0 && n2 % i == 0)
    //     { // 4%4 == 0 && 6%4 == 0 false
    //         return i;
    //     }
    // }

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

    // By using teacher approach
    int min, max;
    // by using Euclidean Algorithm
    min = n1 < n2 ? n1 : n2;
    max = n1 > n2 ? n1 : n2;
    if (max % min == 0)
        return min;
    return hcf_of_two(max - min, min);
}
// teacher approach
int hcf(int a, int b)
{
    if (b == 0)
        return a;
    hcf(b, a % b);
}