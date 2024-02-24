#include <stdio.h>
int nextPrime(int);
int main()
{
    int number = 6, i, j;
    // printf("Enter the number:");
    // scanf("%d", &number);
    printf("The next prime number is %d ", nextPrime(number));
    // My Approach(Jugadu) // according to my way both are right.
    // for (i = number + 1; i <= number + 2; i++)
    // {
    //     for (j = 2; j < i; j++)
    //     {
    //         if (i % j == 0)
    //             break;
    //     }

    //     if (i == j)
    //     {
    //         // next prime number
    //         printf("Next Prime number is %d", i);
    //         break;
    //     }
    // }

    return 0;
}
// new approach// teacher approach
// tip: increase number by 1 and then check next prime or not.
int nextPrime(int number)
{
    int i;
    while (1)
    {
        number++;
        for (i = 2; i <= number - 1; i++)
        {
            if (number % i == 0)
                break;
        }
        if (number == i)
            // no number divide the given number then prime
            return number;
    }
}