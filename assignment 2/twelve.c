#include <stdio.h>
int main()
{
    float OneUSD = 76.23, INR;
    printf("Enter the amount in INR ");
    scanf("%f", &INR);
    printf("INR to USD: %.2lf", INR / OneUSD);
    return 0;
}