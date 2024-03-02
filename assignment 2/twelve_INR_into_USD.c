#include <stdio.h>
int main()
{
    float OneUSD = 82.85, INR;
    printf("Enter the amount in INR ");
    scanf("%f", &INR);
    printf("INR to USD : %.2lf dollar", INR / OneUSD);
    return 0;
}