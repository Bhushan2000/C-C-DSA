#include <stdio.h>
void primeFactors(int);
// Prime Factorization Methods
// The most commonly used prime factorization methods are:
// 1.Division Method
// 2.Factor Tree Method
int main()
{
    primeFactors(1050);
    return 0;
}
// My Approach

// void primeFactors(int number)
// {
//     int i, j, quotient;
//     for (i = 2; i < number; i++)
//     {
//         for (j = 2; j <= i; j++)
//         {
//             if (i % j == 0) // not prime
//                 break;
//         }
//         if (i == j)
//         {
//             while (quotient != 1)
//             {
//                 quotient = number / i; // until quotient becomes 1}
//                 printf("%d ", quotient);
//                 number = quotient;
//             }
//         }
//     }
// }

// New Approach by teacher

void primeFactors(int number)
{
    for (int i = 2; number > 1; i++)
    {
        while (number % i == 0)
        {
            printf("%d ", i);
            number = number / i;
        }
    }
}