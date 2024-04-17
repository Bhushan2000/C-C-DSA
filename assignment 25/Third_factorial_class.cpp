#include <iostream>
using namespace std;
class Factoial
{
private:
    int no;

public:
    void set(int x)
    {
        no = x;
    }

private:
    int calculate(int no)
    {
        int fact = 1, x = no;
        while (x != 0)
        {
            fact = fact * x;
            x--;
        }
        return fact;
    }

public:
    void print()
    {
        cout << "Factorial of the number is " << calculate(no);
    }
};

int main()
{
    Factoial f1;
    int no;
    cout << "Enter the number to calculate factorial of the number: ";
    cin >> no;
    f1.set(no);
    f1.print();
    return 0;
}