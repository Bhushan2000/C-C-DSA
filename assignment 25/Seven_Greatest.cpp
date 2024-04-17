#include <iostream>
using namespace std;
class Greatest // greatest among three
{
private:
    int a;
    int b;
    int c;
    // to avoid function call repetedly.We store max in a variable so that we access it quickly.
    int max;

public:
    void set(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

public:
    // here we repeatdly call the function when it is required to use it.
    // so instead repeted calculation call function once and store max inside variable to get the quicker access
    // int greatest()
    // {
    //     return a > b ? a > c ? a : c : b > c ? b
    //                                          : c;
    // }
    void greatest()
    {
        max = a > b ? a > c ? a : c : b > c ? b
                                            : c;
    }

    void getMax()
    {
        greatest();
        cout << max;
    }
};
int main()
{
    Greatest g;
    g.set(1, 8, 8);
    // here we call getMax() using class object so no need to pass arguments
    // g argument pass implicitly
    g.getMax();
    return 0;
}