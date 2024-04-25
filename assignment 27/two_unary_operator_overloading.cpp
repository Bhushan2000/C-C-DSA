#include <iostream>
using namespace std;
// increment and decrement
class Operator
{
private:
    int a;

public:
    void setData(int x)
    {
        a = x;
    }
    int operator++() // preincrement
    {
        cout << "operator++ called preincrement" << endl;
        return ++a;
    }
    int operator++(int dummy) // postincrement
    {                         // we have to add dummy int to differentiate between pre and post increment
        cout << "operator++ called postincrement" << endl;
        return a++;
    }
    //  friend int operator--(Operator);
    int operator--() // predecrement
    {
        cout << "operator-- called predecrement" << endl;
        return --a;
    }
    int operator--(int dummy) // postdecrement
    {
        cout << "operator-- called postdecrement" << endl;
        return a--;
    }
    void showData()
    {
        cout << a << endl;
    }
};

int main()
{
    Operator o;
    o.setData(5);
    //  memeber function
    //++o; // o.operator++();
    cout << o++ << endl;
    cout << ++o << endl;
    cout << o-- << endl;
    cout << --o << endl;
    return 0;
}