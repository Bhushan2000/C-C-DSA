#include <iostream>
using namespace std;
class LargestNumber // greatest among three
{
private:
    int a;
    int b;
    int c;

public:
    void set(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

private:
    int greatest()
    {
        return a > b ? a > c ? a : c : b > c ? b
                                             : c;
    }

public:
    void print()
    {
        cout << greatest();
    }
};
int main()
{
    LargestNumber g;
    g.set(1, 8, 8);
    g.print();
    return 0;
}