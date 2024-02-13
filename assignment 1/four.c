#include <stdio.h>
int main()
{
    int area,radius;
    scanf("%d", &radius);
    area = 2*3.14*radius*radius;
    printf("Area of circle is %d having the radius %d",area,radius);
    return 0;
}
