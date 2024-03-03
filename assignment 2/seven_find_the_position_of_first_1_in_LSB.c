#include <stdio.h>
#include <math.h>
int position_of_last_bit(int);
int main()
{
    int no = 19;
    // printf("Enter the no:");
    // scanf("%d", &no);
    //  enter your code here.
    //printf("%d", no & -no);
    // take 2's compliment of the number

    printf("Position of the first 1 in LSB is %d", position_of_last_bit(no));
    return 0;
}
int position_of_last_bit(int n)
{
    return log2(n & -n) + 1;
}
// Input: n = 18
// Output: 2
// Explanation: Binary Representation of 18 is 010010, hence position of first set bit from right is 2.