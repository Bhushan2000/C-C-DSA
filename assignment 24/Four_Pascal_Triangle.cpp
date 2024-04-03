#include <iostream>
using namespace std;
int factorial(int);
void pattern(int);
int combination(int, int);
int main()
{
    int lines;
    cout << "Pascal triangle: " << endl;
    cout << "How many lines you want to print: " << endl;
    cin >> lines;
    pattern(lines);
    return 0;
}
int factorial(int no)
{
    int fact = 1;
    while (no != 0)
    {
        fact *= no;
        no--;
    }
    return fact;
}
void pattern(int lines)
{
    int k, rcount;
    for (int i = 0; i < lines; i++)
    {
        k = 1;
        rcount = 0;
        for (int j = 0; j < lines * 2; j++)
        {
            if (j > lines - 1 - i && j < lines + 1 + i && k == 1)
            {
                // printf("*");
                cout << combination(i, rcount);
                rcount++;
                k = 0;
            }
            else
            {
                cout << " ";
                k = 1;
            }
        }
        cout << endl;
    }
}
int combination(int n, int r)
{
    int result;
    // formula
    // ncr = n! / (r!*(n-r)!)
    // (r<n) always this is condition
    // .............................
    result = factorial(n) / (factorial(r) * factorial(n - r));
    return result;
}
// permutation and combination
// factorial
// Pattern
