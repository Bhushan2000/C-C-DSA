// count the objects created
// we have 2 ways
// 1. declare int variable  initialized it in default constructor as 'counter=0' and create increase memeber function.
// 2. by creating static int variable
#include <iostream>
using namespace std;
class Counter
{
private:
    // count objects using ordinary variable
    int counter; // Garbage
    // count objects using static variable
    int static counter2;

public:
    Counter()
    {
        counter = 0; // here we show that we can initialize variable to zero in default constructor
        counter2++;
    }
    void setData(int x)
    {
        counter = x;
    }
    int increaseCounter()
    {
        return counter++;
    }
    int getCounter()
    {
        return counter;
    }
    int getCounter2()
    {
        return counter2;
    }
};
int Counter::counter2;
int main()
{
    Counter c1, c2, c3;
    // using int variable count the objects
    c1.increaseCounter();
    c1.increaseCounter();
    cout << "Value of the count variable: " << c1.getCounter() << endl;

    // using static variable count the objects
    cout << "Value of the count variable: " << c1.getCounter2() << endl;
    return 0;
}
