#include <iostream>
using namespace std;
void checkPrime(int);
int primeNumber(int);
int main()
{
    int no, i;
    cout << "Enter the number to check prime or not" << endl;
    cin >> no;
    // checkPrime(no);

    if (primeNumber(no))
        cout << "Number is not Prime";
    else
        cout << "Number is Prime";
}
void checkPrime(int no)
{
    int i;
    for (i = 2; i < no; i++)
        if (no % i == 0)
            break;
    if (i == no)
        cout << "Number is Prime";
    else
        cout << "Number is not Prime";
}
// Learn from Prateek Sir
int primeNumber(int no)
{
    int i;
    for (i = 2; i <= no / 2; i++)
        if (no % i == 0)
            return 1; // not prime
    return 0;         // prime
}