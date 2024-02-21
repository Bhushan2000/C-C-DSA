#include <stdio.h>
double simpleIntrest(double,double,double);
int main()
{
    // SI = (p*r*t)/100
    double principle, rate, time;
    printf("Enter the principle, rate of interest and time in year:");
    scanf("%lf%lf%lf", &principle, &rate, &time);
    printf("Simple Intrest is : %.2lf", simpleIntrest(principle, rate, time));
    return 0;
}

double simpleIntrest(double p, double r, double t)
{
    double si;
    si = p * r * t / 100;
    return si;
}
