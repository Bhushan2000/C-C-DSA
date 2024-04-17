#include <iostream>
using namespace std;
class StaticCount
{
private:
    static int counter;

public:
    void setData(int no)
    {
        counter = no;
    }
    int increaseCounter()
    {
        return counter++;
    }
    int getCounter()
    {
        return counter;
    }
};
int StaticCount::counter;
int main()
{
    StaticCount c;
    c.setData(10);
    c.increaseCounter();
    c.increaseCounter();
    c.increaseCounter();
    cout << c.getCounter();
    return 0;
}