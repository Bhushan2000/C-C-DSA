#include <iostream>
using namespace std;
void checkPrime(int);
int main()
{
    int no, i;
    cout << "Enter the number to check prime or not" << endl;
    cin >> no;
    checkPrime(no);
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