#include <stdio.h>
int calculate_sum_of_odd_natural_number(int);
int main()
{
    printf("%d", calculate_sum_of_odd_natural_number(5));
    return 0;
}
int calculate_sum_of_odd_natural_number(int number)
{
    int s;
    if (number == 1)
    {
        return 1;
    }
    s = number*2-1 + calculate_sum_of_odd_natural_number(number - 1);
    return s;
}