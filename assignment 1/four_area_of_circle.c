#include <stdio.h>
int main()
{
    float area,radius;
    printf("Enter the radius of circle:");
    scanf("%f", &radius);
    area = 2*3.14*radius*radius;
    printf("Area of circle is %.2f having the radius %.2f",area,radius);
    return 0;
}
