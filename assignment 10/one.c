#include <stdio.h>
double simpleIntrest(double);
int main()
{
    double radius;

    printf("Enter the radius of the circle:");
    scanf("%lf", &radius);
    printf("Area of circle is : %.2lf", simpleIntrest(radius));
    return 0;
}

double simpleIntrest(double r)
{
    double area;
    area = 3.14 * r * r;
    return area;
}
